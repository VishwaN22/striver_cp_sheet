#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k=0,m=1;
        cin>>n;
        int arr[5];
        for(int j=0;j<5;j++)
        {
            arr[j]=n%10;
            n=n/10;
            if(arr[j]!=0)
            {
                k++;
            }
        }

        cout<<k<<endl;
        for(int l=0;l<5;l++)//10000
        {
            if(arr[l]!=0)
            {
                cout<<arr[l]*m<<" ";
            }
        m=m*10;
        }

    cout<<endl;

    }
    return 0;
}