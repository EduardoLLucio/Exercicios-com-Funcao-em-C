#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0


int par(int vu){


if(vu % 2 == 0){
return (true);
        }else{
return (false);

}
}
int main(){
    int vu;
    int i;

    for(i=0;i<4;i++){
    printf("\nDigite um Valor...: ");
    scanf("%d", &vu);

    if(par(vu) == true){
        printf("\n%d - Par\n", true);
    }else{
        printf("\n%d - Impar\n", false);

    }

    }

   return 0;

}



