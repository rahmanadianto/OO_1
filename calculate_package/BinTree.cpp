/* Author : Rahman Adianto */

#include "BinTree.h"

void BinTree::deepClone(BinTree* ancestor, BinTree* dest, BinTree* src){
	if (src->isLeaf()){
		dest = new BinTree(src->getInfo(), ancestor, NULL, NULL);
	}
	else{
		dest = new BinTree(src->getInfo(), ancestor, NULL, NULL);
		deepClone(dest, dest->getLeft(), src->getLeft());
		deepClone(dest, dest->getRight(), src->getRight());
	}
}

BinTree::BinTree(){
	info = "";
	ancestor = NULL;
	left = NULL;
	right = NULL;
}

BinTree::BinTree(std::string Info, BinTree* Ancestor, BinTree* Left, BinTree* Right){
	info = Info;
	ancestor = Ancestor;
	left = Left;
	right = Right;
}

BinTree::~BinTree(){
	cout << left << " " << right << endl;
}

BinTree::BinTree(const BinTree& BinT){
	info = BinT.info;
	ancestor = NULL;
	if (BinT.left && BinT.right){
		deepClone(this, left, BinT.left);
		deepClone(this, right, BinT.right);
	}
}

BinTree& BinTree::operator=(const BinTree& BinT){
	// ngapain??
	return *this;
}

std::string BinTree::getInfo(){
	return info;
}

BinTree* BinTree::getAncestor(){
	return ancestor;
}

BinTree* BinTree::getRight(){
	return right;
}

BinTree* BinTree::getLeft(){
	return left;
}

void BinTree::setInfo(std::string _Info){
	info = _Info;
}

void BinTree::setAncestor(BinTree* BinT){
	ancestor = BinT;
}

void BinTree::setLeft(BinTree* BinT){
	left = BinT;
}

void BinTree::setRight(BinTree* BinT){
	right = BinT;
}

bool BinTree::isLeaf(){
	return (left == NULL) && (right == NULL);
}
		
void BinTree::addLeft(std::string _Info){
	left = new BinTree(_Info, this, NULL, NULL);
}

void BinTree::addRight(std::string _Info){
	right = new BinTree(_Info, this, NULL, NULL);
}

std::string BinTree::getPreOrder(){
	if (isLeaf()){
		return info;
	}
	else{
		std::string temp1 = info;
		std::string temp2 = left->getPreOrder(); 
		std::string temp3 = right->getPreOrder(); 
		return temp1 + temp2 + temp3;
	}
}

std::string BinTree::getInOrder(){
	if (isLeaf()){
		return info;
	}
	else{
		std::string temp1 = left->getInOrder(); 
		std::string temp2 = info;
		std::string temp3 = right->getInOrder(); 
		return temp1 + temp2 + temp3;
	}
}

std::string BinTree::getPostOrder(){
	if (isLeaf()){
		return info;
	}
	else{
		std::string temp1 = left->getPostOrder(); 
		std::string temp2 = right->getPostOrder(); 
		std::string temp3 = info;
		return temp1 + temp2 + temp3;
	}
}
