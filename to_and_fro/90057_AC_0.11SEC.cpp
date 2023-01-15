#include <iostream>
#include <string>
using namespace std;

int main(void){

	int i, j;
	int N;
	int begin, end, index;
	string S;
	
	cin >> N;
	cin >> S;
	
	begin = N;
	end = 1;
	for(i=0; i<N; i++){	//cols
		index = i;
		for(j=0; j<S.size()/N; j++){		//rows
			cout << S[index];
			
			if(j%2==0)
				index += begin*2-1;
			else
				index += end*2-1;
		}
		begin--;
		end++;
	}	
	return 0;
}