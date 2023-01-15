#include <iostream>
using namespace std;

struct p{
	int nsumbit;
	int elapse;
};

typedef struct t{
	char name[20];
	struct p prob[4];
	int solved;
	int penalty;
}Team;

int main(void){

	int MaxSolved = 0, index, MinPenalty=INT_MAX;
	int N;
	cin >> N;
	Team* T= new Team[N];

	for(int i=0; i<N; i++){
		cin >> T[i].name >> T[i].prob[0].nsumbit >> T[i].prob[0].elapse >> T[i].prob[1].nsumbit >> T[i].prob[1].elapse >>
			T[i].prob[2].nsumbit >> T[i].prob[2].elapse >> T[i].prob[3].nsumbit >> T[i].prob[3].elapse;
		
		T[i].penalty =	((T[i].prob[0].elapse == 0) ? 0 : (T[i].prob[0].nsumbit-1) * 20) +
							((T[i].prob[1].elapse == 0) ? 0 : (T[i].prob[1].nsumbit-1) * 20) +
							((T[i].prob[2].elapse == 0) ? 0 : (T[i].prob[2].nsumbit-1) * 20) +
							((T[i].prob[3].elapse == 0) ? 0 : (T[i].prob[3].nsumbit-1) * 20);

		T[i].penalty += T[i].prob[0].elapse + T[i].prob[1].elapse + T[i].prob[2].elapse + T[i].prob[3].elapse;
		T[i].solved = ((T[i].prob[0].elapse == 0) ? 0 : 1) + ((T[i].prob[1].elapse == 0) ? 0 : 1) +
			((T[i].prob[2].elapse == 0) ? 0 : 1) + ((T[i].prob[3].elapse == 0) ? 0 : 1);

		if(T[i].solved > MaxSolved){
			index = i;
			MinPenalty = T[i].penalty;
			MaxSolved = T[i].solved;
		}
		else if(T[i].solved == MaxSolved){
			if(T[i].penalty < MinPenalty){
				index = i;
				MinPenalty = T[i].penalty;
				MaxSolved = T[i].solved;
			}
		}
	}

	cout << T[index].name << " " << MaxSolved << " " << MinPenalty;


	return 0;
}