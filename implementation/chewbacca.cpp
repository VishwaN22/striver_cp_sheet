#include <iostream>

using namespace std;

int main()
{
  string s;
  int ch;
  cin>>s;

  for(int i =0;i<s.length();i++)
  {
    ch = s[i]-'0';//ascii value

    if(i==0 && ch==9)
    {
        s[i]='9';
    }

    else if(ch>4)
    {
        
        s[i]=(9-ch) + '0';
    }

    else
    {
        s[i]== ch + '0';
    }
  }

  cout<<s;

}