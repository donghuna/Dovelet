#include <iostream>
using namespace std;

int main(void){

	int N, t, p, z;
	cin >> N >> t >> p >> z;

	if(t<=p && t<=z)
		cout << t << " ";
	else if(p<=t && p<=z)
		cout << p << " ";
	else
		cout << z << " ";

	int a = (p - (N - t));
	if(a<0)
		cout << 0;
	else if( z-a <0 )
		cout << 0;
	else
		cout << a;

	return 0;
}