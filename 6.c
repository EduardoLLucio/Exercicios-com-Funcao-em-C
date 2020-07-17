#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0


int mult(int vu, int vd){


if(vu % vd == 0 || vd % vu == 0 ){
return (true);
        }else{
return (false);

}
}
int main(){
    int vu;
    int vd;
    int i;

    for(i=0;i<4;i++){
     printf("\nDigite um Valor...: ");
    scanf("%d", &vu);
     printf("\nDigite mais um Valor...: ");
    scanf("%d", &vd);

    if(mult(vu, vd) == true){
        printf("\nMultiplo\n");
    }else{
        printf("\nNao Multiplo\n");

    }

    }

   return 0;

}



