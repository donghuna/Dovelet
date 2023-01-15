#include <iostream>
using namespace std;

int main(void){

	int x1, y1, x2, y2;
	int xx1, yy1, xx2, yy2;
	int temp;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> xx1 >> yy1 >> xx2 >> yy2;

	if( x1 > x2 ){
		temp = x1;
		x1 = x2;
		x2 = temp;
		temp = y1;
		y1 = y2;
		y2 = temp;
	}
	if( xx1 > xx2 ){
		temp = xx1;
		xx1 = xx2;
		xx2 = temp;
		temp = yy1;
		yy1 = yy2;
		yy2 = temp;
	}	

	if( (xx1<=x1 && x2<=xx2) || (x1<=xx1 && xx2<=x2) || (xx1<=x1 && (xx2<=x2 && x1<xx2) ) || ( (xx1>=x1 && xx1<x2) && xx2>=x2) ){
		if( y1 > y2 ){
			temp = y1;
			y1 = y2;
			y2 = temp;
		}
		if( yy1 > yy2 ){
			temp = yy1;
			yy1 = yy2;
			yy2 = temp;
		}
		if( (yy1<=y1 && y2<=yy2) || (y1<=yy1 && yy2<=y2) || (yy1<=y1 && (yy2<=y2 && y1<yy2) ) || ( (yy1>=y1 && yy1<y2) && yy2>=y2) ){
			cout << "Overlap" << endl;
			return 0;
		}
	}

	cout << "No overlap" << endl;

	return 0;
}