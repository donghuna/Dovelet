#include <iostream>
using namespace std;

void func(int s, int e);
int sum = 0;

int main(void){

	int N;
	cin >> N;
	
	func(1, N);
	cout << sum << endl;

	return 0;
}

void func(int s, int e){
	
	if(e-s==2 || e-s==1){
		sum += s * (s+1);
	}else{

		if( (e-s)%2 == 0 ){
			func(s, e-((e-s)/2) );
			func(e-((e-s)/2)+1, e);
		}else{
			func(s, e-( (e-s+1)/2 ));
			func(s+( (e-s+1)/2 ), e);
		}

	}
}
