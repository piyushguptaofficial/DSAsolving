#include<bits/stdc++.h>
using namespace std;

void printSS(int a[], int n, int ss[], int len, int i)
{
    
    if(i>=n)
    {
        for(int j=0; j<len; j++)
        {
            cout<<ss[j]<<" ";
        }
        cout<<"\n";
        return ;
    }
    //include
    ss[len] = a[i];
    printSS(a, n, ss, len+1, i+1);

    //not include
    printSS(a, n, ss, len, i+1);
}


int main()
{
    int a[3] = {1,2,3};
    int ss[3];

    printSS(a, 3, ss, 0, 0);
}