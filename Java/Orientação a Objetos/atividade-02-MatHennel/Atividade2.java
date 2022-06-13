import java.util.Scanner;

public class Atividade2 
{

    public static int invalido(int num, int[] vetor, Scanner leia, int i) 
    {
        if (num < -1 || num == 0) 
        {
            do 
            {
                System.out.println("Esse numero é invalido, coloque um numero positivo: ");
                num = leia.nextInt();
                vetor[i] = num;

            } while (num < -1 || num == 0);

        }
        return num;
    }


    public static void main(String[] args) 
    {
        int vetor[] = new int[100];
        int num;
        int i = 0;
        Scanner leia = new Scanner(System.in);
        System.out.println("Digite numeros para o vetor: ");
        

        do 
        {
            num = leia.nextInt();
            num = invalido(num, vetor, leia, i);
            if (num != -1) 
            {
                vetor[i] = num;
                i++;
            
            }
            
        } while (num != -1);

        int menor = vetor[0];
        int maior = vetor[0];
        int soma = 0;
        int ad[] = new int[i];
        int sub[] = new int[i];

        

        for (int j = 0; j < ad.length; j++) 
        {
            if (vetor[j] < menor) 
            {
                menor = vetor[j];
            } 
            else if (vetor[j] > maior) 
            {
                maior = vetor[j];
            }
            soma = soma + vetor[j];
        }

        for (int j = 0; j < ad.length; j++) 
        {
            ad[j] = vetor[j] + menor;
            sub[j] = vetor[j] - maior;
        }

        System.out.print("\nSeu vetor é: ");

        
            for(int j = 0;j < vetor.length;j++)
            {
                if(vetor[j] != 0)
                {
                    System.out.print(vetor[j] + " ");
                }
               
            }
            
        

        System.out.println("\nMaior numero: " + maior);
        System.out.println("Menor numero: " + menor);
        System.out.println("Soma de todos os numeros: " + soma);
        System.out.print("Cada numero digitado menos o maior: ");

        for (int j = 0; j < sub.length; j++) 
        {
            System.out.print(sub[j] + " ");
        }

        System.out.print("\nCada numero digitado mais o menor: ");

        for (int j = 0; j < ad.length; j++) 
        {
            System.out.print(ad[j] + " ");
        }

    }

}