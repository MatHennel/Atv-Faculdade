import java.util.Scanner;

public class FatorialRecursivo {
    public static void main(String[] args) {
        int num = 0;
        Scanner ler = new Scanner(System.in);
        System.out.print("\n");
        System.out.print("Digite um numero inteiro: ");
        num = ler.nextInt();

        System.out.print("Fatorial de " + num + " = " + fatorial(num));
        System.out.print("\n");
        System.out.print("\n");

    }

    public static int fatorial(int num) {

        if (num == 0) {
            return 1;
        }

        return num * fatorial(num - 1);
    }
}