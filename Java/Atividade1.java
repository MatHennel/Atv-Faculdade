import java.lang.reflect.Array;
import java.security.Principal;

public class Atividade1 
{
    public static void main(String [] args)
    {   
        int num[] = new int[2500];
        
         
        System.out.println("\nNumeros pares: ");
        
        for(int i = 0;i < num.length;i++)
        {
            num[i] = i + 1;
            if(num[i] % 2 == 0)
            {
                System.out.print(num[i] + " ");
            }
        }

        System.out.println("\n\nNumeros impares: ");
        
        for(int i = 0;i < num.length;i++)
        {
            
            if(num[i] % 2 != 0)
            {
                System.out.print(num[i] + " ");
            }
        }

        

        System.out.println("\n\nNumeros primos: ");

        
        int cont;
        
        for(int i = 0;i < num.length;i++)
        {
            num[i] = i + 1;
            cont = 0;
            for(int div = 1;div <= num[i];div++)
            {
                if(num[i] % div == 0)
                {
                    cont++;
                }
                
            }
            if(cont == 2)
            {
                System.out.print(num[i] + " ");
            }
        }

        
    }

    
}
