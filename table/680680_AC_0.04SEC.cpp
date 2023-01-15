#include <iostream>
#include <cmath>
using namespace std;

int func(double a, int b);

int main(void){

	int N;
	int i, j, c;
	double L;

	cin >> N;
	
	L = pow((double)N, 10);
	for(c=1; L>=10; c++){
		L /= 10;
	}
	c++;

	for(i=0; i<=10; i++){
		for(int k=0; k<func((double)i, c); k++)
			printf(" ");
		(i!=0)?printf("%d", i):printf(" ");
	}
	printf("\n");
	for(i=2; i<=N; i++){
		for(int k=0; k<func(1.0, c); k++)
			printf(" ");
		printf("%d", i);

		for(j=1; j<=10; j++){
			for(int k=0; k<func(pow((double)i, j), c); k++)
				printf(" ");
			printf("%.0f", pow((double)i, j));
		}
		printf("\n");
	}


	return 0;
}

int func(double a, int b){
	int c;
	for(c=1; a>=10;c++){
		a /= 10;
	}
	return b-c;
}
