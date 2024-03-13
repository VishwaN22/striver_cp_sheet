#include<iostream>

using namespace std;

int main(){

    int n,count=1;
    int arr[n];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(i!=0){
        if(arr[i]>arr[i-1])
        {
            count++;
        }

        else
        count=1;
        }
    }

    cout<<count;

}