#include<iostream>

using namespace std;

int main()
{
    int n,a,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {count+=1;
        }
    }

    if(count>0)
    cout<<"HARD";
    else
    cout<<"EASY";


}