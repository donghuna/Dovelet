#include <iostream>
using namespace std;

int main(void){

	int N, t, p, z;
	cin >> N >> t >> p >> z;

	int a = z - (p - (N - t));
	if(t<=p && t<=z)
		cout << t << " ";
	else if(p<=t && p<=z)
		cout << p << " ";
	else
		cout << z << " ";

	cout << a;

	return 0;
}