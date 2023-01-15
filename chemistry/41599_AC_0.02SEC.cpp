#include <iostream>
using namespace std;

int main(void){

	float a,b;
	cin >> a;
	while(true){
		cin >> b;
		if(b == 999){
			cout << "End of Output";
			break;
		}
		printf("%0.2f\n", b-a);
		a = b;
	}
	return 0;
}