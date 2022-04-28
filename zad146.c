// Program treba naci najmanji broj koristeci dinamicku alokaciju memorije.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, br;
    float *data;

    printf("Koliko elemenata zelis: ");
    scanf("%d", &br);

    // Alocira memoriju za br elemenata
    data = (float*) calloc(br, sizeof(float));

    if(data == NULL)
    {
        printf("\nError!!! memorija nije alocirana.");
        exit(0);
    }

    // Spremi brojeve.
    for(i = 0; i < br; ++i)
    {
       printf("\nUnesi broj %d : ", i + 1);
       scanf("%f", data + i);
    }

    
    for(i = 1; i < br; ++i)
    {
       
       if(*data > *(data + i))
           *data = *(data + i);
    }

    printf("\nNajmanji element = %.2f\n", *data);

    return 0;
}
