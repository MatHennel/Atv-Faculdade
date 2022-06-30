package ifpr.pgua.eic.atividade06;

import java.util.ArrayList;
import java.util.Scanner;

/**
 * Hello world!
 *
 */
public class App {
    private static Scanner scan = new Scanner(System.in);
    private static Estacionamento estacionamento = new Estacionamento("estacionamento", "122");

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

    private static String menu() {
        String str = "-----------------------------------------------";
        str = str + "\n|\t1) Cadastrar veiculos\t\t      |";
        str = str + "\n|\t2) Buscar veiculos por placa\t      |";
        str = str + "\n|\t3) Registrar entrada veiculo\t      |";
        str = str + "\n|\t4) Registrar saida veiculo\t      |";
        str = str + "\n|\t5) Listar todos os veiculos\t      |";
        str = str + "\n|\t6) Listar veiculos estacionados\t      |";
        str += "\n|\t7) Sair\t\t\t\t      |";
        str += "\n-----------------------------------------------";

        str += "\n>";

        return str;
    }

    private static void testaCadastrarVeiculo() {

        System.out.print("Digite a placa do veiculo: ");
        String placa = scan.next();
        System.out.print("Digite o modelo do veiculo: ");
        String modelo = scan.next();
        System.out.print("Digite o fabricante do veiculo: ");
        String fabricante = scan.next();
        System.out.print("Digite o ano do veiculo: ");
        int anoFabricacao = scan.nextInt();
        System.out.print("Digite a cor do veiculo: ");
        String cor = scan.next();

        boolean cadastro = estacionamento.cadastraVeiculo(placa, modelo, fabricante, anoFabricacao, cor);

        if (cadastro) {
            System.out.println("Veiculo Cadastrado!");
        } else {
            System.out.println("Erro!");
        }

        scan.nextLine();
        scan.nextLine();

    }

    private static void listarTodosVeiculos() {
        ArrayList<Veiculo> veiculo = estacionamento.listaTodosVeiculos();

        if (veiculo == null) {
            System.out.println("Nao ha veiculos cadastrados!");
            scan.nextLine();
            scan.nextLine();
        } else {
            System.out.println("Veiculos registrados: ");
            System.out.println();
            for (int i = 0; i < veiculo.size(); i++) {
                System.out.println(i + 1 + ")" + veiculo.get(i));
                System.out.println();

            }
            scan.nextLine();
            scan.nextLine();
        }

    }

    private static void listarVeiculosEstacionados() {
        ArrayList<Veiculo> veiculoEstacionado = estacionamento.listaVeiculosEstacionados();

        if (veiculoEstacionado == null) {
            System.out.println("Nao ha veiculos estacionados!");
            scan.nextLine();
            scan.nextLine();
        } else {
            System.out.println("Veiculos estacionados: ");
            System.out.println();
            for (int i = 0; i < veiculoEstacionado.size(); i++) {
                System.out.println(i + 1 + ")" + veiculoEstacionado.get(i));
                System.out.println();

            }
            scan.nextLine();
            scan.nextLine();
        }
    }

    private static void buscarVeiculo() {
        Veiculo veiculo;
        System.out.print("Placa do veiculo: ");
        String placa = scan.next();

        veiculo = estacionamento.buscarVeiculo(placa);

        if (veiculo == null) {
            System.out.println("Veiculo nao encontrado!");
        } else {
            System.out.println(veiculo);
            scan.nextLine();
            scan.nextLine();
        }

    }

    private static void registraEntrada() {
        System.out.println("Digite a placa para registrar entrada: ");
        String placa = scan.next();

        boolean entrada = estacionamento.registraEntrada(placa);

        if (entrada == false) {
            System.out.println("Erro");
            scan.nextLine();
            scan.nextLine();
        }
    }

    private static void registraSaida() {
        System.out.println("Digite a placa para retirar o veiculo");
        String placa = scan.next();

        int totalMinutos = estacionamento.registraSaida(placa);

        if (totalMinutos == -1) {
            System.out.println("Erro");
            scan.nextLine();
            scan.nextLine();
        } else {
            System.out.println("Tempo permanenido: " + totalMinutos);
            scan.nextLine();
            scan.nextLine();
        }
    }

    private static void gerarVeiculos() {

    }

    public static void main(String[] args) {
        int op;
        boolean sair = false;

        while (sair == false) {
            System.out.print(menu());
            op = scan.nextInt();

            switch (op) {
                case 1:

                    testaCadastrarVeiculo();

                    break;

                case 2:

                    buscarVeiculo();

                    break;

                case 3:
                    registraEntrada();

                    break;

                case 4:

                    registraSaida();

                    break;

                case 5:

                    listarTodosVeiculos();

                    break;

                case 6:

                    listarVeiculosEstacionados();

                    break;
                case 7:
                    sair = true;
                    break;
            }
        }

    }
}
