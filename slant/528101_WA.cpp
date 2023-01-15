#include <iostream>
using namespace std;

int main(void){

	int x1, x2, y1, y2;

	cin >> x1 >> y1;
	cin >> x2 >> y2;

	printf("%d %d", (x1==0)?(y2/x2):(y1/x1), (x1==0)?y2%x2:y1%x1);

	return 0;
}
