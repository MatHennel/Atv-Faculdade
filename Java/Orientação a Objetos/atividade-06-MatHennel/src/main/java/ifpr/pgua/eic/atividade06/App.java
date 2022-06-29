package ifpr.pgua.eic.atividade06;

import java.util.Scanner;

/**
 * Hello world!
 *
 */
public class App 
{
    private static Scanner scan = new Scanner(System.in);
    private static Estacionamento estacionamento;

    public static Scanner getScan() {
        return scan;
    }

    public static void setScan(Scanner scan) {
        App.scan = scan;
    }

    public static Estacionamento getEstacionamento() {
        return estacionamento;
    }

    public static void setEstacionamento(Estacionamento estacionamento) {
        App.estacionamento = estacionamento;
    }

    private static String menu(){
        String str = "-----------------------------------------------";
        str = str + "\n|\t1) Cadastrar veiculos\t\t      |";
        str = str + "\n|\t2) Buscar veiculos por placa\t      |";
        str = str + "\n|\t3) Registrar entrada veiculo\t      |";
        str = str + "\n|\t4) Registrar saida veiculo\t      |";
        str = str + "\n|\t5) Listar todos os veiculos\t      |";
        str = str + "\n|\t6) Listar veiculos estacionados\t      |";
        str += "\n-----------------------------------------------";

        str += "\n>";

        return str;
    }

    private static void testaCadastrarVeiculo(){

    }

    private static void listarTodosVeiculos(){

    }

    private static void listarVeiculosEstacionados(){

    }

    private static void buscarVeiculo(){

    }

    private static void registraEntrada(){

    }

    private static void registraSaida(){

    }

    private static void gerarVeiculos(){

    }

    public static void main( String[] args )
    {
        System.out.println(menu());
    }
}
