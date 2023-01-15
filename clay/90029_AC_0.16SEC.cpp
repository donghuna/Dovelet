#include <iostream>
#include <string>
using namespace std;

typedef struct student{
	string Name;
	int bulk;
}Stu;

int cmd(const void *a, const void *b){
	Stu A = *((Stu *)a);
	Stu B = *((Stu *)b);
	return A.bulk < B.bulk;
}

int main(void){

	int i;
	int N, tmp1, tmp2, tmp3;

	cin >> N;
	Stu* H = new Stu[N];
	for(i=0; i<N; i++){
		cin >> tmp1 >> tmp2 >> tmp3;
		H[i].bulk = tmp1 * tmp2 * tmp3;
		cin >> H[i].Name;
	}

	qsort(H, N, sizeof(H[0]), cmd);
	cout << H[0].Name << " took clay from " << H[N-1].Name << "." <<endl;

	return 0;
}