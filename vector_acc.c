#include <stdio.h>
//reduction
int main()
{
    int i, n;
    n=1000;
    float a[n], b[n], result;
    // initializations
    //n = 100;
    result = 0.0;
    for (i = 0; i < n; i++)
    {
        a[i] = i * 1.0;
        b[i] = i * 2.0;
        
    }
    #pragma acc parallel 
    for (i = 0; i < n; i++)
    {
        
        result = result + (a[i] * b[i]);
    }
    
    printf("a*b= %12.6lf\n", result);
    
    return 0;
}
