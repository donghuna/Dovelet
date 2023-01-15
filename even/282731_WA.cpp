#include <iostream>
using namespace std;

int main(void){
	int A, B;
	int i, j;
	int output, cnt, nv, container, index;
	int Divisor[100];
	int NDivisor[100] = {0};
	//init
	cnt = nv = output = 0;
	index = 0;
	for(int ee=2; index<99; ee++, index++)
	{
		int eee;
		for(eee=2; eee<ee; eee++)
			if(ee%eee==0) break;
		if(eee==ee)
			Divisor[index] = ee;
	}
	//input
	cin >> A >> B;

	for(i=A; i<=B; i++)
	{
		index = 0;
		container = i;
		for(j=0; j<100; j++)
			NDivisor[j] = 0;
		while(true)
		{
			if(container == 1)	break;
			if(container % Divisor[index] == 0)
			{
				container /= Divisor[index];
				NDivisor[index]++;
			}
			else
				index++;
		}
		cnt = 1;
		for(j=0; j<100; j++)
		{
			if(NDivisor[j] == 0)	continue;
			cnt *= NDivisor[j]+1;
		}
		if(cnt%2==0){
			output++;
			//cout << i << " ";
		}
	}
	cout << output;
	return 0;
}