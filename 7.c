#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0


int mult(int vu){

    if(vu % 4 == 0  && vu % 100 !=0 || vu % 400 == 0){
    return (true);
    }else{
    return (false);
    }
}

int main(){
    int vu;
    int i;

    for(i=0;i<4;i++){
     printf("\nDigite um Ano...: ");
    scanf("%d", &vu);

    if(mult(vu) == true){
        printf("\Bissexto\n");
    }else{
        printf("\nNao Bissexto\n");

    }

    }

   return 0;

}



