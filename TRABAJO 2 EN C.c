#include <stdio.h>

int main()
{
    int c;
    int f;

    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d",&c);

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d",&f);

    int num[f][c];

    for(int i = 0; i < f; i++){
        for (int j = 0; j < c; j++)
        {
            num[i][j] = 0;
        }
        printf("\n");
    }
    

    for (int i = 0; i < f; i++)
    {
        num[i][j] = 1;
    }
    printf("Su matriz es: ");

     for(int i = 0; i < f; i++){
        for (int j = 0; j < c; j++)
        {
            printf("%d", num[i][j]);
        }
        printf("\n");
    }


    return 0;
}
