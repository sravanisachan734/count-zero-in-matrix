#include<stdio.h>
int main() {
    
    int matrix[3][3] = {
        {1, 0, 3},
        {0, 5, 0},
        {7, 8, 0}
    };

    int rows = 3; 
    int cols = 3; 
    int zeroCount = 0; 
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] == 0) {
                zeroCount++; 
            }
        }
    }

    printf("Number of zeros in the matrix: %d\n", zeroCount);

    return 0;
}