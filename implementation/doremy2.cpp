#include <iostream>


using namespace std;

int main()
{
   int T;
   cin>>T;
   while(T-->0)
   {
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int count=1,flag=1;

    for(int k=1;k<m;k++)
    {
        if(t[k]==t[k-1])
        {
            flag=0;
        }
    }

if(flag==1){
    for(int i=1;i<n;i++) 
    {
        if(s[i]==s[i-1])
        { 
        if(s[i-1]!=t[0] && s[i]!=t[m-1])
        {
            count=count*1;
            
           
        }

        else
        {
            count=count*0;
           
            
        }
        }

        else
        count=count*1;
        
    }

    if(count==1)
    {
        cout<<"Yes"<<endl;
    }

    else
    cout<<"No"<<endl;
   }

   

else
cout<<"No"<<endl;
}


}