#include <stdio.h>
int main()
{
    int a;
    printf("Enter your no\n");
    scanf("%d", &a);
    int b[a];
    int i; char j; char k; char l;
    int ccount = k;
    int dcount = j;
    int ecount = l;
    printf("enter no");

    for (i = 0; i < a; i++)
    {
        scanf("%c", &b[i]);
        if (b[i] == 'j')
        {

            ccount = ccount + 1;
        }
        else if (b[i] == 'k')
        {
            dcount = dcount + 1;
        }
        else if (b[i] == 'l')
        {
            ecount = ecount + 1;
        }
         else{
            printf("valid no");
            a=a+1;
         }
          
    
    }
    for (int i = 1; i <= ccount; i++)
    {
        printf("j");
    }

    for (int i = 1; i <= dcount; i++)
    {
        printf("k");

    }
    for (int i = 1; i <= ecount; i++)
    {
        printf("l");
    }
    return 0;
}