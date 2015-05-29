#include <iostream>
using namespace std;

bool alldone,bdone;

void DFS(int a, int b, int num)
{
      if(alldone)
      {
		  return;
	  }
      if(a == 1 && b ==1)
      {
		  alldone = true;
		  return;
	  }
	if(b == 1)
	{
		bdone = true;
	}
    while(num > 1)
    {
        if(a%num == 0) 
        {
			DFS(a/num, b, num-1);
		}
        if(b%num == 0) 
        {
			DFS(a, b/num, num-1);
		}
        num--;
    }

	 return;
}

int main()
{
    int a,b,temp;
    while(cin >> a >> b)
    {
		if(a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		alldone = false;
		bdone = false;
		DFS(a,b, 100);
		if(!alldone && bdone)
		{
			cout << b << endl;
		}
		else
		{
			cout << a << endl;
		}
	}
	
}
