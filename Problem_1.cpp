#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  string t="";
  cin>>s;
  bool flag = 1;
  while(flag)
  {
    flag = 0;
    t="";
    for(int i = 0 ; i < s.length() ; i++)
    {
      if(i==s.length()-1)
        t+=s[i];
      else if((s[i]=='A'&&s[i+1]=='B')||(s[i]=='C'&&s[i+1]=='D'))
      {
        flag = 1;
        i++;
      }
      else
      {
        t+=s[i];
      }

    }
    s=t;
  }
  cout<<t.length();
}
