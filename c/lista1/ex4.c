#include <stdio.h>

int main(){


    int v1 , v2 , v3 , v4 ;
    v3 = 10 ;
    
   
    v2 = (v3*v3*v3) - (v3*v3) - (v3*v3) - (v3*v3) - (v3*v3) - (v3*v3) - (v3*v3) ;    //400
    v3 = v3*v3; //100 
    v1 = (v3*v3) - (v3); //9900
    v4 = v2 - v3 - v3;         //200

    printf("\n- v1 = %i", v1);
    printf("\n- v2 = %i", v2);
    printf("\n- v3 = %i", v3);
    printf("\n- v4 = %i", v4);   
    
    return 0;
}