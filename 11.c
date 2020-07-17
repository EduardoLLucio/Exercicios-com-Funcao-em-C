#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0



int pri(int vu){
int d = 0;
int i;

for(i = 2;i<vu;i++){

    if(vu==0){
        return(true);

    }
        if(vu%i==0){
    return(false);
    }else{
    return (true);
    }
}

}

int main(){

    int vu;

    printf("\nDigite um Valor...: ");
    scanf("%d", &vu);


   if(pri(vu)==true){
    printf("\nPrimo\n");
   }else{
   printf("\nNao primo\n");
   }



    return 0;

}



