import java.util.Scanner;

public class InverterRecursivo {
    public static void main(String[] args) {
        int num = 0;
        Scanner ler = new Scanner(System.in);
        System.out.print("\n");
        System.out.print("Digite um numero inteiro: ");
        num = ler.nextInt();
        int total = 0;

        System.out.println(inverte(num, total));
    }

    public static int inverte(int num, int total) {

        
        if (num == 0) {
            return total;
        }

        total = total * 10 + num % 10;


        return inverte(num / 10, total);
    }
}
