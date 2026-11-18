#include <stdio.h>
int main()
{
int rows=2, cols=2;
int mat1 [rows][cols], mat2 [rows][cols], result[rows][cols];
printf("Enter measurement data of machine component 1: \n");
for(int i=0;i<rows;i++){
for (int j=0; j<cols; j++)
{
 printf("Element [%d][%d]: ",i,j);
 scanf("%d", &mat1[i][j]);
 }
}
printf("Enter measurement data of machine component 2: \n");
for(int i=0;i<rows;i++){
for (int j=0; j<cols; j++)
{
 printf("Element [%d][%d]: ",i,j);
 scanf("%d", &mat2[i][j]);
 }
}
for(int i=0;i<rows;i++){
for (int j=0; j<cols; j++)
{
 result [i][j] = mat1[i][j]+mat2[i][j];
 }
}
printf("\nResultant Measurement Matrix: \n");
for(int i=0;i<rows;i++){
for (int j=0; j<cols; j++)
{
 printf("%d\t", result[i][j]);
 }
 printf("\n");
}
return 0;
}
