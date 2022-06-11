import java.util.Scanner;

import javax.annotation.processing.SupportedOptions;

public class Main {

    public static void main(String[] args) {

        ContaCorrente conta = new ContaCorrente();
        Pessoa pessoa = new Pessoa();

        conta.numeroDaConta = 4212444;
        conta.agencia = 225;
        conta.saldo = 1000;
        conta.documento = "122-222";
        conta.senha = "****";
        conta.ativa = false;

        int op = 0;
        int sair = 0;
        int valor;

        Scanner ler = new Scanner(System.in);

        while (sair == 0) {
            printar(conta);

            op = ler.nextInt();

            switch (op) {
                case 1:
                    // pular();
                    cadastro(pessoa, conta, ler);
                    /*
                     * System.out.println(" \t------------ Cadastro ------------ ");
                     * System.out.print(" \tDigite seu nome: ");
                     * pessoa.nome = ler.next();
                     * System.out.print(" \tDigite seu cpf: ");
                     * pessoa.cpf = ler.next();
                     * conta.documento = pessoa.cpf;
                     * System.out.print(" \tDigite sua idade: ");
                     * pessoa.idade = ler.nextInt();
                     * System.out.print(" \tDigite seu salario: ");
                     * pessoa.salario = ler.nextInt();
                     * System.out.print(" \tDigite a senha: ");
                     * conta.senha = ler.next();
                     */
                    break;

                case 2:
                    System.out.print("Saque: ");
                    valor = ler.nextInt();
                    conta.sacar(valor);

                    break;

                case 3:
                    System.out.print("Deposito: ");
                    valor = ler.nextInt();
                    conta.depositar(valor);

                    break;

                case 4:
                    System.out.println("Seu saldo é: " + conta.saldo);

                    break;
                case 5:

                    sair = 1;
                    break;
            }
        }

        // conta.depositar(10000);
        // System.out.println("Saldo apos deposito: " + conta.saldo);

        // conta.sacar(1000000);
        // System.out.println("Saldo apos saque: " + conta.saldo);

    }

    public static void printar(ContaCorrente conta) {
        System.out.print("\n");
        System.out.println(" \t------------- Banco ------------- ");
        System.out.println(" \t1) Criar nova conta corrente ---- ");
        System.out.println(" \t2) Sacar ------------------------ ");
        System.out.println(" \t3) Depositar -------------------- ");
        System.out.println(" \t4) Saldo da conta --------------- ");
        System.out.println(" \t5) Sair --------------------------");
        System.out.println(" \t--------------------------------- ");
        System.out.print(" \t>");

    }

    public static void pular() {
        for (int i = 0; i < 100; i++) {
            System.out.print("\n");
        }
    }

    public static void cadastro(Pessoa pessoa, ContaCorrente conta, Scanner ler) {
        System.out.println(" \t------------ Cadastro ------------ ");
        System.out.print(" \tDigite seu nome: ");
        pessoa.nome = ler.next();
        System.out.print(" \tDigite seu cpf: ");
        pessoa.cpf = ler.next();
        conta.documento = pessoa.cpf;
        System.out.print(" \tDigite sua idade: ");
        pessoa.idade = ler.nextInt();
        System.out.print(" \tDigite seu salario: ");
        pessoa.salario = ler.nextInt();
        System.out.print(" \tDigite a senha: ");
        conta.senha = ler.next();
    }
}
