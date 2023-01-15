#include <iostream>
#include <string>
using namespace std;

int main(void){

	int i, j, k;
	int max = 1, index, cnt=0;
	string Original, S, com1, com2;
	char ch[20000];
	cin.getline(ch, 20000, EOF);
	Original = ch;
	
	for(i=0; i<Original.size(); i++){
		if(Original[i]>=(int)'a' &&  Original[i]<=(int)'z'){
			S.push_back(Original[i]);
		}
		else if(Original[i]>=(int)'A' &&  Original[i]<=(int)'Z'){
			S.push_back(Original[i]+32);
		}
	}

	for(i=0; i<S.size(); i++){
		for(j=max; j<=S.size()-i; j++){
			com1 = S.substr(i, j);
			for(k=0; k<com1.size(); k++){
				if(com1[k] != com1[com1.size()-k-1])	break;
			}
			if(k==com1.size()){
				max = k;
				index = i;
			}
		}
	}
	cout << max << endl;
	for(i=0; i<Original.size(); i++){
		if( (Original[i]>=(int)'a' && Original[i]<=(int)'z') || (Original[i]>=(int)'A' && Original[i]<=(int)'Z') ){
			cnt++;
		}
		if(cnt > index){
			cout << Original[i];
			if(cnt == index+max)	break;
		}
	}
	return 0;
}