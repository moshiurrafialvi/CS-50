#include<stdio.h>
int main(void)
{
    int n,i,j,k;
    int gap;

    do
    {
        printf("enter the number of lines:");
        scanf("%d",&n);
    }
    while(n<1 || n>8);
//right align pyramid
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n- i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        for(gap=0;gap<2;gap++){
            printf(".");
        }
         for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");


}
}

