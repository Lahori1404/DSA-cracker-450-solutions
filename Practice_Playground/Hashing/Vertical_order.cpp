#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node* left;
node* right;

node(int val){
data = val;
left = right = NULL;
}



};

node* create_node(node* root, int val){
if(root== NULL)
{root = new node(val);
return root;}
if(val<=root->data)
{root->left=create_node(root->left,val);}
else{root->right=create_node(root->right,val);}
return root;
}

void inorder(node* root)
{
if(root==NULL)
{return;}

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void fill_map(node* root, int HD, unordered_map<int,vector<int>> &mp){

if(root == NULL){return;}

mp[HD].push_back(root->data);
fill_map(root->left,HD-1,mp);
fill_map(root->right,HD+1,mp);

}


void vertical_order(node* root){

unordered_map<int,vector<int>> ans;
fill_map(root,0,ans);

unordered_map<int,vector<int>> :: iterator it;

for(it = ans.begin(); it != ans.end(); it++){
    cout<<it->first<<"- ";
for (int i = 0; i < ans[it->first].size(); i++)
{
    cout<<ans[it->first][i]<<" ";
}
cout<<endl;

}

}


int main(int argc, char const *argv[])
{

 node* root = NULL;

 root = create_node(root,8);
 root = create_node(root,5);
 root = create_node(root,7);
 root = create_node(root,6);
 root = create_node(root,9);
 root = create_node(root,11);
 root = create_node(root,12);

vertical_order(root);

    return 0;
}
