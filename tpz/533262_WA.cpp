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

	int x;
	if( p-(N-t) < 0 )
		cout << 0;
	else if( z-(N-p) < 0 )
		cout << 0;
	else
		cout << N-(z-(N-p));
		


	return 0;
}