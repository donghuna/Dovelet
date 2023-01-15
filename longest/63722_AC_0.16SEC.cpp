#include <iostream>
#include <vector>
using namespace std;

void Func(vector<int> V[10000], int O[10000], int a, int g){
	int i;
	for(i=0; i<V[a].size(); i++){
		if(g>O[V[a][i]])	O[V[a][i]]=g;
		Func(V, O, V[a][i], g+1);
	}
}

int main(void){

	char ch;
	int i, max=0;
	vector<int> V[10000];
	int Output[10000] = {0};
	int s, e;	
	while(scanf("%d %d", &s, &e) == 2)
	{
		V[s].push_back(e);
	}

	for(i=1; i<10000; i++){
		if(V[i].empty()==false)
			Func(V, Output, i, 1);
	}
	for(i=1; i<10000; i++)
		Output[i]>max&&(max=Output[i]);
	cout << max;

	return 0;
}