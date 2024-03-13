#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,count=0,h=0;
    cin>>n;
    while(n>count)
    {
        h++;
        count+=h*(h+1)/2;
    }

    cout<<h;




}

