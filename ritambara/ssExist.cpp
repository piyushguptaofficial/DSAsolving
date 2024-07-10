#include<iostream>
using namespace std;

bool ssExist(int a[], int n, int k, int i)
{
    if(k==0)
    {
        return true;
    }

    if(i>=n)
    {
        return false;
    }

    return bool(ssExist(a, n, k-a[i], i+1) 
    || ssExist(a,n, k, i+1));

}

int main()
{
    int a[5] = {5,8,6,2,1};
    int k = 115;

    ssExist(a, 5, 115, 0);
}