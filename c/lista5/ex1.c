#include <stdio.h>
#include <math.h>

int main()
{
    float t1, t2, t3;
    printf("Digite os tres tempos: ");
    scanf("%f %f %f", &t1, &t2, &t3);
    fflush(stdin);

    if (t1 < t2 && t1 < t3)
    {
        printf("- 1 lugar: %.2f", t1);
        if (t2 < t3)
        {
            printf("\n- 2 lugar: %.2f", t2);
            if(t3 > t2 ) 
            {
                printf("\n- 3 lugar: %.2f", t3);
            }
        }
        else if(t3 < t2)
        {
            printf("\n- 2 lugar: %.2f", t3);
            if(t2 > t3)
            {
                printf("\n- 3 lugar: %.2f",t2);
            }
        }
    }

    else if(t2 < t1 && t2 < t3)
    {
        printf("- 1 lugar: %.2f",t2);
        
        if(t1 < t3)
        {
            printf("\n- 2 lugar: %.2f",t1);
            if(t3 > t1)
            {
                printf("\n- 3 lugar: %.2f",t3);
            }
        }
        else if(t1 > t3){
            printf("\n- 2 lugar: %.2f",t3);

            if(t1 > t3)
            {
                printf("\n- 3 lugar: %.2f",t1);
            }
        }
    }
    
    else if(t3 < t1 && t3 < t2)
    {
        printf("- 1 lugar: %.2f",t3);

        if(t1 < t2)
        {
            printf("\n- 2 lugar: %.2f",t1);

            if(t2 > t1)
            {
                printf("\n- 3 lugar: %.2f",t2);
            }
        }
        else if(t2 < t1)
        {
            printf("\n- 2 lugar: %.2f", t2);
            if(t1 > t2)
            {
                printf("\n- 3 lugar: %.2f",t1);
            }
        }
    }

    return 0;
}