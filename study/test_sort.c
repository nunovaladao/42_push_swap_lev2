#include <stdio.h>

struct variables
{
    int tmp;
    int i;
}         t_var;


void sort(int *array, int size)
{
    struct t_var;

    while (t_var.i < (size - 1))
    {
        if (array[t_var.i] > array[t_var.i + 1])
        {
            t_var.tmp = array[t_var.i];
            array[t_var.i] = array[t_var.i + 1];
            array[t_var.i + 1] = t_var.tmp;
            t_var.i = 0;
        }
        else 
            t_var.i++;
    }
}

int main()
{
    int array[] = {9, 2, 4, 1, 3};

    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n\n");

    sort(array, size);

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
}