//C: gcc foo.c -o foo -ansi -fno-asm -O2 -Wall -lm --static -DONLINE_JUDGE
//C++: g++ foo.c -o foo -ansi -fno-asm -O2 -Wall -lm --static -DONLINE_JUDGE


#include <iostream>
using namespace std;
int a[6][6];
int count;

void find_zero(int n)
{
		for (int i = 1 ; i <= n ; i++)
        {
			for(int j = 1 ; j <=  n; j++)
			{
				if(a[i][j] == 4)
				{
					continue;
				}
				if (a[i-1][j] != 4 || a[i+1][j] != 4)
				{
					a[i][j] ++; 
				}
				if(a[i][j-1] != 4 || a[i][j+1] != 4)
				{
					a[i][j] ++;
				} 
				if (a[i][j] == 0)
				{
					count ++;
					a[i][j] = 5;
				}
			}
		}
}

void find_one(int n)
{
		 for (int i = 1 ; i <= n ; i++)
        {
			for(int j = 1 ; j <=  n; j++)
			{
				if(a[i][j] == 1)
				{
					count ++;
					a[i][j] = 5;
					for (int k = i-1; k >=1 ; k-- )
					{
						if(a[k][j] == 4)
						{
							break;
						}
						if(a[k][j] < 3)
						{
							a[k][j] = 3;
						}
					}
					for (int k = i+1; k <= n; k++)
					{
						if(a[k][j] == 4)
						{
							break;
						}
						if(a[k][j] < 3)
						{
							a[k][j] = 3;
						}
					}
					
					
					for (int k = j-1; k >=1 ; k-- )
					{
						if(a[i][k] == 4)
						{
							break;
						}
						if(a[i][k] < 3)
						{
							a[i][k] = 3;
						}
					}
					for (int k = j+1; k <= n; k++)
					{
						if(a[i][k] == 4)
						{
							break;
						}
						if(a[i][k] < 3)
						{
							a[i][k] = 3;
						}
					}
				}
			}
		}
}

void find_two(int n)
{
		for (int i = 1 ; i <= n ; i++)
        {
			for(int j = 1 ; j <=  n; j++)
			{
				if(a[i][j] == 2)
				{
					count ++;
					a[i][j] = 5;
					for (int k = i-1; k >=1 ; k-- )
					{
						if(a[k][j] == 4)
						{
							break;
						}
						if(a[k][j] < 3)
						{
							a[k][j] = 3;
						}
					}
					for (int k = i+1; k <= n; k++)
					{
						if(a[k][j] == 4)
						{
							break;
						}
						if(a[k][j] < 3)
						{
							a[k][j] = 3;
						}
					}
					
					
					for (int k = j-1; k >=1 ; k-- )
					{
						if(a[i][k] == 4)
						{
							break;
						}
						if(a[i][k] < 3)
						{
							a[i][k] = 3;
						}
					}
					for (int k = j+1; k <= n; k++)
					{
						if(a[i][k] == 4)
						{
							break;
						}
						if(a[i][k] < 3)
						{
							a[i][k] = 3;
						}
					}
				}
			}
		}
}

void work_out(int n)
{

		find_zero(n);
		find_one(n);
		find_two(n);

}

int main()
{
    int n;
    while(cin >> n && n) 
    {
        count = 0;
        for (int i = 0 ; i < 6 ; i++)
        {
			for(int j = 0 ; j <  6; j++)
			{
					a[i][j] = 4;
			}
		}

        for (int i = 1 ; i <= n ; i++)
        {
			for(int j = 1 ; j <=  n; j++)
			{
				char ch;
				cin >> ch;
				if(ch == '.')
				{
					a[i][j] = 0 ;
				}
			}
		}
        work_out(n);
        cout << count << endl;
	}
	
	return 0;
}


