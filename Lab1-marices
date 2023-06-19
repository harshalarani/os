// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 2
void display(int m[M][N])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void add(int m1[M][N],int m2[M][N])
{
    int res[M][N];
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            res[i][j]=m1[i][j]+m2[i][j];
        }
    }
    display(res);
}
void subtract(int m1[M][N],int m2[M][N])
{
    int res[M][N];
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            res[i][j]=m1[i][j]-m2[i][j];
        }
    }
    display(res);
}
void rowadd(int m[M][N])
{
    int i,j,sum=0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            sum+=m[i][j];
        }
        printf("\n%d",sum);
        sum=0;
    }
}
void coladd(int m[M][N])
{
    int i,j,sum=0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            sum+=m[j][i];
        }
        printf("\n%d",sum);
        sum=0;
    }
}


void main()
{
    int mat1[M][N],mat2[M][N];
    int i,j,c;
    while(1)
    {
        printf("\n1.Matrix addition\n2.Matrix Subtraction\n3.Row addition\n4.Column addition\n5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("\nenter the elements of the first matrix \n");
                    for(i=0;i<M;i++)
                    {
                        for(j=0;j<N;j++)
                        {
                            scanf("%d",&mat1[i][j]);
                        }
                    }
                    printf("\nenter the elements of the second matrix\n");
                    for(i=0;i<M;i++)
                    {
                        for(j=0;j<N;j++)
                        {
                            scanf("%d",&mat2[i][j]);
                        }
                    }
                    add(mat1,mat2);
                    break;
            case 2:
                    printf("\nenter the elements of the first matrix \n");
                    for(i=0;i<M;i++)
                    {
                        for(j=0;j<N;j++)
                        {
                            scanf("%d",&mat1[i][j]);
                        }
                    }
                    printf("\nenter the elements of the second matrix \n");
                    for(i=0;i<M;i++)
                    {
                        for(j=0;j<N;j++)
                        {
                            scanf("%d",&mat2[i][j]);
                        }
                    }
                    subtract(mat1,mat2);
                    break;
            case 3:
                    printf("\nenter the elements of the first matrix\n");
                    for(i=0;i<M;i++)
                    {
                        for(j=0;j<N;j++)
                        {
                            scanf("%d",&mat1[i][j]);
                        }
                    }
                    rowadd(mat1);
                    break;
            case 4:
                    printf("\nenter the elements of the first matrix\n");
                    for(i=0;i<M;i++)
                    {
                        for(j=0;j<N;j++)
                        {
                            scanf("%d",&mat1[i][j]);
                        }
                    }
                    coladd(mat1);
                    break;
            default: printf("invalid choice \n");
                    exit(0);


        }
    }
}
