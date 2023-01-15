#include <iostream>
using namespace std;
#include <math.h>

#define M_PI       3.14159265358979323846

int main(void){

	float a, b;
	cin >> a >> b;
	printf("%0.3lf", M_PI*a+M_PI*b+ sqrt(a*a+a*a)+ sqrt(b*b+b*b));

	return 0;
}