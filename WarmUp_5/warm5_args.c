#include <stdio.h>
//functions for add and mult matrices
void matrix_add(int matrix1[2][2],int matrix2[2][2],int result[2][2]){
        for(int i = 0; i<2;i++){
            for (int j=0; j<2;j++){
                result[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
    }
    void matrix_mult(int matrix1[2][2],int matrix2[2][2],int result[2][2]){
        for(int i = 0; i<2;i++){
            for (int j=0; j<2;j++){
                result[i][j]=0;
                for(int k = 0; k < 2; k++){
                    result[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
    }
    
int main() {

        //declare and init two 2x2 matrices
        int matrix1[2][2] = {{1,2},{3,4}};
        int matrix2[2][2] = {{5,6},{7,8}};
        
        //declare 2x2 matrix 
        int result[2][2];
        
        //perform matrix addition
        matrix_add(matrix1,matrix2,result);
        
        //print out results of matrix addition
        printf("result:\n");
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
        //perform mult
        matrix_mult(matrix1,matrix2,result);
        //print out result mult
        printf("result of matrix mul:\n");
        for(int i = 0; i < 2; i++){
            for(int j = 0; j<2;j++){
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
        return 0;
    }