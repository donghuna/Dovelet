#include <iostream>
using namespace std;
int main(void){

	for(int i=1; i<=10000; i++){
		if((i*i)%10==i)
			cout << i << endl;		
	}

	return 0;
}