// Name: Nick Brouwer
// Assignment 4


#ifndef BST_H_
#define BST_H_
#include <iostream>
using namespace std;


template <class T>
struct node{
	T data;
	node<T>* left;
	node<T>* right;

	node() : data(), left(NULL), right(NULL) {}
};

template <class T>
class BinarySearchTree{

public:
	BinarySearchTree();
	int height(){return height(root);}
	void insert(T& item){insert(root, item);}
	T find(T& e){return find(root,e);}
	void deletenode(T& item){deletenode(root, item);}
	~BinarySearchTree(){destroy(root);}

private:
	node<T>* root;
	void destroy(node<T>*);
	int height(node<T>*);
	void insert(node<T>*&, T&);
	T find(node<T>*,T&);
	void deletenode(node<T>*&, T&);
};

// Main constructor
template <class T>
BinarySearchTree<T>::BinarySearchTree(){
	root = NULL;
}

// Returns the height of the tree
template <class T>
int BinarySearchTree<T>::height(node<T>* p){
	if(p!=NULL){
		return 1 + max(height(p->left), height(p->right));
	}
	return -1;
}

// Function to destroy the tree
template <class T>
void BinarySearchTree<T>::destroy(node<T>* p){
	if(p!= NULL){
		destroy(p->left);
		destroy(p->right);
		delete p;
		p= NULL;
	}
}

// Function to insert into the BST
template <class T>
void BinarySearchTree<T>::insert(node<T>*& p, T& item){
	if(p == NULL){
		p = new node<T>;
		p->data = item;
		p->left = p->right = NULL;
	}
	else if(item<p->data){
		insert(p->left, item);
	}else{
		insert(p->right, item);
	}
}

// Function to find an item in the BST
template <class T>
T BinarySearchTree<T>::find(node<T>* p, T& e){
	if (p == NULL)
		return e;
	if(p->data == e)
		return p->data;
	else if(p->data < e)
		return find(p->right, e);
	else if(p->data > e)
		return find(p->left, e);
}

// Function to delete a given node
template <class T>
void BinarySearchTree<T>::deletenode(node<T>*& p, T& item){
	//item not found, do nothing
	if(p == NULL)
		return;
	else if (item<p->data)	//item is on the left subtree
		deletenode(p->left, item);
	else if (item>p->data)	//item is on the right subtree
		deletenode(p->right, item);
    else{//item is equal to data,  it is found
		if(p->left!= NULL && p->right != NULL){// with two children
			int e=-1;
			p->data = findMax(p->left,e);
			deletenode(p->left, p->data);
		}else{
			node<T>* old = p;
			if(p->left != NULL)
				p = p->left;
			else
				p = p->right;

			delete old;
		}
	}
}



#endif /* BST_H_ */
