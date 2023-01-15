#include <iostream>
#include <string>
using namespace std;

void func(int o, int x, int m, string data);
int cnt;

int main(void){
	int m;
	string data;
	cin >> m;
	cnt = 0;
	func(0, 0, m, data);
	cout << "total " << cnt << " case(s)";
	return 0;
}

void func(int o, int x, int m, string data){
	if(x>=m)	return;
	if(o==m){
		cout << data << endl;
		cnt++;
		return;
	}
	func(o+1, x, m, data + 'o');
	func(o, x+1, m, data + 'x');
}