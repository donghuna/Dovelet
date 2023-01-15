#include <iostream>
using namespace std;

int main(void){
	
	int a, b, c, i;
	int D[10] = {0};
	cin >> a >> b;
	if(a>b)	swap(a,b);

	for(i=a; i<=b; i++){
		c=i;
		while(c!=0){
			D[c%10]++;
			c/=10;
		}
	}
	for(i=0; i<10; i++)
		cout << D[i] << " ";



	return 0;
}