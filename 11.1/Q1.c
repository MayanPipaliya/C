#include <stdio.h>
#define p printf
#define s scanf

main()
{
    int n;
    
    p("Enter array size : ");
    s("%d", &n);
    
    int a[n],i;
    
    for(i = 0; i < n; i++)
    {
        p("a[%d] : ", i);
        s("%d", &a[i]);
    }

    int *ptr;
    
    ptr = &a;//a[0]

    p("\n\tsqure of elements....\n\n");
    
    for (i = 0; i < n; i++)
    {
        p("%d ", (*(ptr + i))*(*(ptr + i)));
    }
}
