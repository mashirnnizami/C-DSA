
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x),left(nullptr),right(nullptr) {}
};
TreeNode* insert(TreeNode* root,int val) {
    if(root==nullptr){
        return new TreeNode(val);
    }
    if(val<root->val) {
        root->left=insert(root->left,val);
    }
    else {
        root->right = insert(root->right,val);
    }
    return root;
}
bool search(TreeNode* root,int target){
    if(root==nullptr){
        return true;
    }else if(target < root->val){
        return search(root->left,target);
    } else{
        return search(root->right,target);
    }

}
vector<int> twoSum(vector<int>&nums,int target){
    TreeNode* root= nullptr;
    for(int num:nums) {
        int complement=target-num;
        if(search(root, complement)){
            for(int i=0;i<nums.size();++i){
                if(nums[i]==complement){
                    return {i,num};
                }
            }
        }
        root=insert(root,num);
    }
return {};    

}

int main(){
    vector<int> nums ={2,7,9,11,15};
    int target=9;

    vector<int> result=twoSum(nums,target);
    for(int num:result){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}