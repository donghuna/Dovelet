#include <iostream>
using namespace std;

int main(void){

	int REG[10] = {0}, RAM[1001] = {0};
	int cnt=0, Ramc=0;
	int Order=0, pA=0, pB=0;
	int tmp;

	while(~scanf("%d", &RAM[cnt++])){ }
	cnt = 0;

	while(true){	
		cnt++;
		Order = RAM[Ramc]/100;
		pA = (RAM[Ramc]-(Order*100))/10;
		pB = RAM[Ramc] - ((Order*100)+(pA*10));

		if(RAM[Ramc++]==100){
			cout << cnt;
			return 0;
		}
		switch(Order){
			case 2:
				REG[pA] = pB;
				break;
			case 3:
				REG[pA] = (REG[pA]+pB)%1000;
				break;
			case 4:
				REG[pA] = (REG[pA]*pB)%1000;
				break;
			case 5:
				REG[pA] = REG[pB];
				break;
			case 6:
				REG[pA] = (REG[pA]+REG[pB])%1000;
				break;
			case 7:
				REG[pA] = (REG[pA]*REG[pB])%1000;
				break;
			case 8:
				REG[pA] = RAM[REG[pB]];
				break;
			case 9:
				RAM[REG[pB]] = REG[pA];
				break;
			case 0:
				if(REG[pB]!=0){
					Ramc = REG[pA];
				}
		}
	}
}