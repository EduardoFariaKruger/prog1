#include <stdio.h>

main()
{
    int contador;
    int vetor[10] = {1, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] == 1)
        {
            contador = contador + vetor[i];
        }
    }
}