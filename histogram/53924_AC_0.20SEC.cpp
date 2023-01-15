#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int Alpha[26] = {0};
	char c;
	
	for(i=0; i<4; i++){
		while( (c = getchar())  != '\n' ){
			if( c >= 'A' && c <= 'Z')
				Alpha[c-65]++;			
		}
	}

	int max = 0;
	for(i=0; i<26; i++)
		if(Alpha[i] > max)	max = Alpha[i];

	for(i=max; i>0; i--){
		for(j=0; j<26; j++){
			if(Alpha[j] >=i)	cout << "*";
			else					cout << " ";
			if(j!=25)	cout << " ";
		}
		cout << endl;
	}
	cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
	
	return 0;
}