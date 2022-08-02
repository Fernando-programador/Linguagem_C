#include <stdio.h>
#include <stdlib.h>

int main()
{
   void insertion (int *v)
{
    int i, j, aux;
    for (i=0; i< TAMANHO-1; i++)
    {
        j=i+1;
        while (v[j-1]>v[j] && j > 0)
        {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }
}
//comentario de teste

    return 0;
}

