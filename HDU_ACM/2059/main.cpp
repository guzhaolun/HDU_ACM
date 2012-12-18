/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月25日, 下午12:05
 * 
 * 动态规划, 关键是要找到子问题的最优解
 * 
 */

#include <iostream>
using namespace std;

double mintime(int length,double v1, double v2, int max)
{
	if (length>max)
		return max/v1+(length-max)/v2;
	return length/v1;
}

int main()
{
	int l;
	while (cin >> l)
	{
		int n,c,t;
		cin >> n >> c >> t;
		double vr,vt1,vt2;
		cin >> vr >> vt1 >> vt2;
		if (vt2>vr)
		{
			cout << "What a pity rabbit!" << endl;
			continue;
		}
		if (vt1<vr)
		{
			cout << "Good job,rabbit!" << endl;
			continue;
		}
		double* p=new double[n+2];
		p[0]=0;
		p[n+1]=l;
		for (int i=1; i<=n; i++)
			cin >> p[i];
		double* time=new double[n+2];
		for (int i=0; i<n+2; i++)
			time[i]=0;
		for (int i=1; i<n+2; i++)
		{
			double min=mintime(p[i],vt1,vt2,c);
			for (int j=1; j<i; j++)
			{
				if (min > time[j]+t+mintime(p[i]-p[j],vt1,vt2,c))
					min=time[j]+t+mintime(p[i]-p[j],vt1,vt2,c);
			}
			if (time[i]==0 || time[i]>min)
				time[i]=min;
		}
		if (l/vr>time[n+1])
			cout << "What a pity rabbit!" << endl;
		else
			cout << "Good job,rabbit!" << endl;
	}
	return 0;
}