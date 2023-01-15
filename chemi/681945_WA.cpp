#include <iostream>
#include <string>
using namespace std;

int main(void){

	string S, S1;

	while( cin >> S ){
		if(!S1.empty()){
			cout << " ";
			S1 = "";
		}
		for(int i=0; i<S.length(); i++)
		{
			if(i!=0 && S[i] == 'p' && ((S[i+1] == 'i' && S[i-1] == 'i') ||
									(S[i+1] == 'e' && S[i-1] == 'e') ||
									(S[i+1] == 'o' && S[i-1] == 'o') ||
									(S[i+1] == 'u' && S[i-1] == 'u') ||
									(S[i+1] == 'a' && S[i-1] == 'a'))){
					i+=1;
					continue;
			}
			S1 += S[i];
		}

		cout << S1;
	}

	return 0;
}