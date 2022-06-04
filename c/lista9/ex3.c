#include <stdio.h>
#define TAM 50
int main()
{
    char conteudo[TAM],busca[TAM];
    int ind1 ,cont = 0,qnt = 0,qnt2 = 0;

    printf("\nString conteudo: ");
    fflush(stdin); 
    gets(conteudo);
    

    printf("String busca: ");
    fflush(stdin);
    gets(busca);

    for(ind1 = 0 ; busca[ind1] != '\0';ind1++)
    {
        qnt++;
    }
    
    for(ind1 = 0;conteudo[ind1] != '\0';ind1++)
    {
      if(conteudo[ind1] == busca[cont])
      {
          cont++;
          qnt2++;
      }
      
      else if(cont != 0)
      {
          cont = 0;
          qnt2 = 0;
      }
      if(qnt2 == qnt)
        {
          printf("- Achou!");
          break;
        } 
      
    }

    if(qnt2 != qnt)
    {
        printf("- NAO achou!");
    }
    return 0;
}