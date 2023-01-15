#include <iostream>
#include <string>
using namespace std;

int main(void){

	string A,B;
	int sum1=1, sum2=1;
	int i;
	cin >> A >> B;

	for(i=0; i<A.size(); i++)		sum1*=A[i]-64;
	for(i=0; i<B.size(); i++)		sum2*=B[i]-64;

	if((sum1 %= 47) ==	(sum2 %= 47))	cout << "GO";
	else	cout << "STAY";

	return 0;
}