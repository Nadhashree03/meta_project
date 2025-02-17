#include<stdio.h>
int main(){
int rows,column;
printf("enter the no of rows and column:");
scanf("%d%d",&rows,&column);
int array[rows][column];
int i,j;
for(i=0;i<rows;i++){
for(j=0;j<column;j++){
scanf("%d",&array[i][j]);
}
}
for(i=0;i<rows;i++){
for(j=0;j<column;j++){
printf("%d\t",array[i][j]);
}
printf("\n");
}
return 0;
}
