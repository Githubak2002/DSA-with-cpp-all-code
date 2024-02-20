// L226. Invert Binary Tree
#include <iostream>
#include <queue>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  // TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  TreeNode(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void inorderTraversal(TreeNode *root)
{
  if (root == NULL)
    return;
  inorderTraversal(root->left);
  cout << root->val << " ";
  inorderTraversal(root->right);
}

void preorderTraversal(TreeNode *root)
{
  if (root == NULL)
    return;
  cout << root->val << " ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void postorderTraversal(TreeNode *root)
{
  if (root == NULL)
    return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->val << " ";
}

void levelOrderTraversal(TreeNode *root)
{
  queue<TreeNode *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    TreeNode *node = q.front();
    q.pop();
    if (node == NULL)
    {
      cout << "\n";
      if (!q.empty())
        q.push(NULL);
    }
    else
    {
      cout << node->val << " ";
      if (node->left != NULL)
        q.push(node->left);
      if (node->right != NULL)
        q.push(node->right);
    }
  }
}


TreeNode* invertTree(TreeNode* root) {
  if(root == NULL)
    return nullptr;
  
  TreeNode *newr = new TreeNode(root->val);
  newr->left = root->right; 
  newr->right = root->left; 
  invertTree(root->left);
  invertTree(root->right);

}

int main()
{
  cout << "\n\n";

 
  TreeNode *r = new TreeNode(1);
  TreeNode *rn1 = new TreeNode(2);
  TreeNode *rn2 = new TreeNode(3);
  // TreeNode *rn3 = new TreeNode(4);
  r->left = rn1;
  r->right = rn2;
  // rn1->right = rn3;

  cout << "preorder traversal" << endl;
  preorderTraversal(r);
  cout << endl;

  // TreeNode *newr = invertTree(r);
  // cout << "preorder traversal of invert tree" << endl;
  // preorderTraversal(newr);
  // cout << endl;

  

  cout << "\n\n";
  return 0;
}
