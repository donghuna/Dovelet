#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(int a, int b){
	return a>b;
}

int main(void){

	int i, classn, HN;
	int N;
	cin >> N;

	vector<int> V1;
	vector<int> V2;
	vector<int> V3;
	vector<int> V4;

	for(i=0; i<N; i++){
		cin >> classn >> HN;
		switch (classn){
			case 1:
				V1.push_back(HN);				
				break;
			case 2:
				V2.push_back(HN);				
				break;
			case 3:
				V3.push_back(HN);				
				break;
			case 4:
				V4.push_back(HN);				
				break;
		}
	}
	sort(V1.begin(), V1.end());
	sort(V3.begin(), V3.end());
	sort(V2.begin(), V2.end(), cmp);
	sort(V4.begin(), V4.end(), cmp);

	vector<int>::iterator mi;
	mi=V1.begin();
	while(mi != V1.end()){
		cout << "1 " << *mi << endl;
		mi++;
	}
	mi=V4.begin();
	while(mi != V4.end()){
		cout << "4 " << *mi << endl;
		mi++;
	}
	mi=V2.begin();
	while(mi != V2.end()){
		cout << "2 " << *mi << endl;
		mi++;
	}
	mi=V3.begin();
	while(mi != V3.end()){
		cout << "3 " << *mi << endl;
		mi++;
	}
	


	return 0;
}