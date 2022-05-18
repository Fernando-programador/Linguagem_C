
int main{

void selecao(int *v){
 int i, j, aux;

 for(i=0; i< tamanho; i++){
    for (j=i+1; j<tamanho; j++){
        if(v[i] > v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
 }

}


}
