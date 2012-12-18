#include <iostream>
using namespace std;

int main()
{
	bool** table;
	int k,m,n;
	int boy,girl;
	while (cin >> k >> m >> n)
	{
		table=new bool*[m];
		for (int i=0; i<m; i++)
			table[i]=new bool[n];
		for (int i=0; i<k; i++)
		{
			cin >> boy >> girl;
			table[boy-1][girl-1]=true;
		}

	}
}
