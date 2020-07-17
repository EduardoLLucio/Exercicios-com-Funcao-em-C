#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calc(int vu, int vd){
if(vu>=vd){
    return vu;
}else{
return vd;
}
}

int main(){

    int vu;
    int vd;

    printf("Digite um Valor");
    scanf("%d", &vu);
     printf("Digite mais um Valor");
    scanf("%d", &vd);


    printf("\nO maior numero e....: %d\n",calc(vu, vd));

    return 0;

}



