#include<stdio.h>
int i,j;
int sumof_principle_diagonal(int array[4][4]);
int sumof_secondary_diagonal(int array[4][4]);
int sumof_first_row(int array[4][4]);
int sumof_last_row(int array[4][4]);
int sumof_first_column(int array[4][4]);
int sumof_last_column(int array[4][4]);
int sumof_upper_triangle(int array[4][4]);
int sumof_lower_triangle(int array[4][4]);
int main()
{
    int mat_A[4][4]={{3,5,9,7},{4,2,1,6},{8,7,5,3},{1,9,2,4}},sum=0;
    printf("Matrix A= ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",mat_A[i][j]);
        }
        printf("\n");
        printf("\t  ");
    }

    printf("\nSummation of principle diagonal: %d\n",sumof_principle_diagonal(mat_A));
    printf("\nSummation of secondary diagonal: %d\n",sumof_secondary_diagonal(mat_A));
    printf("\nSummation of first row: %d\n",sumof_first_row(mat_A));
    printf("\nSummation of last row: %d\n",sumof_last_row(mat_A));
    printf("\nSummation of first column: %d\n",sumof_first_column(mat_A));
    printf("\nSummation of last column: %d\n",sumof_last_column(mat_A));
    printf("\nSummation of upper triangle: %d\n",sumof_upper_triangle(mat_A));
    printf("\nSummation of lower triangle: %d\n",sumof_lower_triangle(mat_A));
    return 0;
}
int sumof_principle_diagonal(int array[4][4])
{
    int sum=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                sum=sum+array[i][j];
            }
        }
    }
    return sum;
}
int sumof_secondary_diagonal(int array[4][4])
{
    int sum=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i+j==3)
            {
                sum=sum+array[i][j];
            }
        }
    }
    return sum;
}
int sumof_first_row(int array[4][4])
{
    int sum=0;
    for(i=0;i<1;i++)
    {
        for(j=0;j<4;j++)
        {
                sum=sum+array[i][j];
        }
    }
    return sum;
}
int sumof_last_row(int array[4][4])
{
    int sum=0;
    for(i=3;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
                sum=sum+array[i][j];
        }
    }
    return sum;
}
int sumof_first_column(int array[4][4])
{
    int sum=0;
    for(i=0;i<1;i++)
    {
        for(j=0;j<4;j++)
        {
                sum=sum+array[j][i];
        }
    }
    return sum;
}
int sumof_last_column(int array[4][4])
{
    int sum=0;
    for(i=3;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
                sum=sum+array[j][i];
        }
    }
    return sum;
}
int sumof_upper_triangle(int array[4][4])
{
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
                sum=sum+array[i][j];
        }
    }
    return sum;
}
int sumof_lower_triangle(int array[4][4])
{
    int sum=0;
    for(i=1;i<4;i++)
    {
        for(j=0;j<i;j++)
        {
                sum=sum+array[i][j];
        }
    }
    return sum;
}

