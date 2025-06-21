#include<stdio.h>

int main() {
    int i, j;
    int difference[3][3];
    int array1[3][3], array2[3][3];

   
    printf("Enter elements of array1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

   
    printf("Enter elements of array2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &array2[i][j]);
        }
    }


    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            difference[i][j] = array1[i][j] - array2[i][j];
        }
    }

    
    printf("The difference of array1 and array2 is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
