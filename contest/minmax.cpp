#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t-->0)
    {
        int n,max,max2,min,min2;

        cin>>n;
        int arr[n];

        for (int i =0;i<n;i++)
        {
            cin>>arr[i];
        }

        max = arr[0],min=arr[0],max2=arr[0],min2=arr[0];
        int maxi=0,mini=0;

        for(int j =0;j<n;j++)
        {
            if(arr[j]>max)
            {
                max = arr[j];
                maxi =j;
            }

            if(arr[j]<min)
            {
                min = arr[j];
                mini=j;
            }

            

           
         }

            for ( int k =0;k<n;k++)
        {
             if(arr[k]<min2 && arr[k]>=min)
            {
                if(arr[k]==min)
                {
                    if(k!= mini)
                    {
                        min2=arr[k];
                    }
                }
                else{
                min2 = arr[k];
                }
            }

            if(arr[k]>max2 && arr[k]<=max)
            {

                 if(arr[k]==max)
                {
                    if(k != maxi)
                    {
                        max2=arr[k];
                    }
                }
                else{
                max2 = arr[k];
                }
        }

        }

        
        cout<< abs(max-min) + abs(min - max2) + abs(max2 - min2) + abs(min2-max) << endl;

    }
}