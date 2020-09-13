#include <bits/stdc++.h>
using namespace std;

int main()
{
 int T;
  while(T--)
  {
    string s;

 string s1;    
    cin >>s>>s1;
  	for(int i=0;i<s.size();i++){
			v[s[i]-'a']++;
		}
			for(int i=0;i<s.size();i++){
			v[s1[i]]--;
		}
int j;
int flag=1;
    while(s1[j] ==s1[j+1])
    {
     flag+=1;
     j++;
    }
    if(p[count-1] > p[count])
    {
      if(a[p[count-1]] != 0)
      flag=1;
    }
    for(int j=0;j<26;j++)
    {
      if((j) == (int)p[0]-97 && flag ==0 )
      {
        if(a[j] != 0 )
        {
          for(int k =0 ;k<a[j];k++)
          {
            cout << (char)(j+97);
          }
          cout << p ;
        }
        continue;
      }
      else if((j) == (int)p[0]-97 && flag ==1 )
      {
        if(a[j] != 0 )
        {
          cout << p ;
          for(int k =0 ;k<a[j];k++)
          {
            cout << (char)(j+97);
          }

        }
        p[0] = '\0';
        continue;
      }
      else
      {
        if(a[j] != 0 )
        {
          for(int k =0 ;k<a[j];k++)
          {
            cout << (char)(j+97);
          }
        }
        continue;
      }

    }
  cout<<endl;
    
  }
  return 0;
}
