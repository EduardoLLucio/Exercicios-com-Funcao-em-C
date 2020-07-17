#include<stdio.h>
#include<stdlib.h>
#include<math.h>



float calc(float calc){
float res;
float v;
float som;

v=4.0/3.0;
res=pow(calc,3);

som = v * 3.14 * res;

return som;
}

int main(){

    float r;
    float n;

    printf("Valor do Raio ");
    scanf("%f", &r);

    n =calc(r);
    printf("\nO volume desta bola e %3.3f\n", n);

    return 0;

}


