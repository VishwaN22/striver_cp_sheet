#include <iostream>

using namespace std;

int main()
{
    int x,y,z,coc,chiz,k;

    cin>>x>>y>>z;

    coc = (x + y)/z;
   if ((x/z + y/z)==(x+y)/z)
   {
    chiz = 0;
   }
   else{
    chiz = min(z-(x%z),z-(y%z));

   }
    
    cout<<coc<<" "<<chiz<<endl;





    
}