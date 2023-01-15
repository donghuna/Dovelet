#include <iostream>
using namespace std;

int main(void){

	int a,b,c,d;

	cin >> a >> b >> c >> d;
	if(b==d)
		cout << "many";
	else if(a==c)
		cout << "none";
	else
		printf("%.3lf", ((double)(d-b)*1000/(a-c))/1000 );


	return 0;
}