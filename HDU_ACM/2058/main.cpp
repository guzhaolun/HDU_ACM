/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月24日, 上午10:19
 * 
 * 生成的序列要从小到大
 * 
 */

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int m,n;
	while (cin >> n >> m)
	{
		stack<int> s;
		if (m==0&&n==0)
			break;
		long long i=1;
		while ((2*m-i*i+i)>0)
		{
			if ((2*m-i*i+i)%(2*i)==0 && ((2*m-i*i+i)/(2*i)+i-1)<=n)
				s.push(i);
			i++;
		}
		while (!s.empty())
		{
			int i=s.top();
			cout << '[' << (2*m-i*i+i)/(2*i) << ',' << (2*m-i*i+i)/(2*i)+i-1 << "]\n";
			s.pop();
		}
		cout << endl;
	}
	return 0;
}