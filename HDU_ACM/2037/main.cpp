/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午2:15
 * 
 * HDU-2037
 * 
 */

#include <iostream>
#include <stack>
using namespace std;

class Show
{
public:
	int s_t;
	int e_t;
};

Show* FindFirstShow(Show* shows, int length)
{
	int e_t=shows[0].e_t;
	int index=0;
	for (int i=0; i<length; i++)
	{
		if (e_t>shows[i].e_t)
		{
			e_t=shows[i].e_t;
			index=i;
		}
	}
	return shows+index;
}

Show* FindNextShow(Show* shows, int length, int s_t)
{
	int best_s_t=999999999;
	int index=-1;
	for (int i=0; i<length; i++)
	{
		if (shows[i].s_t>=s_t && shows[i].e_t<=best_s_t)
		{
			best_s_t=shows[i].e_t;
			index=i;
		}
	}
	if (index<0)
		return NULL;
	return shows+index;
}

int main()
{
	int n;
	cin >> n;
	Show* shows;
	while (n!=0)
	{
		shows=new Show[n];
		for (int i=0; i<n; i++)
			cin >> shows[i].s_t >> shows[i].e_t;
		Show* show=FindFirstShow(shows,n);
		int count=0;
		while (show!=NULL)
		{
			count++;
			show=FindNextShow(shows,n,show->e_t);
		}
		cout << count << endl;
		delete[] shows;
		cin >> n;
	}
	return 0;
}