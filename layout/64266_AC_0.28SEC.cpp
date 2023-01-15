#include <iostream>
using namespace std;

int main(void){

	int w, h, maxw, maxh, a, b;
	int S;
	cin >> S;
	maxw = maxh = w = h = 0;
	
	while(true){
		cin >> a >> b;
		if(a==-1)	break;
		if(a+w <=S){
			w+=a;
			if(w > maxw)	maxw=w;
			if(h+b > maxh)	maxh = h+b;
		}else{
			h=maxh;
			maxh = h+b;
			w = a;
		}
	}
	cout << maxw << " x " << maxh;
	return 0;
}