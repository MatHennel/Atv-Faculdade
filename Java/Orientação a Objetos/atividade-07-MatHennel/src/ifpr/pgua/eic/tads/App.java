package ifpr.pgua.eic.tads;

import java.util.ArrayList;
import java.util.Scanner;

import ifpr.pgua.eic.tads.modelos.Banco;
import ifpr.pgua.eic.tads.modelos.ContaCorrente;
import ifpr.pgua.eic.tads.modelos.ContaCorrenteEspecial;
import ifpr.pgua.eic.tads.modelos.ContaPoupanca;
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
        double limite;
        double taxaDeRendimento;

        String nome, cpf;
        int idade;
        double salario;

        do {
            System.out.println(menuGeral());
            opcao = scan.nextInt();
            scan.nextLine();
            if (opcao == 2) { // Menu da pessoa
                System.out.println(menuPessoa());
                opcao = scan.nextInt();
                scan.nextLine();

                System.out.println("Deseja cadastrar pessoa fisica ou juridica?");
                System.out.println("1) Pessoa Fisica");
                System.out.println("2) Pessoa Juridica");
                opcao = scan.nextInt();
                scan.nextLine();

                if (opcao == 1) {
                    switch (opcao) {
                        case 1:
                            System.out.println("Digite o nome:");
                            nome = scan.nextLine();
                            System.out.println("Digite o cpf:");
                            cpf = scan.nextLine();
                            System.out.println("Digite a idade:");
                            idade = scan.nextInt();
                            System.out.println("Digite o salario:");
                            salario = scan.nextDouble();

                            pessoa = new Pessoa(nome, cpf, idade, salario);

                            if (banco.cadastrarPessoa(pessoa)) {
                                System.out.println("Cadastrada!");
                            } else {
                                System.out.println("Erro ao cadastrar. Documento repetido!");
                            }

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
                }

            } else if (opcao == 1) {

                System.out.println(menuConta());
                opcao = scan.nextInt();
                scan.nextLine();

                switch (opcao) {
                    case 1:

                        System.out.println("Digite o documento da pessoa:");
                        documento = scan.nextLine();

                        pessoa = banco.buscarPessoa(documento);

                        if (pessoa != null) {
                            System.out.println("Digite o número da conta:");
                            numeroDaConta = scan.nextInt();
                            scan.nextLine();
                            System.out.println("Digite a agência:");
                            agencia = scan.nextInt();
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
                                System.out.println(
                                        "Qual o tipo de conta? (1-ContaCorrenteSimples / 2-ContaCorrenteEspecial / 3-ContaPoupança");
                                opcao = scan.nextInt();
                                if (opcao == 1) {
                                    conta = new ContaCorrente(numeroDaConta, agencia, pessoa, senha, ativa, saldo);
                                    if (banco.cadastarConta(conta)) {
                                        System.out.println("Conta criada");
                                    } else {
                                        System.out.println("Nao foi possivel criar conta");
                                    }
                                } else if (opcao == 2) {
                                    System.out.print("Digite o limite: ");
                                    limite = scan.nextDouble();
                                    conta = new ContaCorrenteEspecial(numeroDaConta, agencia, pessoa, senha, ativa,
                                            saldo, limite);

                                    if (banco.cadastarContaEspecial(conta)) {
                                        System.out.println("Conta criada");
                                    } else {
                                        System.out.println("Nao foi possivel criar conta");

                                    }
                                } else {
                                    System.out.print("Digite a taxa de rendimento ");
                                    taxaDeRendimento = scan.nextDouble();
                                    conta = new ContaPoupanca(numeroDaConta, agencia, pessoa, senha, ativa, saldo,
                                            taxaDeRendimento);

                                    if (banco.cadastarContaPoupanca(conta)) {
                                        System.out.println("Conta criada");
                                    } else {
                                        System.out.println("Nao foi possivel criar conta");
                                    }

                                }

                            } else {
                                System.out.println(
                                        "Qual o tipo de conta? (1-ContaCorrenteSimples / 2-ContaCorrenteEspecial / 3-ContaPoupança");
                                opcao = scan.nextInt();
                                if (opcao == 1) {
                                    conta = new ContaCorrente(numeroDaConta, agencia, pessoa, senha, ativa);
                                    if (banco.cadastarContaEspecial(conta)) {
                                        System.out.println("Conta criada");
                                    } else {
                                        System.out.println("Nao foi possivel criar conta");

                                    }
                                } else if (opcao == 2) {
                                    System.out.print("Digite o limite: ");
                                    limite = scan.nextDouble();
                                    conta = new ContaCorrenteEspecial(numeroDaConta, agencia, pessoa, senha, ativa,
                                            limite);
                                    if (banco.cadastarContaEspecial(conta)) {
                                        System.out.println("Conta criada");
                                    } else {
                                        System.out.println("Nao foi possivel criar conta");

                                    }
                                } else {
                                    System.out.print("Digite a taxa de rendimento ");
                                    taxaDeRendimento = scan.nextDouble();
                                    conta = new ContaPoupanca(numeroDaConta, agencia, pessoa, senha, ativa,
                                            taxaDeRendimento);
                                    if (banco.cadastarContaPoupanca(conta)) {
                                        System.out.println("Conta criada");
                                    } else {
                                        System.out.println("Nao foi possivel criar conta");
                                    }

                                }
                            }

                        } else {
                            System.out.println("Pessoa não encontrada!!!");
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
