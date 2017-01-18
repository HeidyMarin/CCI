#include <iostream>

using namespace std;

int sum (int x , int y , int z)
{
    return x + y + z;
}

int sum (int x , int y , int z , int w)
{
    return x + y + z + w;
}

int main()
{
  cout<< sum(6,15,4,10);
}

