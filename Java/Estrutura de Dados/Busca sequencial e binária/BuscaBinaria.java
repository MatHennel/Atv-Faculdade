import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;

public class BuscaBinaria {
    public static void main(String[] args) {
        int[] v = new int[10];
        long tabela[] = new long[6];
        Scanner ler = new Scanner(System.in);
        int i = 0;

        tabela = buscaBinaria(v, tabela, ler, i);
        System.out.println();
        System.out.println("Tabela de tempo busca binaria:");

        int tamVetor = 10;
        for (int j = 0; j < 5; j++) {
            System.out.println("| Tempo vetor [" + tamVetor + "]: " + tabela[j]);
            tamVetor = tamVetor * 10;
        }

        i = 0;

        tabela = buscaExaustiva(v, tabela, ler, i);
        System.out.println();
        System.out.println("Tabela de tempo busca exaustiva");

        tamVetor = 10;

        for (int j = 0; j < 5; j++) {
            System.out.println("| Tempo vetor [" + tamVetor + "]: " + tabela[j]);
            tamVetor = tamVetor * 10;
        }

    }

    public static long[] buscaBinaria(int v[], long tabela[], Scanner ler, int i) {

        int inicio = 0;
        int fim = v.length - 1;
        int meio = 0;
        int chave;
        long tempoInicial = 0;
        long tempoFinal = 0;
        Random aleatorio = new Random();
        boolean achou = false;

        if (v.length == 1000000) {
            return tabela;
        }

        for (int j = 0; j < v.length; j++) {
            v[j] = aleatorio.nextInt(1000);
        }

        Arrays.sort(v);

        System.out.print("Digite o numero que esta procurando: ");
        chave = ler.nextInt();

        tempoInicial = System.currentTimeMillis();

        while (inicio <= fim) {

            meio = (inicio + fim) / 2;

            if (chave == v[meio]) {
                i++;
                v = new int[v.length * 10];
                achou = true;
                break;
            }

            else if (chave > v[meio]) {
                inicio = meio + 1;
            } else {
                fim = meio - 1;
            }
        }

        if (achou == false) {
            i++;
            v = new int[v.length * 10];
        }

        tempoFinal = System.currentTimeMillis() - tempoInicial;
        tabela[i] = tempoFinal;

        return buscaBinaria(v, tabela, ler, i);
    }

    public static long[] buscaExaustiva(int v[], long tabela[], Scanner ler, int i) {

        int chave;
        chave = ler.nextInt();
        long tempoInicial = 0;
        long tempoFinal = 0;
        boolean achou = false;
        Random aleatorio = new Random();

        if (v.length == 1000000) {
            return tabela;
        }

        for (int j = 0; j < v.length; j++) {
            v[j] = aleatorio.nextInt(1000);
        }

        System.out.print("Digite o numero que esta procurando: ");
        chave = ler.nextInt();

        tempoInicial = System.currentTimeMillis();

        for (int j = 0; j < v.length; j++) {
            if (chave == v[j]) {
                v = new int[v.length * 10];
                i++;
                achou = true;
                break;
            }

        }

        if (achou == false) {
            v = new int[v.length * 10];
            i++;
        }

        tempoFinal = System.currentTimeMillis() - tempoInicial;
        tabela[i] = tempoFinal;
        return buscaBinaria(v, tabela, ler, i);
    }

}
