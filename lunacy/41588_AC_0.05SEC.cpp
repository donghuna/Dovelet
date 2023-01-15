#include <iostream>
using namespace std;

int main(void){

	float W;

	while(true){
		cin >> W;
		if(W<0)
			break;
		cout << "Objects weighing ";
		printf("%0.2f", W);
		cout << " on Earth will weigh ";
		printf("%0.2f", W*0.167);
		cout << " on the moon." << endl;
	}
	return 0;
}