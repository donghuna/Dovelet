#include <iostream>
using namespace std;

int main(void){

	int i, j, h;
	int a,b,c;
	int N, Min=INT_MAX;
	cin >> N;

	for(i=1; i*i<=N; i++){
		if(i==409)
			i=409;
		for(j=i; j*j<=N/i; j++){ 
			if(j==1223)
				j=1223;
			if( N%i==0 &&  (N/i)%j == 0)		//부피가 딱 나오면.
			{
				h = (N/i)/j;
				if(Min > 2*(i*j)+2*(j*h)+2*(i*h)){
					if(2*(i*j)+2*(j*h)+2*(i*h)<0)	continue;
					Min = 2*(i*j)+2*(j*h)+2*(i*h);
					a = i;
					b = j;
					c = h;
				}
			}
		}
	}
	cout << a << " " << b << " " << c;


	return 0;
}