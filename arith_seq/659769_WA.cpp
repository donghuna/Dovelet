#include <iostream>
using namespace std;
int main(void){

	int a, d, an;
	int cnt = 0;
	cin >> a >> d >> an;

	for(int i=a;;i+=d){
		cnt++;
		if(i==an){
			cout << cnt;
			break;
		}
		else if(i>an){
			cout << "X";
			break;
		}
	}
	return 0;
}