#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int sum[7] = {0};
	int day=13;
	int Y;
	cin >> Y;

	for(i=1900; i<1900+Y; i++){
		for(j=1; j<=12; j++){
			sum[day%7]++;
			//cout << day%7 << endl;
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)	day+=31;
			else if(j==4||j==6||j==9||j==11)	day+=30;
			else if(j==2){
				if( (i%4==0 && i%100!=0) || (i%400==0) )	day+=29;
				else	day+=28;
			}				
		}
	}
	cout << sum[6] << " ";
	for(i=0; i<6; i++)
		cout << sum[i] << " ";

	return 0;
}