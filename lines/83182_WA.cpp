#include <iostream>
using namespace std;

typedef struct MyPoint{
	int x;
	int y;
}MyPoint;

void func(int C, int N, MyPoint mp[], int m[], int* cnt, int* index);

int main(void){

	int i;
	int N;
	int cnt=0, index=0;
	cin >> N;
	
	int *m = new int[((N-1)*N)/2];
	MyPoint *mp = new MyPoint[N];

	for(i=0; i<N; i++)
		cin >> mp[i].x >> mp[i].y;

	for(i=0; i<N-1; i++)
		func(i, N, mp, m, &cnt, &index);

	cout << cnt << endl;

	return 0;
}

void func(int C, int N, MyPoint mp[], int m[], int* cnt, int* index){
	int i, j;
	int o;
	for(j=C+1; j<N; j++){
		if(mp[C].x - mp[j].x == 0)		//x가 0이면 -1
			o = -1;
		else{
			o = (mp[C].y - mp[j].y)/(mp[C].x - mp[j].x);	//기울기
			for(i=0; i< *index; i++){		//기울기가 동일한게 있는지 확인
				if(m[i] == o)	break;
			}
			if(i== *index){		//없으면 갯수추가, index증가, 기울기 추가.
				(*cnt)++;
				(*index)++;
				m[*index] = o;
			}
		}
	}
}