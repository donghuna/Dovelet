#include <iostream>
#include <string>
using namespace std;

typedef struct Node{
	Node* left;
	Node* right;
	int degree;
	int nodevalue;
}Node;

typedef struct Tree{
	Node* Top;
}Tree;

void InitNode(Node* N){
	N->left = NULL;
	N->right = NULL;
	N->degree = 0;
	N->nodevalue = 0;
}

void insert(Node* N);
int search(Node* N);
int search1(Node* N, int depth);

int main(void){

	Tree* T = new Tree;
	T->Top = new Node;
	InitNode(T->Top);

	int name;
	cin >> name;

	T->Top->nodevalue = name;
	insert(T->Top);

	cout << search(T->Top) << endl;		//degree 2인거 검색
	cout << search1(T->Top, 1) << endl;


	return 0;
}

int search1(Node* N, int depth){

	int output;
	int temp;
	
	if(N->left != NULL)
		output = search1(N->left, depth+1);
	else
		output = depth;
	
	if(N->right != NULL){
		temp = search1(N->right, depth+1);
		if(output < temp)
			output = temp;
	}

	return output;
}

int search(Node* N){

	int count = 0;
	if(N->degree == 2)
		count = 1;
	if(N->left != NULL)
		count += search(N->left);
	if(N->right != NULL)
		count += search(N->right);

	return count;
}

void insert(Node* N){

	int v;
	cin >> v;
	if(v > 0){
		Node* Temp = new Node;
		InitNode(Temp);
		Temp->nodevalue = v;
		N->degree++;
		N->left = Temp;
		insert(N->left);
	}
	cin >> v;
	if(v > 0){
		Node* Temp = new Node;
		InitNode(Temp);
		Temp->nodevalue = v;
		N->degree++;
		N->right = Temp;
		insert(N->right);
	}
}