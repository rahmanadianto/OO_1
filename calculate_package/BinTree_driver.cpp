/* Author : Rahman Adianto */

#include "BinTree.h"
#include <iostream>

using namespace std;

int main(){
	BinTree myTree1("Rahman", NULL, NULL, NULL);
	myTree1.addLeft("Husni");
	myTree1.addRight("Gazandi");
	BinTree myTree2("A", NULL, NULL, NULL);
	myTree2.addLeft("B");
	myTree2.addRight("C");
	BinTree myTree3("D", NULL, NULL, NULL);
	myTree3.addLeft("E");
	myTree3.addRight("F");
	BinTree myTree4("Abjad", NULL, &myTree2, &myTree3);

	string foo = myTree1.getPreOrder();
	cout << foo << endl;
	foo = myTree1.getInOrder();
	cout << foo << endl;
	foo = myTree1.getPostOrder();
	cout << foo << endl << endl;

	foo = myTree4.getPreOrder();
	cout << foo << endl;
	foo = myTree4.getInOrder();
	cout << foo << endl;
	foo = myTree4.getPostOrder();
	cout << foo << endl << endl;
/*
	BinTree myTree5(myTree4);
	foo = myTree5.getPreOrder();
	cout << foo << endl;
	foo = myTree5.getInOrder();
	cout << foo << endl;
	foo = myTree5.getPostOrder();
	cout << foo << endl;
*/
	return 0;
}