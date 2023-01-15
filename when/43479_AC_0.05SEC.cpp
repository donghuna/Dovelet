#include <iostream>
using namespace std;

int main(void){

	while(true){		
		int N, Q, When;

		cin >> N >> Q;		// NQ input
		if(N==0 && Q==0)	// N, Q가 0입력되면 종료
			break;
		
		int date[100] ={0};
		int max = 0;
		
		//각각의 사용자의 스케쥴입력받음
		for(int i=0; i<N; i++){	// 한명의 사용자씩
			int M;
			cin >> M;
			for(int j=0; j<M; j++){	// 가능한 날수만큼
				int temp;
				cin >> temp;
				date[temp-1]++;
			}
		}

		//가장많은 참가일 검색
		for(int i=0; i<100; i++){
			if(date[i] > max){
				When = i;
				max = date[i];
			}
		}

		//Q보다 작으면 0 크면 출력
		if(Q > max)
			cout << 0 << endl;
		else
			cout << When+1 << endl;
	}
	return 0;
}