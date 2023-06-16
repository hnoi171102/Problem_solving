#include<bits/stdc++.h>
using namespace std;

string strs[105];
string original_strs[105];

vector<string> ans[105];

void sortString(string &str)
{
   sort(str.begin(), str.end());
}

int main()
{
    //freopen("test.txt","r",stdin);
    string s;
    int cnt = 0;
    while(cin>>s)
    {
      strs[cnt] = s;
      original_strs[cnt]=s;
      cnt++;
    }

    for(int i = 0; i < cnt; i++)
    {
      sortString(strs[i]);

    }

    for(int i = 0; i < cnt ; i++)
    {
      int flag = 1;
      for(int j = 0 ; j < i ; j ++)
      {
          if(strs[j] == strs[i])
          {
            flag = 0;
            ans[j].push_back(original_strs[i]);
            break;
          }
      }

      if(flag == 1)
      {
        ans[i].push_back(original_strs[i]);
      }
    }

    string answer;
    answer = "[";
    for(int  i = 0 ; i < cnt ; i++)
    {
      if(ans[i].size()!=0)
      {
        answer+="[";
        for(int j = 0; j < ans[i].size(); j++)
        {
          answer+=ans[i][j];
          if(j!=ans[i].size()-1)
          answer+=',';
        }
        answer+="]";
      }
    }
    answer+="]";
    cout<<answer;

}
