#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main(){
    //int seg,hor, min, aux=0;
    int seg,aux,hor;

    printf("Ingrese los segundos\n");
    scanf("%d",&seg);

    hor=seg/3600;
    aux=seg%3600;
 //   printf("%d", aux);
    int min=aux/60;
    seg=aux%60;
    printf("Esos segundos equivalen a %d:%d:%d",hor, min, seg);

    return 0;
    
}
