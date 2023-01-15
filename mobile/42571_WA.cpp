#include <iostream>
using namespace std;

int tree[1025][1025];
int max_x, max_y;

int read(int x,int y);
void update(int x , int y , int val);

int main(void){

	int order;
	int S;
	int X, Y, A;
	int L, B, R, T;
	int AL, A1, A2, A3;

	while(true){					// 0입력받으면 시작
		cin >> order >> S;
		if(order == 0)
			break;
	}
	max_x = max_y = S+1;		//한도치 설정

	while(true){
		cin >> order;		//명령어입력받음
		
		if(order == 3)		// 3, 프로그램 종료
			break;

		else if(order == 1){		//update
			cin >> X >> Y >> A;
			update(X+1, Y+1, A);
		}

		else if(order == 2){		//read
			cin >> L >> B >> R >> T;
			L++;
			B++;
			R++;
			T++;

			AL = read(R, T);
			
			if(L != 1 && T != 1)
				A2 = read(L-1,T);
			else
				A2 = 0;
						
			if(B != 1 && L != 1)
				A1 = read(L-1, B-1);
			else
				A1 = 0;
			
			if(L != 1 && B != 1)
				A3 = read(R, B-1);
			else
				A3 = 0;

			cout << AL - (A2 - A1 + A3) << endl;
			//cout << AL << endl;
		}
	}


	return 0;
}


int read(int x,int y)
{
   int sum;
   int y1;

   sum = 0;
   while (x > 0 ){
      y1 = y;
      while (y1 > 0 ){
         sum += tree[x][y1];
         y1 -= (y1 & -y1); 
      }
      x -= (x & -x); 
   }

   return sum;
}

void update(int x , int y , int val)
{
   int y1;

   while (x <= max_x){
      y1 = y;
      while (y1 <= max_y){
         tree[x][y1] += val;
         y1 += (y1 & -y1); 
      }
      x += (x & -x); 
   }
}