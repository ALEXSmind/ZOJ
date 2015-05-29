#include<iostream>
#include <string>
#include <map>
using namespace std;
 
int isLucky(map<char, int> &tmp)
{
    int sum = 0;
  char a;
    for(int i=0;i<26;i++)
    {
        a = 'a' + i;
        sum += tmp[a];
    }
  return sum;
}
 
int main()
{
    string str;
    cin>>str;
     
    int fNum[26] ;
    for(int i=0;i<26;i++)
    {
        if(i==1||i==2||i==3||i==5||i==8||i==13||i==21)
            fNum[i] = 1;
        else fNum[i] = 0;
    }
    int len = str.length();
    map <char, int> tmp;
    map <string, string> res;
     
    for(int i=0;i<26;i++)
    {
        char a = 'a' + i;
        tmp[a] = 0;
    }
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            tmp[str[j]] = 1;
            if(fNum[isLucky(tmp)]==1)
                res[str.substr(i,j-i+1)] = str.substr(i,j-i+1);
             
        }
		for(int k=0;k<26;k++)
		{
            char c = 'a' + k;
            tmp[c] = 0;
        }
         
    }
  for(map <string, string>::iterator itr = res.begin();itr!=res.end();itr++){
    cout<<itr->second<<endl;
        }
    return 0;
}
