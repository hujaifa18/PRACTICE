#include<stdio.h>
void reverse(int a[],int n);
void printarr(int a[],int n);
int main()
{
    int a[] = {1,2,3,4,5};
    
    reverse(a,5);
    printarr(a,5);
}
void printarr(int a[],int n){
    for(int i=0; i<n;i++){
        printf("%d \t",a[i]);
    }
}
void reverse(int a[],int n){
    for(int i=0; i<=n/2; i++)
    {
        int first = a[i];
        int second = a[n - i - 1];
        a[i] = second;
        a[n - i - 1] = first;
    }
}
