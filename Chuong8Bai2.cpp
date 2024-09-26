#include<stdio.h>
int UCLN(int a,int b,int c,int d)
{
    int i,ma=a;
    if (b>ma)
        ma=b;
    if (c>ma)
        ma=c;
    if (d>ma)
        ma=d;  
    for (i=ma;i>=1;i--)
        if (a%i ==0 && b%i ==0 && c%i ==0 && d%i ==0)
            break;
    return i;
}
int  main()
{
    int a,b,c,d,i;
    printf("Nhap a,b,c,d: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("UCLN la: %d ",UCLN(a,b,c,d));
 
}
