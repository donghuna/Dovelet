#include <iostream>
using namespace std;

int main(void){

	for(int i=1; i<=9; i++){
		for(int ii=1; ii<=9; ii++){
			for(int iii=1; iii<=9; iii++){
				if( (i*100+ii*10+iii) == (i*i*i + ii*ii*ii + iii*iii*iii) )
					cout << (i*100+ii*10+iii) << endl;
			}
		}
	}
	return 0;
}