#include <iostream>
using namespace std;

void func(int f)
{
	for(int j=0; j<f-2; j++)
		cout << " ";
}

int main(void){

	int n, f;
	
	cin >> n;

	f = 1;
	while(true){
		if(f==1)
			cout << " **";
		else if(n>0){
			func(f);
			cout << "*  *";
		}
		else{
			if(n==0){
				func(f);
				cout << "*  **  *" << endl;;
				func(f+1);
				cout << "*    *" << endl;
				func(f+2);
				cout << "*  *" << endl;
				func(f+3);
				cout << "**";
				break;
			}else{
				func(f);
				cout << "*  *  *" << endl;
				func(f+1);
				cout << "*   *" << endl;
				func(f+2);
				cout << "* *" << endl;
				func(f+3);
				cout << "*";
				break;
			}		
		}

		for(int i=0; i<n; i++)
			cout << " ";

		if(f==1)
			cout << "**" << endl;
		else
			cout << "*  *" << endl;
		
		n-=2;
		f++;
	}
	return 0;
}
