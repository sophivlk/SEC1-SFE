#include "stdio.h"

void print_tab(int *t, int l){
    for (int i = 0; i < l; i++)
        printf("%d ", *(t+i) );
    printf("\n");
}

/* sort table t of length l */
void bubble_sort(int *t, int l){
    
}

int main(){
    const int length = 10;
    int valeurs[] = {10, 4, 1, 3, 32, 7, 11, 28, 8, 12};
    bubble_sort(valeurs, length);
    print_tab(valeurs, length);
}