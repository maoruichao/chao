#include<stdio.h>

int main()

{

   int m,j;
   int k = 0;

   for(m=2;m<=100000;m++)

    {for(j=2;j<=m-1;j++)

       if(m%j==0) break;

       if(j==m)  k++;
    }
     printf ("%d\n",k);
}
