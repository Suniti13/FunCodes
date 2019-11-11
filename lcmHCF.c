//To find LCM and HCF of multiple numbers.

#include<stdio.h>
#include<stdlib.h>

int HCF(int, int);
int LCM(int, int);

int main()
{
    int n, i, a, b, lcm, hcf, ch;
    
    printf("Enter the number of values:\n");
    scanf("%d", &n);
    int list[n];
    
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }

    while(1)
    {
        printf("Choose:\n1. Get HCF\n2. Get LCM\n3. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
               a = list[0]; 
               for(i=1; i<n; i++)
               {
                    b = list[i];
                    hcf = HCF(a, b);
                    a = hcf;
               }
                printf("HCF is %d\n", hcf);
                break;
            case 2:
                a = list[0];
                for(i=1; i<n; i++)
                {
                    b = list[i];
                    lcm = LCM(a, b);
                    a = lcm;
                }
                printf("LCM is %d\n", lcm);
                break;
            case 3:
                exit(1);
        }
    }
}

int HCF(int n, int m)
{
    while(n!=0 && m!=0)
        if(n>m)
            n %= m;
        else
            m %= n;
    return n? n : m;   
}

int LCM(int a, int b)
{
    int g = HCF(a,b);
    a /= g;
    return(a*b); 
}
