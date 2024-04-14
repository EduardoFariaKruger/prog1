#include <stdio.h>
#include "polinomios.h"

int main()
{
    printf("-------------------Arquivo de testes----------------------\n");
    printf("\n");
    printf("criadas 4 variaves: 2 polinomios de primeiro grau e 2 polinomio de segundo grau\n");
    struct polinomio p1;
    struct polinomio p2;
    struct polinomio p3;
    struct polinomio p4;
    printf("e esses sao os valores sem inicializar: \n");
    printf("polinomio 1: ");
    ImprimePolinomio(p1);
    printf("\n");
    printf("polinomio 2: ");
    ImprimePolinomio(p2);
    printf("\n");
    printf("polinomio 3: ");
    ImprimePolinomio(p3);
    printf("\n");
    printf("polinomio 4: ");
    ImprimePolinomio(p4);
    printf("\n");

    printf("Escreva os valores dos coeficientes do polinomio 1, que eh de segundo grau: \n");
    printf("a: "); scanf("%d", &p1.a);
    printf("b: "); scanf("%d", &p1.b);
    printf("c: "); scanf("%d", &p1.c);

    printf("Escreva os valores dos coeficientes do polinomio 2, que eh de segundo grau: \n");
    printf("a: "); scanf("%d", &p2.a);
    printf("b: "); scanf("%d", &p2.b);
    printf("c: "); scanf("%d", &p2.c);

    printf("Escreva os valores dos coeficientes do polinomio 3, que eh de primeiro grau: \n");
    p3.a = 0;
    printf("a: "); scanf("%d", &p3.b);
    printf("b: "); scanf("%d", &p3.c);

    printf("Escreva os valores dos coeficientes do polinomio 4, que eh de primeiro grau: \n");
    p4.a = 0;
    printf("a: "); scanf("%d", &p4.b);
    printf("b: "); scanf("%d", &p4.c);

    printf("O polinomio p1 eh o seguinte: ");
    ImprimePolinomio(p1);
    printf("\n");
    printf("E as suas raizes sao: ");
    ImprimeRaizes(Resolve2(p1));
    printf("\n");

    printf("O polinomio p2 eh o seguinte: ");
    ImprimePolinomio(p2);
    printf("\n");
    printf("E as suas raizes sao: ");
    ImprimeRaizes(Resolve2(p2));
    printf("\n");

    printf("O polinomio p3 eh o seguinte: ");
    ImprimePolinomio(p3);
    printf("\n");
    printf("E a sua raiz vale: %f", Resolve1(p3));
    printf("\n");

    printf("O polinomio p4 eh o seguinte: ");
    ImprimePolinomio(p4);
    printf("\n");
    printf("E a sua raiz vale: %f", Resolve1(p4));
    printf("\n");

    printf("O produto "); ImprimePolinomio(p3); printf(" x "); ImprimePolinomio(p4);
    printf("\n vale: "); ImprimePolinomio(MultiplicaPolinomio(p3, p4));
    printf("\n");

    printf("A Soma "); ImprimePolinomio(p1); printf(" + "); ImprimePolinomio(p2);
    printf("\n vale: "); ImprimePolinomio(SomaPolinomio(p1, p2));
    printf("\n");
    
    printf("A Diferenca "); ImprimePolinomio(p1); printf(" - "); ImprimePolinomio(p2);
    printf("\n vale: "); ImprimePolinomio(SubtraiPolinomio(p1, p2));
    printf("\n");
    printf("fim da execucao\n");

}
