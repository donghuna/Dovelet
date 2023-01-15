#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int i, j, k, l;
	int N;
	int cnt=0;
	cin >> N;

	for(i=1; i*i<pow(2,15.0); i++)
	{
		if(i*i == N)
		{
			//cout << i << endl;
			cnt++;
		}
		else if(i*i > N)	break;
		for(j=i; i*i+j*j<pow(2,15.0); j++)
		{
			if(i*i + j*j == N)
			{
				//cout << i << " " << j << endl;
				cnt++;
			}
			else if(i*i + j*j > N)	break;
			for(k=j; i*i+j*j+k*k<pow(2,15.0); k++)
			{
				if(i*i + j*j + k*k == N){
					//cout << i << " " << j << " " << k << endl;
					cnt++;
				}
				else if(i*i + j*j + k*k > N)	break;
				for(l=k; i*i+j*j+k*k+l*l<pow(2,15.0); l++)
				{
					if(i*i + j*j + k*k + l*l == N){
						//cout << i << " " << j << " " << k << " " << l << endl;
						cnt++;
					}
					else if(i*i + j*j + k*k + l*l > N)	break;
				}
			}
		}
	}
	cout << cnt << endl;

	

	return 0;
}

