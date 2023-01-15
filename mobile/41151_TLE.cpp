#include <iostream>
using namespace std;

int tree[1024][1024];
int max_x, max_y;

int read(int x,int y);
void update(int x , int y , int val);

int main(void){

	int order;
	int S;
	int X, Y, A;
	int L, B, R, T;
	int AL, A1, A2, A3;

	while(true){
		cin >> order >> S;
		if(order == 0)
			break;
	}
	max_x = max_y = S;

	while(true){
		cin >> order;
		if(order == 3)
			break;
		else if(order == 1){		//update
			cin >> X >> Y >> A;
			update(X, Y, A);
		}
		else if(order == 2){		//read
			cin >> L >> B >> R >> T;
			AL = read(R, T);
			A1 = read(L-1, B-1);
			A2 = read(L-1, T);
			A3 = read(R, B-1);

			cout << AL - (A2 - A1 + A3) << endl;
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


/*
#include <iostream>
using namespace std;

int tree[20];
int f[20];
#define MaxVal 16

int read(int idx);
void update(int idx ,int val);

int main(void){

	for(int i=0; i<10; i++){
		cin >> f[i];
		update(i+1, f[i]);
	}
	

	cout << endl;
	for(int i=0; i<10; i++){
		cout << f[i] << " ";
	}
	cout << endl;
	for(int i=0; i<10; i++){
		cout << read(i+1) << " ";
	}
	cout << endl;


	return 0;
}

int read(int idx)
{
	int sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(int idx ,int val)
{
	while (idx <= MaxVal){
		tree[idx] += val;
		idx += (idx & -idx);
	}
}
*/


/*
#include <iostream>
using namespace std;

int main(void){

	int S;
	int order;
	int i, j;
	int x, y, A;
	int L,B,R,T;

	while(true){
		// 0. order
		cin >> order >> S;
		if(order == 0)
			break;
	}

	//data 동적할당
	int **data = new int*[S];
	for(i=0; i<S; i++){
		data[i] = new int[S];
		for(j=0; j<S; j++){
			data[i][j] = 0;
		}
	}

	while(true){
		cin >> order;
		if(order == 1){
			cin >> x >> y >> A;
			data[y][x] += A;
		}else if(order == 2){
			cin >> L >> B >> R >> T;
			int sum = 0;
			for(i=B; i<=T; i++)
				for(j=L; j<=R; j++)
					sum += data[i][j];
			cout << sum << endl;
		}else if(order == 3){
			break;
		}

	}
	return 0;
}
*/
