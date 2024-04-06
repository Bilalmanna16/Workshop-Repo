#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a[10][10], b[10][10], r[10][10], r1, c1, r2, c2, i, j, k;
void mat_add() 
{
    printf("Enter the order of matrix A:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the order of matrix B:");
    scanf("%d %d",&r2,&c2);
    if(r1 != r2 || c1 != c2) 
    {
        printf("Mtrices are not compatible for addition");
        return;
    }
    
    printf("\nEnter elements of matrix A:");
    for(i=0;i<r1;i++) 
        for(j=0;j<c1;j++) 
            scanf("%d",&a[i][j]);
            
    printf("\nEnter elements of matrix B:");
    for(i=0;i<r2;i++) 
        for(j=0;j<c2;j++) 
            scanf("%d",&b[i][j]);  
            
    for(i=0;i<r2;i++) 
        for(j=0;j<c2;j++) 
            r[i][j] = a[i][j]+b[i][j];
    
    
    printf("\n Matrix A\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",a[i][j]);
        printf("\n");    
    } 
    
    printf("\n Matrix B\n");
    for(i=0;i<r2;i++) 
    {
        for(j=0;j<c2;j++) 
            printf("%d ",b[i][j]);
        printf("\n");    
    }
    
    printf("\n Sum Matrix :\n");
    for(i=0;i<r2;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",r[i][j]);
        printf("\n");    
    }
}

void mat_sub()
{
    printf("Enter the order of matrix A:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the order of matrix B:");
    scanf("%d %d",&r2,&c2);
    if(r1 != r2 || c1 != c2) 
    {
        printf("Mtrices are not compatible for addition");
        return;
    }
    
    printf("\nEnter elements of matrix A:");
    for(i=0;i<r1;i++) 
        for(j=0;j<c1;j++) 
            scanf("%d",&a[i][j]);
            
    printf("\nEnter elements of matrix B:");
    for(i=0;i<r2;i++) 
        for(j=0;j<c2;j++) 
            scanf("%d",&b[i][j]);  
            
    for(i=0;i<r2;i++) 
        for(j=0;j<c2;j++) 
            r[i][j] = a[i][j]-b[i][j];
    
    
    printf("\n Matrix A\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",a[i][j]);
        printf("\n");    
    } 
    
    printf("\n Matrix B\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",b[i][j]);
        printf("\n");    
    }
    
    printf("\n Difference Matrix :\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",r[i][j]);
        printf("\n");    
    }  
}

void mat_multiply()
{
    printf("Enter the order of matrix A:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the order of matrix B:");
    scanf("%d %d",&r2,&c2);
    if(c1 != r2) 
    {
        printf("Mtrices are not compatible for multiplication");
        return;
    }
    
    printf("\nEnter elements of matrix A:");
    for(i=0;i<r1;i++) 
        for(j=0;j<c1;j++) 
            scanf("%d",&a[i][j]);
            
    printf("\nEnter elements of matrix B:");
    for(i=0;i<r2;i++) 
        for(j=0;j<c2;j++) 
            scanf("%d",&b[i][j]);  
            
    for(i=0;i<r1;i++) 
        for(j=0;j<c1;j++)
        { 
            r[i][j] = 0;
            for(k=0;k<c1;k++) 
                r[i][j] += a[i][j]*b[i][j];
        }    
    
    
    printf("\n Matrix A\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",a[i][j]);
        printf("\n");    
    } 
    
    printf("\n Matrix B\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",b[i][j]);
        printf("\n");    
    }
    
    printf("\n Product Matrix :\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",r[i][j]);
        printf("\n");    
    }  
}

void mat_transpose()
{
    printf("Enter the order of matrix:");
    scanf("%d %d",&r1,&c1);
    
    printf("\nEnter elements of matrix:");
    for(i=0;i<r1;i++) 
        for(j=0;j<c1;j++) 
            scanf("%d",&a[i][j]);
            
            
    for(i=0;i<r1;i++) 
        for(j=0;j<c1;j++) 
            r[i][j] = a[j][i];
    
    
    printf("\n Matrix A\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",a[i][j]);
        printf("\n");    
    } 
    
    
    printf("\n Trnspose Matrix :\n");
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
            printf("%d ",r[i][j]);
        printf("\n");    
    }  
}

void main()
{
    int choice;
    while(1)
    {
        clrscr();
        printf("\n MENU \n");
        printf("\n 1. Addition \n");
        printf("\n 2. Substraction \n");
        printf("\n 3. Multiplication \n");
        printf("\n 4. Transpose \n");
        printf("\n 5. Exit \n");
        printf("\n Enter your choice :");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: clrscr();
                    printf("\n Matrix Addition \n");
                    mat_add();
                    getch();
                    break;
            case 2: clrscr();
                    printf("\n Matrix Subtraction \n");
                    mat_sub();
                    getch();
                    break;
            case 3: clrscr();
                    printf("\n Matrix Multiplication \n");
                    mat_multiply();
                    getch();
                    break;
            case 4: clrscr();
                    printf("\n Matrix Transpose \n");
                    mat_transpose();
                    getch();
                    break;
            case 5: printf("Thanks for using the Program");
                    getch();
                    exit(0);
            default : printf("Invalid Choice ");                            
        }
        getch();
    }
}