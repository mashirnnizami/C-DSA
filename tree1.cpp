#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):data(value)  {}

};

int main(){
    TreeNode* root = new TreeNode(1);
    TreeNode* left = new TreeNode(2);
    TreeNode* right = new TreeNode(3);
    cout<<"Data of the root node: "<<root->data<<endl;
    cout<<"Data of left node: "<<left->data<<endl;
    cout<<"Data of right node: "<<right->data<<endl;
    return 0;
}
