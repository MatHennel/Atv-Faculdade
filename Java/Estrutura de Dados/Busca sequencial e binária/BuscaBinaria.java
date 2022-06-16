import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;



public class BuscaBinaria {
    public static void main(String [] args){
        int [] v = new int[10];
        long tabela [] = new long[6];
        Scanner ler = new Scanner(System.in);
        int i = 0;
        

        

        tabela = buscaBinaria(v,tabela,ler,i);

        int tamVetor = 10;
        for(int j = 0;j < 5;j++){
            System.out.println("Tempo vetor ["+tamVetor+"]: " + tabela[j]);
            tamVetor = tamVetor * 10;
        }
       

    }

    public static long[] buscaBinaria(int v[],long tabela[],Scanner ler,int i){

            int inicio = 0;
            int fim = v.length - 1;
            int meio = 0;
            int chave = 0;
            long tempoInicial = 0;
            long tempoFinal = 0;
            Random aleatorio = new Random();
            

           

            

            for(int j = 0;j < v.length;j++){
                v[j] = aleatorio.nextInt(100);
            }

            Arrays.sort(v);
            int k = 0;
            for(int j = 0;j < v.length;j++){
                k = j + 1;
                System.out.print(v[j] + "["+k+"]" + " ");
            }
            
            System.out.print("Digite o numero que esta procurando: ");
            chave = ler.nextInt();            

            
            tempoInicial = System.currentTimeMillis();

            while(inicio <= fim){
            

            meio = (inicio + fim)/2;

            if(chave > v[meio]){
                inicio = meio + 1;
            }
            else if(chave < v[meio]){
                fim = meio - 1;
            }
            else if(chave == v[meio]){
                i++;
                v = new int[v.length*10];
                System.out.println("ACHEIIIIIIIIIIIIIIIII");
                
                
            }
            else{
                i++;
                v = new int[v.length*10];
                System.out.println("NAOOOOO ACHEIIIIIIIIIIIIIIIII");
            }

           
            
            

            
              
        }
            

                tempoFinal = System.currentTimeMillis() - tempoInicial;
                tabela[i] = tempoFinal;
                System.out.println(tempoFinal);
                

        if(v.length == 1000000){
            return tabela;
        }

             

         return buscaBinaria(v, tabela,ler,i);
    }
}
