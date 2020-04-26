// level order traversal using hashmap
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left, *right;
};
Node* newNode( int key)
{
	Node* node= new Node;
	node->data= key;
	node->left=node->right= NULL;
	return node;
}
void levelOrder(Node* node, int h, map<int,vector<int>> &m)
{
	if(node== NULL) return;
	m[h].push_back(node->data);
	levelOrder(node->left,  h+1, m);
    levelOrder(node->right,  h+1, m);	
}
void printLevel(Node* node)
{
	if(node==NULL) return;
	map<int,vector<int>>m;
	int h=0;
	levelOrder(node, h, m);
	map<int,vector<int>>::iterator it;
	for(it= m.begin();it!=m.end();it++)
	{
		for(int i=0; i<it->second.size();i++)
		 cout<<it->second[i]<<" ";
		cout<<endl;	
	}
}
int main() 
{ 
    Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
    root->right->right->right = newNode(9); 
    cout << "level order traversal is n\n"; 
    printLevel(root); 
    return 0; 
} 
