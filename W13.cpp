#include<iostream>
using namespace std;
struct node {
    int data;
    struct node* left;
    struct node* right;
    node (int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
bool emptytreecheck( node* p){
    return (p == NULL);
}
node* khoitaoBST (){
    return NULL;
}
node* themnode(node* root, int value){
    if (root == NULL) return new node(value);
    if (value < root -> data){
        root -> left = themnode(root -> left, value);
    }
    else if (value > root -> data){
        root -> right = themnode(root -> right, value);
    }
    return root;
}
node* searchBST(node* root, int value){
    if (root == NULL) return NULL;
    if (value == root -> data) return root;
    if (value < root -> data){
        return searchBST(root -> left, value);
    }
    else {
        return searchBST(root -> right, value);
    }
}
int main(){
    int a[] = {2001, 2002, 2006, 2007, 2003, 2004, 2005, 2001, 1999, 2004};
    int n = 10;
    node* root = khoitaoBST();
    for (int i = 0; i <n; i++){
        root = themnode(root, a[i]);
    }
        node* ketqua = searchBST(root, 2004);
        if (ketqua != NULL){
            cout << ketqua -> data << endl;
        }
        else{
            cout << "Khong co" << endl;
        }
    return 0;
}