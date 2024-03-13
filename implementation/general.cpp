#include<iostream>

using namespace std;

int main()
{
    int n,swap=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    int max=arr[0];
    int posf=0,posl=0;
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
       max=arr[i];
       posf=i;
       }

       if(arr[i]<=min)
       {
        min = arr[i];
        posl=i;
       }

    }

    if(posl<posf)
    {
    swap = posf + n-2-posl;
    cout<<swap<<endl;
    }

    else
    {
   swap = posf + n-1-posl;
    cout<<swap<<endl;
    }

    

}