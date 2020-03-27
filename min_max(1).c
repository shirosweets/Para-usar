#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


struct datos_t {
int maximo;
int minimo;
};


struct datos_t min_max(int a[], int tam) {
    struct datos_t min_max;
    min_max.maximo = a[0];
    min_max.minimo = a[0];

    int i=0;
    
    while (i<tam) {
        if (a[i]<=min_max.minimo) {
            min_max.minimo = a[i];
        }
        if (a[i]>=min_max.maximo) {
            min_max.maximo = a[i];
        }
        i++;
    }
    
 return min_max;
}

int main (void) {
    int tam;
    int i=0;

    printf("Ingrese el tamanio del arreglo\n");
    scanf("%d",&tam);
    
    int a[tam];

    while (i<tam) {
        printf("Ingrese un elemento\n");
        scanf("%d",&a[i]);
        i++;
    }

    printf("El maximo es %d y el minimo es %d",min_max(a,tam).maximo,min_max(a,tam).minimo);

}