#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t-->0)
    {
        int n,f,a,b;

        cin>>n>>f>>a>>b;
        int arr[n];
        int cost=0;

        for(int i =0;i<n;i++)

    {
        cin>>arr[i];
        
         int d=  arr[i+1]-arr[i]-1;
         

         if(d*a<b)
         {
            cost+=d*a;
         }
         else
         {
            cost+=b;
         }

         cost+=a;
            
        
    }

    if(cost>f)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    }

}