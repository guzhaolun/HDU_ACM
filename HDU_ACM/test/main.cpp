#include <iostream>
#include <cmath>
using namespace std;

class E {
public:
	int start;
	int end;
	int l;
};

bool larger(int ma1, int mi1, int ma2, int mi2)
{
	if (ma1>ma2 && mi1>mi2)
		return true;
	if (ma1<ma2 && mi1<mi2)
		return false;
}

int main() {
	int n, m;
	while (cin >> n >> m) {
		E* es = new E[m];
		for (int i = 0; i < m; i++) {
			cin >> es[i].start >> es[i].end;
			es[i].l = pow(2.0, i);
		}
		int* ls = new int[n];
		for (int i = 0; i < n; i++)
			ls[i] = -1;
		ls[0] = 0;
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				for (int k = 0; k < m; k++) {
					if (es[k].start == j && es[k].end == i) {
						if (ls[i] == -1 && ls[j] != -1)
							ls[i] = es[k].l + ls[j];
						else if (ls[i] > pow(2.0, k) + ls[j])
							ls[i] = es[k].l + ls[j];
					}
				}
			}
		}
		for (int i = 1; i < n; i++)
			cout << ls[i] % 100000 << endl;
	}
	return 0;
}