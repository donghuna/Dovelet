#include <iostream>
using namespace std;

int main(void){

	int max = 10, min=0;
	int N, answer=0;
	char C[10];

	while(true){
		cin >> N;
		gets(C);
		gets(C);
		if(strcmp(C,"too high") == 0){
			if(min > N)		answer = 1;
			if(max > N)		max = N;
		}
		else if(strcmp(C,"too low") == 0){
			if(max < N)		answer = 1;
			if(min < N)		min = N;
		}
		else if(strcmp(C,"right on") == 0){
			if(min < N && N < max)	break;
			else	answer = 1;
			break;
		}
	}
	if(answer==1)	cout << "Stan is dishonest";
	else				cout << "Stan may be honest";


	return 0;
}