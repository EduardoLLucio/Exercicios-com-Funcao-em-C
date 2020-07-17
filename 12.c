#include<stdio.h>
#include<stdlib.h>
#include<math.h>




int divi(int vu){

    int c = 0;

    while(vu>=1){


    vu = vu /2.0;
    c++;
    }
    return c;
}





int main(){
    int i;
    int vu;
    for(i=0;i<3;i++){
    printf("\nDigite um Valor...: ");
    scanf("%d", &vu);


  printf("\n%d divisoes \n",divi(vu));

    }
    return 0;

}



