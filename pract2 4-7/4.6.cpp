#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    if(n == 0)
        return 0;
    return sum(a,n-1) + a[n-1];
}

int main()
{
    int a[] = {3,6,4,1,7};
    int n=5;
    cout<<sum(a,n);
}
