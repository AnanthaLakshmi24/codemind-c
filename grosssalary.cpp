#include<stdio.h>
int main()
{
    int ba;
    float da,hra,gs;
    scanf("%d",&ba);
    if(ba<=10000)
    {
        da=(ba*0.8);
        hra=(ba*0.2);
    }
    else if(ba<=20000)
    {
        da=(ba*0.9);
        hra=(ba*0.25);
    }
    else if(ba>20000)
    {
        da=(ba*0.95);
        hra=(ba*0.30);
    }
    gs=(ba+da+hra);
    printf("%0.2f",gs);
    return 0;
}    










