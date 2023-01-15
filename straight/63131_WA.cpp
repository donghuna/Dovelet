#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double G;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	G = (d-b)/(c-a);
	cin >> c >> d;
	if(G==(d-b)/(c-a))	cout << "yes";
	else	cout << "no";
	
	
	return 0;
}