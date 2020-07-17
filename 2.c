#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calc(float x, float y){
float a;
float b;
float c;
float d;
float resul;



a = (x + y)/2;
b = fabs(a);

c = (x - y)/2;
d = fabs(c);

resul = b + d;

return resul;





}


int main(){

    float x;
    float y;
    int i;

    for(i=0;i<2;i++){
    printf("\nDigite um Valor...: ");
    scanf("%f", &x);
     printf("\nDigite mais um Valor...: ");
    scanf("%f", &y);


    printf("\nO maior numero e....: %.1f\n",calc(x, y));
    }
    return 0;

}



