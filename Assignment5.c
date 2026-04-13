#include <stdio.h>
int main() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;
    printf("Enter elements of Matrix A:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]):
    printf("\nMatrix Addition:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    int min, col, saddle;
    for(i=0;i<3;i++){
        min = a[i][0];
        col = 0;
        for(j=1;j<3;j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }
        int isSaddle = 1;
        for(j=0;j<3;j++){
            if(a[j][col] > min){
                isSaddle = 0;
                break;
            }
        }
        if(isSaddle){
            saddle = min;
            printf("\nSaddle Point = %d\n", saddle);
        }
    }
    
    int sum1 = 0, flag = 1;
    for(i=0;i<3;i++)
        sum1 += a[0][i];
    for(i=0;i<3;i++){
        int rowsum = 0, colsum = 0;
        for(j=0;j<3;j++){
            rowsum += a[i][j];
            colsum += a[j][i];
        }
        if(rowsum != sum1 || colsum != sum1)
            flag = 0;
    }
    if(flag)
        printf("Matrix is Magic Square\n");
    else
        printf("Matrix is not Magic Square\n");
    return 0;
}