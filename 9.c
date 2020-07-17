#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fat(int vu){
int i;
int c = 1;
while(vu>1){

    c=c*vu;

    vu=vu-1;
}
return c;
}

int main(){
    int i;
    int vu;


    printf("\nDigite um Valor...: ");
    scanf("%d", &vu);

for(i=0;i<3;i++){

    printf("\n%d! = %d\n",vu ,fat(vu));

    printf("\nDigite um Valor..,: ");
    scanf("%d", &vu);
}

    return 0;

}



