import java.util.Scanner;



public class Main {

    public static void main(String[] args) {

        ContaCorrente conta = new ContaCorrente(29292929,543,true);
        Pessoa pessoa = new Pessoa();

        

        int op = 0;
        int sair = 0;
        int valor;

        Scanner ler = new Scanner(System.in);

        while (sair == 0) {
            printar(conta);

            op = ler.nextInt();

            switch (op) {
                case 1:

                    cadastro(pessoa, conta, ler);
                    
                    break;

                case 2:
                    
                    printConta(conta);

                    break;

                case 3:
                    System.out.print("Saque: ");
                    valor = ler.nextInt();
                    conta.sacar(valor);

                    break;

                case 4:
                    System.out.print("Deposito: ");
                    valor = ler.nextInt();
                    conta.depositar(valor);

                    break;

                case 5:
                    System.out.println(conta.toString2());

                    break;
                case 6:

                    sair = 1;
                    break;
            }
        }
    }

    public static void printar(ContaCorrente conta) {
        System.out.print("\n");
        System.out.println(" \t------------- Banco ------------- ");
        System.out.println(" \t1) Criar nova conta corrente ---- ");
        System.out.println(" \t2) Dados da conta ---------------");
        System.out.println(" \t3) Sacar ------------------------ ");
        System.out.println(" \t4) Depositar -------------------- ");
        System.out.println(" \t5) Saldo da conta --------------- ");
        System.out.println(" \t6) Sair -------------------------");
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
        System.out.print("");
        ler.nextLine();
        pessoa.setNome(ler.nextLine());
        System.out.print(" \tDigite seu cpf: ");
        pessoa.setCpf(ler.next());
        conta.setDocumento(pessoa.getCpf());
        System.out.print(" \tDigite sua idade: ");
        pessoa.setIdade(ler.nextInt());
        System.out.print(" \tDigite seu salario: ");
        pessoa.setSalario(ler.nextInt());
        conta.primeiroDeposito(pessoa.getSalario());
        System.out.print(" \tDigite a senha: ");
        conta.setSenha(ler.next());
    }

    public static void printConta(ContaCorrente conta){
        System.out.println(" \t------------ Dados da Conta ------------ ");
        System.out.println(conta.toString1());
    }

    

}

