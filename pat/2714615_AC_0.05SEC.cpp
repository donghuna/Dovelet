#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int n, k; //4 2
void func(int index, int arr[], int pick)
{
	if (index == n )
	{
		if (pick == k)
		{
			for (int i = 0; i < n; i++)
				printf("%d", arr[i]);
			printf("\n");
		}
		return;
	}
	if(pick < k){
		arr[index] = 1;
		func(index + 1, arr, pick+1);
		
	}
		arr[index] = 0;
		func(index + 1, arr, pick);

}

int main(void) {
	int arr[30] = { 0 };
	n = 0;
	k = 0;
	scanf("%d %d", &n, &k);
	func(0, arr, 0);
	return 0;
}