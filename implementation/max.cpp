#include<iostream>

using namespace std;

int main(){

    int n,count=1;
    cin>>n;
    int countarr[n];
       
    int arr[n];

 

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(i!=0){
        if(arr[i]>arr[i-1])
        {
            count++;
        }

        else
        {
        count=1;
        }

         countarr[i]==count;
        }

       
    }

    int max=countarr[1];

    for(int i = 2;i<n;i++)
    {
        if(countarr[i]>max)
        {
            max=countarr[i];
        }
    }

    cout<<max;

}