#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int r =1;r<=n;r++)
    {
        for(int c = 1;c<=m;c++)
        {
           if(r%2!=0)
           {
            cout<<"#";
           } 

           else if(r%4!=0)
           {
            if(c==m)
            cout<<"#";
            else
            cout<<".";
           }

           else
           {
            if(c==1)
            cout<<"#";
            else
            cout<<".";
           }
        }

        cout<<endl;
    }
}

