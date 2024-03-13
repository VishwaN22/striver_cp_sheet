#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t-->0)
    {
        int arrx[4],arry[4];

        for(int i =0;i<4;i++)
        {
            cin>>arrx[i]>>arry[i];
            

        }

        int side;

        for(int i =0;i<4;i++)
        {
            if(arrx[0]==arrx[i] && i!=0)
            {
               side= abs(arry[0]-arry[i]);
               
            }
            

        }

        int area = side*side;
        cout<<area<<endl;


    }
}

