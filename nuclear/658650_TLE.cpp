#include <iostream>
using namespace std;
#include <cmath>
int main(void){
	
	int i;
	int a, b;
	int sum = 0;

	cin >> a >> b;
	for(i=0;;i++){
		if(pow((double)a,i) == b)
			break;
		sum += pow((double)a,i);
	}
	cout << sum*100;
	

	return 0;
}