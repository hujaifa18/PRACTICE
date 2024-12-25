#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c )
    {
        printf("Perimetro = %.1f\n",2*(a+b));
    }
    else if(b+c>a)
    {
        printf("Perimetro = %.1f\n",2*(b+c));
    }
    else if(a+c>b)
    {
        printf("Perimetro = %.1f\n",2*(a+c));
    }
    else{
        printf("")
    }
    
}