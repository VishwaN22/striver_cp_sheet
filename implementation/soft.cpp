#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x = k*l/nl;
    int y = c*d;
    int z = p/np;

    int toast=min(x,min(y,z))/n;
    cout<<toast;
    return 0;

}