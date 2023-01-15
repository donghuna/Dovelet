#include <iostream>
using namespace std;

int main(void){

	int arr[20] = {0};
	int m1, m2;
	m1 = m2 = 0;

	for(int i=0; i<20; i++)
		cin >> arr[i];

	for(int i=0; i<20; i++){
		if(arr[i] >= m1){
			m2 = m1;
			m1 = arr[i];
		}else if(arr[i] > m2){
			m2 = arr[i];
		}
	}
	cout << m1 + m2 << endl << m1 << " " << m2;



	return 0;
}