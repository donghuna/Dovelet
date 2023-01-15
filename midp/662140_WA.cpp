#include <iostream>
using namespace std;

int main(void){

	int N;
	int cnt;
	int x1, y1, x2, y2;

	cin >> N;
	cnt = 0;
	cin >> x1 >> y1;
	for(int i=1; i<N; i++){
		cin >> x2 >> y2;
		if((x1+x2)%2 == 0 && (y1+y2)%2 == 0)
			cnt++;
		x1 = x2;
		y1 = y2;
	}
	cout << cnt;



	return 0;
}