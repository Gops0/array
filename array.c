#include<stdio.h>
void main()
{
    int a[10][10],(*ptr)[10][10],i,j,sum=0;
    ptr=a;
    printf("Enter the elements in the matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
               scanf(" %d",ptr[i][j]);
           }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",*ptr[i][j]);
            if(i==j)
                sum=sum+*ptr[i][j];
        }       printf("\n");

    }   printf("\nSum of diagonal elements is %d",sum);
}
