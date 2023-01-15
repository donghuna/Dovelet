#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){

	int i, j, k;
	int N;
	cin >> N;
	int** nD = new int*[N];
	vector<string> Name;
	string temp;
	for(i=0; i<N; i++){
		nD[i] = new int[2];
		cin >> temp;
		Name.push_back(temp);
		nD[i][1] = 0;
		nD[i][2] = 0;
	}

	for(i=0; i<N; i++){
		string comp, H1;
		int peoN;		// 돈나눠줄 사람수
		int money;		// 나눠줄돈들
		
		cin >> comp;	//이름입력받음
		for(j=0; j<N; j++)
			if( Name[j] == comp)	break;
		cin >> nD[j][0];	//돈입력받고
		cin >> peoN;		//줄사람들 수입력받고
		if(peoN == 0)	continue;
		money = nD[j][0] / peoN;
		nD[j][1] += nD[j][0] % peoN;

		while(peoN--){
			cin >> H1;
			for(k=0; k<N; k++)
				if( Name[k] == H1)	break;
			nD[k][1] += money;
		}
	}

	for(i=0; i<N; i++)
		cout << Name[i] << " " << nD[i][1] - nD[i][0] << endl;

	return 0;
}