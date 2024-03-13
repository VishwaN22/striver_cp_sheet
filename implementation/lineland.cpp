#include<iostream>

using namespace std;

int main(){
    int x1,x2,x3,a1,a2,a3;
    cin>>x1>>x2>>x3;
     a1 = abs(x1-x2) + abs(x1-x3);
     a2 = abs(x2-x1) + abs(x2-x3);
    a3 = abs(x3-x1) + abs(x3-x2);

    int dist = min(a1,min(a2,a3));
    cout<<dist;
}