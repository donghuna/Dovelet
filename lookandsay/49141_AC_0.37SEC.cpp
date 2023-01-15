#include <iostream>
#include <string>
using namespace std;

int main(void){

	string N;
	cin >> N;

	int data = N[0]-48;
	int count=1;

	for(int i=1; i<N.length(); i++){
		if(N[i]-48 != data){
			cout << count << data;
			data = N[i]-48;
			count = 1;
		}else
			count++;
		if(i+1==N.length())
			cout << count << data;
	}
	return 0;
}