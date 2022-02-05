// GATE 2022 (cse session 1)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[3][3][3] = {{1, 2, 3, 4, 5, 6, 7, 8, 9},
                        {10, 11, 12, 13, 14, 15, 16, 17, 18},
                        {19, 20, 21, 22, 23, 24, 25, 26, 27}};

    int i=0, j=0, k=0;

    for (int i=0; i < 3; i++){
        for (int k=0; k < 3; k++){
            printf("%d ", arr[i][j][k]);
        }
        printf("\n");
    }
}