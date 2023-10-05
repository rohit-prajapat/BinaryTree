#include<iostream>
using namespace std;
class TreeNode
{
    public : 
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(){}
    TreeNode(int val)
    {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(TreeNode *root)
{
    if(root == nullptr) return 0;

    int l = 1+height(root->left);
    int r = 1 + height(root->right);
    return max(l,r);


    
}
int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    a ->left = b;
    a->right = c;
    b ->left = d;
    b->right = e;
    d->left = f;
    f->right = g;
 
    
   cout<<endl<<"Height of tree is "<< height(a)+1;
    
}
