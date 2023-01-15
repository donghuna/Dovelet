#include <iostream>
using namespace std;

int abs(int a);

int main(void){

	int N;
	int y, x;

	cin >> N;
	
	for(y=10; y>=-10; y--){
		//if(abs(y)>N)	continue;

		for(x=N; x<=59+N; x++){
			if( (x%(N*2))-N == y || (x%(N*2)==0 && abs(y)<=N))
				cout << "*";
			else
				cout << " ";
		}
		printf("|%3dV\n", y);
	}


	return 0;
}

int abs(int a){
	if(a<0)
		return a*(-1);
	return a;
}
