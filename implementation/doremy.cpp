#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        int x=0,y=0,z=0;
        

        

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int size = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr + size);

        if(n%2!=0){
        for(int i=0;i<(n/2);i++)
        {
            if(arr[0]==arr[i])
            {
                x++;
            }
            
        }

      
       

         if(arr[n/2]==arr[0] || arr[n/2]==arr[n-1])
        {
            z++;
        }
      

        for(int j=(n/2)+1;j<n;j++)
        {
            if(arr[n/2 + 1]==arr[j])
            {
                y++;
            }
        }

        

       

    if( x+y+z==n)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

        }

        else
        {
        for(int i=0;i<(n/2);i++)
        {
            if(arr[0]==arr[i])
            {
                x++;
            }
            
        }
       
      

        for(int j=(n/2);j<n;j++)
        {
            if(arr[n/2]==arr[j])
            {
                y++;
            }
        }

       

    if( x+y==n)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

         
        }

        

   

       
    

    }
}