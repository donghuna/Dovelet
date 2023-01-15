#include <iostream>
using namespace std;
int func(int* A, int* B);
int main(void){

	int N;
	int A1, A2, B1, B2, C1, C2;
	cin >> N;
	cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;

	if(A1 > B2+C2 || B1 > A2+C2 || C1 > A2+B2){
		cout << 0 << endl;
		return 0;
	}else{
		cout << 1 << endl;
		cout << func(&A1, &B2) << " " << func(&A1, &C2) << endl;
		cout << func(&B1, &A2) << " " << func(&B1, &C2) << endl;
		cout << func(&C1, &A2) << " " << func(&C1, &B2) << endl;		
	}

	return 0;
}

int func(int* A, int* B){
	int O;
	if(*A >= *B){
		O = *B;
		*A-=*B;
		*B = 0;
	}else{
		O = *A;
		*B-=*A;
		*A = 0;
	}
	return O;
}