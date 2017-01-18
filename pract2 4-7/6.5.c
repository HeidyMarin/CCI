#include <iostream>
using namespace std;

void invertir(int a[], int n)
{
    for(int i=0 ; i<n/2 ; ++i)
    {
        int tmp = *( a + i ) ;
        int fin = n-i-1;
        *( a + i ) = *( a + fin ) ;
        *( a + fin ) = tmp ;
    }
}

int main()
{
    int a[] = {4,7,2,5,6};
    int n = 5;
    printArray(a,n);
}
