#include <iostream>
using namespace std;

int main(){

	int a, b, p, c, d, q;
	float x, y;

	scanf("%d%d%d%d%d%d",&a,&b,&p,&c,&d,&q);
	if(a-c!=0 && b-d!=0){
		cout << "not decided" << endl;
		return 0;
	}else if(a-c==0){
		y = (p-q)/(float)(b-d);
		x = (p - (b*y))/(float)a;
		printf("%0.2f\n%0.2f", x, y);
	}else if(b-d==0){
		x = (p-q)/(float)(a-c);
		y = (p - (a*x))/(float)b;
		printf("%0.2f\n%0.2f", x, y);
	}else{
		cout << "impossible" << endl;
	}



	return 0;
}