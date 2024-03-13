#include<iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   
   int arr1[n];
   int arr2[n];

   for(int i=0;i<n;i++)
   {
    cin>>arr1[i]; //value is friend who gave gift i, i got the gift
   } 

    for(int j=0;j<n;j++)
    {
    arr2[arr1[j]]=j+1;
    }
    
    for(int k=1;k<=n;k++)
   {
   
     cout<<arr2[k]<<" ";

   }
}

