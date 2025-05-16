#include<stdio.h>
int main()
{
    int row,col,i,sum=0,j;
	float ans;
	
    
	printf("enter the Row:- ");
	scanf("%d",&row);
	printf("enter the Column:- ");
	scanf("%d",&col);

    int a[row][col],b[row][col];
	
    printf("\nEnter Matrix A's number\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("a[%d][%d]:-",i,j);
		scanf("%d",&a[i][j]);
	   }		
	}

    printf("\nEnter Matrix B's number\n");
    for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("b[%d][%d]:-",i,j);
		scanf("%d",&b[i][j]);
	   }		
	}
    printf("\nsum of A & B elements\n :- ");
    for(i=0;i<row;i++){
		for(j=0;j<col;j++){
            printf(" %d",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}/*#include <stdio.h>

int main() {
    int row, col, i, j;

    printf("Enter the number of Rows: ");
    scanf("%d", &row);
    printf("Enter the number of Columns: ");
    scanf("%d", &col);

    int a[row][col], b[row][col];

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of Matrix A and B:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/