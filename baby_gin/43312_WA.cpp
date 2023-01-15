#include <iostream>
using namespace std;

int main(void){

	int data[10] = {0};
	int temp;
	int baby_gin = 0;

	for(int i=0; i<6; i++){
		cin >> temp;
		data[temp]++;
		if(data[temp] >= 3){
			data[temp] = 0;
			baby_gin++;
		}
	}

	int count = 0;
	for(int j=0; j<2; j++){
		for(int i=0; i<10; i++){
			if(data[i] > 0){
				count ++;
				if(count >= 3){
					baby_gin++;
					data[i]--;
					data[i-1]--;
					data[i-2]--;
				}
			}else
				count = 0;
		}
	}
	if(baby_gin == 2)
		cout << "gin";
	else
		cout << "lose";
	return 0;
}