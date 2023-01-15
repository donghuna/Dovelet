#include <iostream>
using namespace std;
void f(int N, int s, int e, int t);
int main(void){

	int N;
	cin >> N;
	f(N, 1, 3, 2);

	return 0;
}

void f(int N, int s, int e, int t){
	if(N == 1){
		cout << s << " -> " << e << endl;
		return;
	}else{
		f(N-1, s, t, e);
		cout << s << " -> " << e << endl;
		f(N-1, t, e, s);
	}
}