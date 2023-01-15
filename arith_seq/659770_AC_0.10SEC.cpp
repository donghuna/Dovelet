#include <iostream>
using namespace std;
int abs(int a){
	if(a<0)
		return a*-1;
	else
		return a;
}
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
		else if(abs(i)>abs(an)){
			cout << "X";
			break;
		}
	}
	return 0;
}