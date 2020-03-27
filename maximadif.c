#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


int maxim (int n, int m) {
    if (n>m) {
        return n;
    }
    if (n<m) {
        return m;
    }
    else {
        return m;
    }
}

int maximadif (int a[], int tam) {
    int i=1;
    int r=-248314764;
    int j=a[0];
    while (i<tam) {
        r = maxim (r,j-a[i]);
        j = maxim (j,a[i]);
        i++;
    }
    return r;
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

    printf("El resultado es %d",maximadif(a,tam));
    return 0;

}