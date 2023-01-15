#include <iostream>
#include <algorithm>
#include <cassert>
#include <deque>
#include <list>
#include <string>
#include <vector>
#include <map>
using namespace std;

int recursive(int m, int n);

int main(void)
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if( y1 < y2 ){
		x2 -= x1;
		y2 -= y1;
	}
	else{
		x2 = x1 - x2;
		y2 = y1 - y2;
	}

	int tmp1, tmp2;
	if(x2 > y2){	tmp1 = x2;	tmp2 = y2;	}
	else{			tmp1 = y2;	tmp2 = x2;	}

	int cnt = 0;
	for(int i=1;; i++)
	{
		int output = recursive( tmp1, tmp2 );
		if(output == 1)
			break;
		tmp1 /= output;
		tmp2 /= output;
		cnt += i;
	}
	cout << cnt + 2;
	
	return 0;
}

int recursive(int m, int n)
{
	int t;
	t = m;
	m = n;
	n = t % n;
	if(n==0)	return m;
	else recursive(m, n);
}