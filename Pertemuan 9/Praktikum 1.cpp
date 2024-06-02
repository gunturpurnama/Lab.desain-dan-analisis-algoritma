//Program tree
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int value){
			data = value;
			left = NULL;
			right = NULL;
		}
};

class Tree{
	public:
		Node* root;
		Tree() {root = NULL}
		
		void insnert(int value){
			root = insert(root, value);
		}
		Node* insert(Node* node, int value){
			if(node == NULL) {
				node = new Node(value);
			}else if(value <= node->data){
				node->left = insert(node->left, value);
			}else{
				node->right = insert(node->right, value)
			}
			return node;
		}
		
		void inorder() {inorder(root);}
		
		void inorder
};
