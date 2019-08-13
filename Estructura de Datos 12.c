#include<stdio.h>
#define A 4
void Asignar(int[A][A], int*[A]);
void Carga(int*[A]);
void Imprime(int*[A]);

main()
{
    system("color F0");
    int arreglo[A][A],*ap[A];
    printf("\n\t\tPuntero Direccionado a Una Matriz de Punteros.\n\n");
    Asignar(arreglo,ap);
    Carga(ap);
    Imprime(ap);
    getchar();
    getchar();
}

void Asignar(int arreglo[A][A],int *ap[A])
{
    int i;
    for(i=0;i<A;++i)
    {
        *(ap+i)=*(arreglo+i);
    }
}

void Carga(int *ap[A])
{
    int i,j;
    printf("\n\nIngresa los Datos Numericos.\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;++j)
        {
            scanf("%d",*(ap+i)+j);
        }
    }
}

void Imprime(int *ap[A])
{
    int i,j;
    printf("\n\nImpresion de los Datos de Forma Matricial.\n\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;++j)
        {
            printf("\t%d",*(*(ap+i)+j));
        }
        printf("\n");
    }
}
