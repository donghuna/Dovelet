#include <iostream>
using namespace std;

int main(void){

	int N, cul, count=0;
	cin >> N;

	for(int i=1; i<N; i++){
		for(int j=i+1; j<N; j++){
			if( (j-i)%2 == 0 )		// odd
				cul = (i+j) * ((j-i)/2) + ((j+i)/2);
			else						//even
				cul = (i+j) * ((j-i+1)/2);				
			
			if(cul == N)
				count++;
			else if(cul > N)
				break;
		}
	}
	cout << count+1;
	return 0;
}