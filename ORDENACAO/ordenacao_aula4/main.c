#include <stdio.h>
#include <stdlib.h>

int main()
{
    void bolha(int *v){
    int troca = 1;
    int i = 0;
    int aux;

    while(troca){
        troca = 0;
        while( i < tamanho - 1)
        {
            if (v[i] > v[i+1]){

                aux = v[i];
                v[i] = v[i+1];
                v[i+] = aux;
                troca = 1;
            }
            i++
        }
        i = 0;
    }

    }
    return 0;
}
