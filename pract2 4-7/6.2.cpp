#include <iostream>
using namespace std;

void invertir(int a[], int n)
{
    for(int i=0 ; i<n/2 ; ++i)
    {
        int temp;
        int fin = n-i-1;
        temp = a[i];
        a[i] = a[fin];
        a[fin] = temp;
    }
}

int main()
{
    int a[] = {4,7,2,5,6};
    int n = 5;
    invertir(a,n);
    cout<<a;
}
