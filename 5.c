#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int potencia(int vu, int vd){
int p = 0;

p = pow(vu, vd);

return p;

}

int resto(int vu, int vd){
int r;

r = vu % vd;

return r;

}

float quociente(float vu, float vd){
float s;

s = vu / vd;


return s;




}


int mult(int vu, int vd){
int s;

s = vu * vd;

return s;


}

int sub(int vu, int vd){
int s;

s = vu - vd;

return s;

}

int som(int vu, int vd){
int s = 0;

s = vu + vd;

return s;

}

int main(void){
    int vu = 0;
    int vd = 0;
    char o;
    float r;



    printf("\nDigite uma letra para fazer o calculo desejados...: \n\n somar (a)\n\n subtracao (b)\n\n Multiplicação (m)\n\n quociente inteiro (q)\n\n resto (r)\n\n potencia (p)\n\n ");
    scanf("%s", &o);

   switch(o){

    case 'a':
         printf("\nDigite um Valor...: ");
         scanf("%d", &vu);

        printf("\nDigite mais um Valor...: ");
        scanf("%d", &vd);

        r = som(vu, vd);

       printf("\nResultado da Soma...: %1.f\n" , r);
    break;

    case 'b':
        printf("\nDigite um Valor...: ");
         scanf("%d", &vu);

        printf("\nDigite mais um Valor...: ");
        scanf("%d", &vd);

         r = sub(vu, vd);

                printf("\nResultado da subtracao...: %1.f\n" , r);

    break;

     case 'm':
        printf("\nDigite um Valor...: ");
         scanf("%d", &vu);

        printf("\nDigite mais um Valor...: ");
        scanf("%d", &vd);

         r = mult(vu, vd);

                printf("\nResultado da Multiplicacao...: %1.f\n" , r);

    break;

    case 'q':
        printf("\nDigite um Valor...: ");
         scanf("%d", &vu);

        printf("\nDigite mais um Valor...: ");
        scanf("%d", &vd);

         r = quociente(vu, vd);

                printf("\nResultado do quociente...: %.2f\n" , r);
    break;

    case 'r':
        printf("\nDigite um Valor...: ");
         scanf("%d", &vu);

        printf("\nDigite mais um Valor...: ");
        scanf("%d", &vd);

         r = resto(vu, vd);

                printf("\nResultado do quociente...: %1.f\n" , r);

            break;

             case 'p':
        printf("\nDigite um Valor para o base ...: ");
         scanf("%d", &vu);

        printf("\nDigite mais um Valor para expoente...: ");
        scanf("%d", &vd);

         r = potencia(vu, vd);

                printf("\nA potencia e...: %.1f\n" , r);

            break;
            default:
            printf ("\n\n Valor Invalido \n\n");
}
   return 0;

}



