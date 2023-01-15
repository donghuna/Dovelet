#include <iostream>
using namespace std;

int main(void){

	float fill[3][3] = {{4.5, 150, 200}, {6.0, 300, 500}, {5.0, 200, 300}};
	char *output[3] = {"Wide Receiver", "Lineman", "Quarterback"};
	float s, w, p;

	cin >> s >> w >> p;
	int compare=0;

	for(int i=0; i<3; i++){
		if(fill[i][0] >= s)
			if(fill[i][1] <= w)
				if(fill[i][2] <= p){
					if(compare == 1)
						cout << " ";
					cout << output[i];
					compare = 1;
				}
	}
	if(compare == 0)
		cout << "No positions" << endl;
	cout << endl;

	return 0;
}