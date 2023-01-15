#include <iostream>
using namespace std;

int main(void){

	int a,max=0,index;
	
	for(int i=1; i<=7; i++){
		cin >> a;
		if(a > max){
			index = i;
			max = a;
		}
	}
	cout << index;
	return 0;
}