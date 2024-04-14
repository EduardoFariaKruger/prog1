//descricao da biblioteca de polinomios

/*
    *Struct que guarda a parte real e a parte imaginaria de um numero complexo
    *sendo que a parte real eh dada pela variavel a
    *e a parte imaginaria eh dada pela variavel b
*/
struct complexo
{
    float a;
    float b;
};

/*
    *Struct que guarda os coeficientes de um polinomio de grau 1 ou 2,
    *Tal que se o polinomio eh de grau 1, o coeficiente a vale 0
*/
struct polinomio
{
    int a;
    int b;
    int c;
};

/*
    *Struct que guarda uma raiz de um polinomio de grau 1 ou 2,
    *tal que se o polinomio eh de grau 1 as raizes sao dadas pela dupla s1 e s2 e a propriedade ehComplexo vale 0
    *e caso uma raiz seja imaginaria, a propriedade ehComplexo vale 1 e os valores sao guardados na struct complexo
	*Caso alguma operacao seja mal sucedida a struct tera os seus valores preenchidos com a flag -9999
*/
struct raizes
{
    float s1;
    float s2;
    int ehComplexo;
    struct complexo alpha1;
    struct complexo alpha2;
};


/*
    *Funcao que faz a soma de 2 polinomios de grau no maximo 2
    *A soma eh feita realizando a operacao componente a componente
    *A funcao retorna um polinomio de grau no maximo 2
*/
struct polinomio SomaPolinomio(struct polinomio p1, struct polinomio p2);

/*
    *Funcao que faz a subtracao de 2 polinomios de grau no maximo 2
    *A Subtracao eh feita realizando a operacao componente a componente
    *A funcao retorna um polinomio de grau no maximo 2
*/
struct polinomio SubtraiPolinomio(struct polinomio p1, struct polinomio p2);


/*
    *Funcao que multiplica 2 polinomios de grau 0 ou 1 e retorna um polinomio de no maximo 2
    *A operação eh feita componente a componente, logo, deve-se inicializar todos os coeficientes dos operandos
*/
struct polinomio MultiplicaPolinomio(struct polinomio p1, struct polinomio p2);

/*
    *Funcao que devolve a raiz de uma funcao de primeiro grau, caso a raiz nao exista(a = 0), a funcao retorna -9999;
*/
float Resolve1(struct polinomio p1);

/*
    *Funcao que devolve a dupla de raizes de uma funcao de segundo grau
    *Caso o coeficience do termo de maior grau seja nulo, a funcao retorna -9999 como flag em todos os campos
*/
struct raizes Resolve2(struct polinomio p1);

/*
    *Funcao auxiliar que imprime um polinomio no formato (ax² + bx¹ + c)
*/
void ImprimePolinomio(struct polinomio p);

/*
    *Funcao auxiliar que imprime as raizes de uma funcao nos formatos
    (a, b) caso o polinomio tenha raizes reais
    (a + bi; a' + b'i) caso o polinomio tenha raizes imaginarias
*/
void ImprimeRaizes(struct raizes r);

