#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

double pi(int n)
{
    srand(time(0));

    int nDart = 0;
    for(int i = 0; i<n; ++i)
    {
        double x=rand() / (double) RAND_MAX, y=rand() / (double) RAND_MAX;

        if(sqrt(x*x + y*y)<1)
        {
            ++nDart;
        }
    }
    return nDart / static_cast <double >(n ) * 4;
}

int main()
{
    int n = 3;
    cout<<pi(n);
}
