package ifpr.pgua.eic.tads;

import java.util.ArrayList;
import java.util.Scanner;

import ifpr.pgua.eic.tads.modelos.Banco;
import ifpr.pgua.eic.tads.modelos.ContaCorrente;
import ifpr.pgua.eic.tads.modelos.Pessoa;

public class App {

    public static String menuGeral() {
        String str = "";

        str += "1 - Conta\n";
        str += "2 - Pessoa\n";
        str += "3 - Banco\n";
        str += "0 - Voltar\n";

        return str;

    }

    public static String menuBanco() {
        String str = "";

        str += "1 - Listar as pessoas\n";
        str += "2 - Listar as contas\n";
        str += "0 - Voltar\n";

        return str;
    }

    public static String menuConta() {
        String str = "";

        str += "1 - Criar conta\n";
        str += "2 - Depositar\n";
        str += "3 - Sacar\n";
        str += "4 - Ver dados\n";
        str += "0 - Sair\n";

        return str;
    }

    public static String menuPessoa() {
        String str = "";
        str += "1 - Cadastrar\n";
        str += "2 - Mostrar\n";
        str += "0 - Voltar\n";

        return str;

    }

    public static boolean verificaConta(int conta, ArrayList<Integer> verificaConta, Scanner scan) {

        Boolean erro = false;

        for (int i = 0; i < verificaConta.size(); i++) {
            if (conta == verificaConta.get(i)) {
                erro = true;
            } else {
                erro = false;
            }
        }

        return erro;

    }

    public static boolean verificaAgencia(int agencia, ArrayList<Integer> verificaAgencia, Scanner scan) {

        Boolean erro = false;

        for (int i = 0; i < verificaAgencia.size(); i++) {
            if (agencia == verificaAgencia.get(i)) {
                erro = true;
            } else {
                erro = false;
            }
        }

        return erro;

    }

