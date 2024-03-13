#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    int x=0,c=x;
    cin>>n;
    while(n-->0)
    {
        cin>>a>>b;

        x=x+b-a;

        if(x>c)
        {
            c=x;
        }

    }

    cout<<c;

}