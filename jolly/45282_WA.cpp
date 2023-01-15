#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int N;
	cin >> N;

	int sum=0, min=INT_MAX, max=0, before=NULL;
	int temp;
	for(int i=0; i<N; i++){
		cin >> temp;
		if(min > temp)	min = temp;
		if(max < temp)	max = temp;
		if(before == NULL)
			before = temp;
		else{
			sum += abs(before - temp);
			before = temp;
		}
	}
	
	max -= min-1;
	min = 1;
	int oe= max-min;
	int compare;
	if(oe%2 == 0)
		compare = ((max-1)+min) * (oe/2);
	else
		compare = (((max-1)+min) * (oe/2)) + ((max-1)/2)+1;

	if(compare == sum)
		cout << "Jolly";
	else
		cout << "Not jolly";


	return 0;
}