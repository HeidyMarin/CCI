#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for(int i=0; i<n; ++i)
    {
        cout<<a[i];
        if(i<n-1)
        {
            cout<<", ";
        }
    }
}

int main()
{
    int a[] = {4,7,2,5,6};
    int n = 5;
    printArray(a,n);
}
