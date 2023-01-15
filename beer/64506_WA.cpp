#include <iostream>
using namespace std;

int main(void){

	int i, j, h;
	int a,b,c;
	int N, Min=INT_MAX;
	cin >> N;

	for(i=1; i*i<=N; i++){
		for(j=i; j*j<=N/i; j++){ 
			if( (N/i)%j == 0 )		//부피가 딱 나오면.
			{
				h = (N/i)/j;
				if(Min > 2*(i*j)+2*(j*h)+2*(i*h)){
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