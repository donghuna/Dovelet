#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct tank{
	float value;
	int son;
	int mom;
}tank;

int cmp(tank a, tank b){
	return a.value > b.value;
}

bool Func(int a, int b){
	for(int i=2; i<=a; i++){
		if(a%i==0 && b%i==0)	return false;
	}
	return true;
}

int main(void){

	int i, j;
	int N;
	cin >> N;
	vector<tank> V;
	// insert data
	for(i=1; i<=N; i++){		// mom
		for(j=1; j<=i; j++){	// son
			if(j!=1 && Func(j, i)==false)	continue;
			tank T;
			T.mom = i;
			T.son = j;
			T.value = i/(float)j;
			V.push_back(T);
		}
	}
	// sort
	sort(V.begin(), V.end(), cmp);

	// print
	cout << "0/1" << endl;		// 0 제외
	vector<tank>::iterator mi;
	mi = V.begin();
	while(mi!=V.end()){
		cout << mi->son << "/" << mi->mom << endl;
		mi++;
	}
	return 0;
}