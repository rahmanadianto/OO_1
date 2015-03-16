/* Author : Rahman Adianto */

#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

#include <string>

class BinTree {
	public :
		/* ctor, dtor, cctor, copy assignment */
		BinTree();
		BinTree(std::string, BinTree*, BinTree*, BinTree*);
		~BinTree();
		BinTree(const BinTree&);
		BinTree& operator=(const BinTree&);

		/* getter setter */
		std::string getInfo();
		BinTree* getAncestor();
		BinTree* getLeft();
		BinTree* getRight();
		void setInfo(std::string);
		void setAncestor(BinTree*);
		void setLeft(BinTree*);
		void setRight(BinTree*);

		/* other method */
		bool isLeaf();
		void addLeft(std::string);
		void addRight(std::string);
		std::string getPreOrder();
		std::string getInOrder();
		std::string getPostOrder();

	private :
		/* attribute */
		std::string info;
		BinTree* ancestor;
		BinTree* left;
		BinTree* right;

		/* recursive method */
		void deepClone(BinTree*, BinTree*, BinTree*);
};

#endif