#include <iostream>
#include <algorithm>
#include <cassert>
#include <deque>
#include <list>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int main(void)
{
	string S;
	cin >> S;

	string tmp = "11";
	while(true)
	{
		string output;
		output = tmp[0];

		if(S == tmp)
		{
			cout << "yes" << endl;
			break;
		}
		if( tmp.length() > 300 )
		{
			cout << "no" << endl;
			break;
		}
		for(int i=1; i<tmp.length(); i++)
		{
			output += tmp.at(i) + (tmp.at(i-1) - '0');
		}
		output += tmp[tmp.length()-1];
		tmp = output;
	}
	
	return 0;
}