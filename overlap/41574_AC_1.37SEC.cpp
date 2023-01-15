#include <iostream>
using namespace std;

int main(void){

	int input[200][200] = {0};

	int a[2],b[2],temp;

	for(int i=0; i<2; i++){
		cin >> a[0] >> a[1] >> b[0] >> b[1];
		for(int j=0; j<2; j++){
			if(a[j] > b[j]){
				temp = a[j];
				a[j] = b[j];
				b[j] = temp;
			}
		}
		for(int ii=a[0]; ii<=b[0]; ii++)
			for(int jj=a[1]; jj<=b[1]; jj++){
				if(input[ii][jj] != 0){
					cout << "Overlap" << endl;
					return 0;
				}
				input[ii][jj] = 1;
			}
	}
	cout << "No overlap" << endl;
	return 0;
}

