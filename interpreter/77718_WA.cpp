#include <iostream>
using namespace std;

int main(void){

	int REG[10] = {0}, RAM[1000] = {0};
	int cnt=0, Ramc=0;
	int Order=0, pA=0, pB=0;

	while(~scanf("%d", &RAM[cnt++])){	}
	cnt = 0;

	while(true){
		Order = RAM[Ramc]/100;
		pA = (RAM[Ramc]-(Order*100))/10;
		pB = RAM[Ramc] - ((Order*100)+(pA*10));
			
		switch(Order){
			case 1:
				cout << cnt+1;
				return 0;
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
				REG[pA] = RAM[pB];
				break;
			case 9:
				RAM[pB] = REG[pA];
				break;
			case 0:
				if(REG[pB]!=0){
					Ramc = REG[pA]-1;
				}
		}
		//RAM[Ramc++] = REG[pA];
		Ramc++;
		cnt++;
	}

}