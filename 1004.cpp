#include <iostream>
using namespace std;

bool alldone,bdone;

void DFS(string s1, string s2, char ss[], char st[],int Ns,int Nt,int num1,int num2,int n)
{

	if(num1 == n )
	{
		for(int i = 0; i < 2*n; i++)
		{
			cout << st[i] <<" ";
		}
		cout << endl;
		return ;
	}

	if(Ns >= 1) 
	{
		if(ss[Ns-1] == s2[num2])
		{
			st[Nt] = 'o';

			DFS(s1,s2,ss,st,Ns-1,Nt+1,num1,num2+1,n);
		}
	}
	if(num1 < n)
	{
			ss[Ns] = s1[num1];
			st[Nt] = 'i';
			DFS(s1,s2,ss,st,Ns+1,Nt+1,num1+1,num2,n);
	}
*/
	


}

int main()
{
    string s1,s2;
    int n;
    while(cin >> s1 >> s2)
    {
		if(s1.size() == s2.size())
		{
			n = s1.size();
			char Sstack[n],Starget[2*n];
			cout << "[" << endl;
			DFS(s1,s2,Sstack,Starget,0,0,0,0,n);
			cout << "]" << endl;	
		}
		else
		{
			cout << "[" << endl;
			cout << "]" << endl;
		}
	}
	
}

