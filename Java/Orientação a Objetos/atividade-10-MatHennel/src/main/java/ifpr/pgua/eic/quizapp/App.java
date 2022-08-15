package ifpr.pgua.eic.quizapp;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Hello world!
 *
 */
public class App{
    public static void main( String[] args ) throws Exception {
        Scanner scan = new Scanner(System.in);

        ArrayList<Questao> lista = new ArrayList<>();
        int opcao;

        lista.add(new Questao("Qual a capital do Paraná?", "Curitiba", new String[]{"Floripa", "Porto Alegre", "São Paulo"}));
        lista.add(new Questao("Qual a capital de São Paulo?", "São Paulo", new String[]{"Floripa", "Rio de Janeiro", "Campo Grande"}));
        lista.add(new Questao("Qual a capital do Acre?", "Rio Branco", new String[]{"Manaus","Palmas", "João Pessoa"}));
        lista.add(new Questao("Qual a capital de Rondonia?", "Porto Velho", new String[]{"Belém", "Macapá", "Manaus"}));

        ControladorQuiz controlador = new ControladorQuiz(lista);

        while(controlador.temProximaQuestao()){
            Questao questao = controlador.getQuestao();
            System.out.println(questao.getEnunciado());
            List<String> alternativas = questao.getAlternativas();
            for(int i=0;i<alternativas.size();i++){
                System.out.println((i+1)+"- "+alternativas.get(i));
            }
            System.out.println("Digite uma opção:");
            opcao = scan.nextInt();
            if(opcao >=1 && opcao <= alternativas.size()){
                
                if(controlador.respondeQuestao(alternativas.get(opcao-1))){
                    System.out.println("Acertou!!");
                }else{
                    System.out.println("Errou!!");
                }
                
                controlador.proximaQuestao();

            }else{
                System.out.println("Opção inválida!");
            }
            
        }  
        
        System.out.println("Resultado: "+controlador.getAcertos()+" acertos e "+controlador.getErros()+" erros!" );


    }   
}
