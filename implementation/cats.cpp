#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t-->0)
    {
            int n,count=0,cati=0,catf=0;
            string intia,fina;
            cin>>n;
            cin>>intia>>fina;

            for(int i=0;i<n;i++)
            {
                if(intia[i]!=fina[i])
                {
                    count++;
                }

                if(intia[i]=='1')
                {
                    cati++;

                }

                if(fina[i]=='1')
                {
                    catf++;

                }
            }

            int diff=abs(catf-cati);


            if(count!=diff)
            {
                int x = abs(count-diff);
                int y = diff + x/2;
              
                cout<<y<<endl;
            }

            else{
                cout<<count<<endl;
            }
            
    }

}
