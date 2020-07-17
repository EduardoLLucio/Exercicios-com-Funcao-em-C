#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calcinss(float sb) {
    float vi;
    if(sb>5189.82) {
        vi = 579.88;
    } else if (sb>=2594.93) {
        vi = sb * 0.11;
    } else if(sb>=1556.95) {
        vi = sb * 0.09;

    } else {
        vi = sb * 0.08;
    }
    return vi;
}
float calcirpf(float sb, float inss, int numdep) {
    float deducaodep = numdep *189.59;
    float basecalc = sb - inss - deducaodep;
    float valirpf = 0;


    if(basecalc<= 1903.98) {
        valirpf = 0;

    } else if (basecalc <=2826.65) {
        valirpf = basecalc* 0.075 - 142.80;

    } else if (basecalc <=3751.65) {
        valirpf = basecalc* 0.150 - 354.80;

    } else if (basecalc <=4664.68) {
        valirpf = basecalc* 0.225 - 636.13;

    } else {
        valirpf = basecalc * 0.275 -869.36;
    }
    return valirpf;
}

int main() {

    float salbruto, valinss, valirpf, salliq;
    int numdep;

    printf("Salario Bruto");
    scanf("%f", &salbruto);
    printf("Numero dependentes");
    scanf("%d", &numdep);

    valinss = calcinss(salbruto);
    valirpf = calcirpf(salbruto, valinss, numdep);
    salliq = salbruto - valinss -  valirpf;

    printf("Val. Inss...............:%.2f\n",valinss);
    printf("Val. Imp.Renda..........:%.2f\n",valirpf);
    printf("Sal. Liquido  ..........:%.2f\n",salliq);

    return 0;

}


