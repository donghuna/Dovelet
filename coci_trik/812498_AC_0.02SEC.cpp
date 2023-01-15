#include <iostream>
#include <algorithm>
#include <cassert>
#include <deque>
#include <list>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(void)
{
	int index = 1;
	string S;
	cin >> S;
	for(string::iterator itr = S.begin(); itr != S.end(); itr++){
		int tmp;
		if(*itr == 'A'){
			if(index == 1)
				index = 2;
			else if(index == 2)
				index = 1;
		}
		if(*itr == 'B'){
			if(index == 2)
				index = 3;
			else if(index == 3)
				index = 2;
		}
		if(*itr == 'C'){
			if(index == 3)
				index = 1;
			else if(index == 1)
				index = 3;
		}			
	}
	cout << index;
	
	
	return 0;
}