    public static void main(String[] args) throws Exception {
        ContaCorrente conta = null;
        Pessoa pessoa = null;
        Banco banco = new Banco("Bamerindus", "009-0099", "001001/00-9");

        Scanner scan = new Scanner(System.in);
        int opcao;

        int numeroDaConta;
        int agencia;
        String documento;
        String senha;
        boolean ativa;
        double saldo, valor;
        ArrayList<String> verificaCpf;
        verificaCpf = new ArrayList<String>();
        int flag = 0;
        int flag2 = 0;
        int flag3 = 0;
        boolean erro = false;
        String nome, cpf;
        int idade;
        double salario;
        ArrayList<Integer> verificaConta = new ArrayList<>();
        ArrayList<Integer> verificaAgencia = new ArrayList<>();

        do {
            System.out.println(menuGeral());
            opcao = scan.nextInt();
            scan.nextLine();
            if (opcao == 2) { // Menu da pessoa
                System.out.println(menuPessoa());
                opcao = scan.nextInt();
                scan.nextLine();
                switch (opcao) {
                    case 1:
                        System.out.println("Digite o nome:");
                        nome = scan.nextLine();
                        int cont = 0;

                        if (flag > 0) {
                            do {
                                if (cont < 3) {
                                    System.out.println("Digite o cpf:");
                                    cpf = scan.nextLine();
                                } else {
                                    System.out.println(
                                            "Voce esta digitando um cpf já existente no banco de dados, digite um diferente:");
                                    cpf = scan.nextLine();
                                }
                                cont++;

                                for (int i = 0; i < verificaCpf.size(); i++) {
                                    if (cpf.equals(verificaCpf.get(i))) {
                                        erro = true;
                                    } else {
                                        erro = false;
                                    }
                                }

                            } while (erro == true);
                        } else {
                            System.out.println("Digite o cpf:");
                            cpf = scan.nextLine();
                        }

                        flag++;

                        System.out.println("Digite a idade:");
                        idade = scan.nextInt();
                        System.out.println("Digite o salario:");
                        salario = scan.nextDouble();
                        verificaCpf.add(cpf);
                        for (int index = 0; index < verificaCpf.size(); index++) {
                            System.out.println(verificaCpf.get(index));
                        }
                        pessoa = new Pessoa(nome, cpf, idade, salario);
                        banco.cadastrarPessoa(pessoa);

                        System.out.println("Cadastrada!");
                        break;
                    case 2:
                        System.out.println("Detalhes da pessoa");
                        if (pessoa != null) {
                            System.out.println(pessoa);
                        } else {
                            System.out.println("Pessoa não criada!");
                        }
                        break;
                }
            } else if (opcao == 1) {

                System.out.println(menuConta());
                opcao = scan.nextInt();
                scan.nextLine();

                switch (opcao) {
                    case 1:
                        if (pessoa != null) {

                            int cont = 0;
                            if (flag2 != 0) {
                                do {
                                    if (cont < 3) {
                                        System.out.println("Digite o número da conta:");
                                        numeroDaConta = scan.nextInt();
                                    } else {
                                        System.out.println(
                                                "Voce esta digitando uma conta ja existente no banco de dados, digite uma diferente:");
                                        numeroDaConta = scan.nextInt();
                                    }

                                    cont++;

                                } while (verificaConta(numeroDaConta, verificaConta, scan));
                            } else {
                                System.out.println("Digite o número da conta:");
                                numeroDaConta = scan.nextInt();
                            }

                            flag2++;

                            verificaConta.add(numeroDaConta);

                            scan.nextLine();

                            cont = 0;

                            if (flag3 != 0) {
                                do {
                                    if (cont < 3) {
                                        System.out.println("Digite o número da agencia:");
                                        agencia = scan.nextInt();
                                    } else {
                                        System.out.println(
                                                "Voce esta digitando uma agencia ja existente no banco de dados, digite uma diferente:");
                                        agencia = scan.nextInt();
                                    }

                                    cont++;

                                } while (verificaConta(agencia, verificaAgencia, scan));
                            } else {
                                System.out.println("Digite a agência:");
                                agencia = scan.nextInt();
                            }

                            flag3++;

                            verificaAgencia.add(agencia);

                            scan.nextLine();
                            System.out.println("Digite a senha:");
                            senha = scan.nextLine();
                            System.out.println("Está ativa (1-sim;0-não)");
                            opcao = scan.nextInt();
                            ativa = opcao == 1;
                            System.out.println("Quer informa o saldo? (1-sim;0-não)");
                            opcao = scan.nextInt();

                            if (opcao == 1) {
                                System.out.println("Digite o saldo:");
                                saldo = scan.nextDouble();
                                // Print do ArrayList da classe banco
                                for (int i = 0; i < banco.getPessoas().size(); i++) {
                                    System.out.println("- " + i + ")" + banco.getPessoas().get(i));
                                }
                                System.out.println("Digite de quem eh essa conta");
                                int selecaoPessoa = scan.nextInt();

                                conta = new ContaCorrente(numeroDaConta, agencia, banco.getPessoas().get(selecaoPessoa),
                                        senha, ativa, saldo);

                            } else {
                                conta = new ContaCorrente(numeroDaConta, agencia, pessoa, senha, ativa);

                            }

                            pessoa.setContaCorrente(conta);
                            banco.cadastarConta(conta);
                            System.out.println("Conta criada!!");
                        } else {
                            System.out.println("Necessário uma pessoa!");
                        }
                        break;
                    case 2:
                        System.out.println("Depositar!");
                        if (conta != null) {
                            System.out.println("Digite um valor:");
                            valor = scan.nextDouble();
                            if (conta.depositar(valor)) {
                                System.out.println("Realizado!");
                            } else {
                                System.out.println("Não Realizado! Valor insuficiente!");
                            }

                        } else {
                            System.out.println("Não permitido! Crie uma conta!");
                        }
                        break;

                    case 3:
                        System.out.println("Sacar!");
                        if (conta != null) {
                            System.out.println("Digite um valor:");
                            valor = scan.nextDouble();
                            if (conta.sacar(valor)) {
                                System.out.println("Realizado!");
                            } else {
                                System.out.println("Não realizado! Valor inválido ou insuficiente!");
                            }

                        } else {
                            System.out.println("Não permitido! Crie uma conta!");
                        }
                        break;
                    case 4:
                        System.out.println("Extrato!");
                        if (conta != null) {
                            System.out.println(conta);
                        } else {
                            System.out.println("Não existe conta criada!");
                        }

                        break;
                }
            } else if (opcao == 3) {
                System.out.println(menuBanco());
                opcao = scan.nextInt();
                switch (opcao) {
                    case 1:
                        System.out.println("Listar pessoas!");
                        ArrayList<Pessoa> lista = banco.getPessoas();
                        for (int i = 0; i < lista.size(); i++) {
                            System.out.println(lista.get(i));
                        }
                        break;
                    case 2:
                        System.out.println("Listar contas!");
                        ArrayList<ContaCorrente> contas = banco.getContaCorrentes();
                        for (int i = 0; i < contas.size(); i++) {
                            System.out.println(contas.get(i));
                        }
                        break;
                }
            }

        } while (opcao != 0);

    }

}
