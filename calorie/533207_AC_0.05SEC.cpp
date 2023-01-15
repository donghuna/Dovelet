#include <iostream>
using namespace std;

int main(void){

	int arr[17] = {0,461,431,420,0,130,160,118,0,100,57,70,0,167,266,75,0};
	int a,b,c,d;

	cin >> a >> b >> c >> d;
	cout << "Your total Calorie count is " << arr[a]+arr[b+4]+arr[c+8]+arr[d+12] << ".";

	return 0;
}