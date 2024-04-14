#include "polinomios.h"
#include <math.h>
#include <stdio.h>

struct polinomio SomaPolinomio(struct polinomio p1, struct polinomio p2)
{
    struct polinomio resultado;
    resultado.a = p1.a + p2.a;
    resultado.b = p1.b + p2.b;
    resultado.c = p1.c + p2.c;
    return resultado;    
}

struct polinomio SubtraiPolinomio(struct polinomio p1, struct polinomio p2)
{
    struct polinomio resultado;
    resultado.a = p1.a - p2.a;
    resultado.b = p1.b - p2.b;
    resultado.c = p1.c - p2.c;
    return resultado;
}

struct polinomio MultiplicaPolinomio(struct polinomio p1, struct polinomio p2)
{
    struct polinomio resultado;
    if(p1.a == 0 && p2.a == 0)
    {
        resultado.a = p1.b * p2.b;
        resultado.b = p1.b * p2.c + p1.c * p2.b;
        resultado.c = p1.c * p2.c;
        return resultado;
    }
    return p1;
}

float Resolve1(struct polinomio p1)
{
    if(p1.b != 0)
    {
        return (1.0 * -p1.c/p1.b);
    }
    return -9999;
}

struct raizes Resolve2(struct polinomio p)
{
    struct raizes raizes;
    float delta;
    if(p.a != 0)
    {
        delta = 1.0*(p.b)*(p.b) - 4.0*(p.a)*(p.c);
        if(delta < 0)
        {
            raizes.ehComplexo = 1;
            raizes.alpha1.a = -p.b/(2.0*p.a);
            raizes.alpha2.a = -p.b/(2.0*p.a);
            raizes.alpha1.b = sqrtf(-delta)/(2.0*p.a);
            raizes.alpha2.b = -sqrtf(-delta)/(2.0*p.a);
            raizes.s1 = 0;
            raizes.s2 = 0;
            return raizes;
        }
        raizes.ehComplexo = 0;
        raizes.alpha1.a = 0;
        raizes.alpha2.a = 0;
        raizes.alpha1.b = 0;
        raizes.alpha1.b = 0;
        raizes.s1 = (-p.b + sqrtf(delta))/(2.0*p.a);
        raizes.s2 = (-p.b - sqrtf(delta))/(2.0*p.a);
        return raizes;
    }
	/* nesse caso, quando a operacao nao for bem sucedida ele retorna uma raiz flag de erro, com todos os valores iguais a -9999 */
    raizes.ehComplexo = -9999;
    raizes.s1 = -9999;
    raizes.s2 = -9999;
    return raizes;
}

void ImprimePolinomio(struct polinomio p)
{
	/* caso o polinomio possua a flag de erro ele so ira imprimir a mensagem "erro" */
    if(p.a == -9999 && p.b == -9999 && p.c == -9999)
    {
		printf("polinomio invalido\n");
    }
    /* caso o polinomio seja valido, a impressao sera no formato ax^2 + b^x + c */
    if(p.a != 0)
    {
        printf("%d.x² + %dx¹ + %d", p.a, p.b, p.c);
    }
    else
    {
        printf("%dx¹ + %d", p.b, p.c);
    }
}

void ImprimeRaizes(struct raizes r)
{
	if(r.ehComplexo == -9999 && r.s1 == -9999 && r.s2 == -9999 && r.alpha1.a == -9999 && r.alpha1.b == -9999 && r.alpha2.a == -9999 && r.alpha2.b == -9999)
	{
		printf("raiz invalida\n");
	}
    if(r.ehComplexo == 1)
    {
        printf("(%f + %fi; %f + %fi)", r.alpha1.a, r.alpha1.b, r.alpha2.a, r.alpha2.b);
    }
    else
    {
        printf("(%f, %f)", r.s1, r.s2);
    }
}
