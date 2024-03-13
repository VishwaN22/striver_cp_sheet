#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;

        int c15,c10,c6,c3,c2,c1;

        c15 = n/15;
        c10 = (n - c15*15)/10;
        c6 = (n - c15*15 -c10*10)/6;
        c3 = (n - c15*15 -c10*10 - c6*6)/3;
        c1 = (n - c15*15 -c10*10 - c6*6 -c3*3)/1;

        cout<< "out"<<c15 + c10 + c6 + c3 + c1<<endl;
    }

}