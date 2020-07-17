#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0



int di(int vu){
int d = 0;
int i;

for(i = vu;i>0;i--){

    if(vu%i==0){
        d++;

    }
}
    return d;

}

int main(){

    int vu;
    int vd;

    printf("Digite um Valor...: ");
    scanf("%d", &vu);


    printf("\nO numero %d tem %d divisores\n",vu, di(vu));



    return 0;

}



