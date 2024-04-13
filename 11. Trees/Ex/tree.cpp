#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *leftChild;
        Node *rightChild;
    public:
        Node(int data){
            this->data = data;
            this->leftChild = NULL;
            this->rightChild = NULL;
        }
};

Node* buildTree(Node *root){
    cout<<"Enter the Data: ";
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }       
    cout<<"Enter the data for inserting in left of:  "<<data<<endl;
    root->leftChild = buildTree(root->leftChild);
    cout<<"Enter the data for inserting in right of: "<<data <<endl;
    root->rightChild = buildTree(root->rightChild);
    return root;
}

int main(){
    Node * root = NULL;
    root = buildTree(root);
    return 0;
}