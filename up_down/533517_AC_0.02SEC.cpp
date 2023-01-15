#include <iostream>
using namespace std;

int main(void){

	int a,b,c,d,s;
	int N,B;

	cin >> a >> b >> c >> d >> s;
	
	if( s%(a+b) == 0 )
		N = a*(s/(a+b)) - b*(s/(a+b));
	else if( s%(a+b) > a )
		N = (a*(s/(a+b))) - (b*(s/(a+b))) + (a) - ((s%(a+b))-a);
	else
		N = a*(s/(a+b)) - b*(s/(a+b)) + s%(a+b);

	if( s%(c+d) == 0 )
		B = c*(s/(c+d)) - c*(s/(c+d));
	else if( s%(c+d) > c )
		B = (c*(s/(c+d))) - (d*(s/(c+d))) + (c) - ((s%(c+d))-c);
	else
		B = c*(s/(c+d)) - d*(s/(c+d)) + s%(c+d);

	//cout << N << " " << B << endl;
	
	if(N==B)
		cout << "Tied";
	else if(N>B)
		cout << "Nikky";
	else
		cout << "Byron";



	return 0;
}