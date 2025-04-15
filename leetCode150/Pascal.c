/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** triangle = (int**) malloc(sizeof(int*) * numRows);
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    for(int i = 1;i <= numRows; i++){
        triangle[i-1] = (int*) malloc(sizeof(int) * i);
        (*returnColumnSizes)[i-1] = i;
        for(int j = 0;j < i;j++){
            if(j == 0 || j == i-1)
                triangle[i-1][j] = 1;
            else
                triangle[i-1][j] = triangle[i-2][j-1] + triangle[i-2][j];
        }
    }
    *returnSize = numRows;
    return triangle;
}
