// 104. Maximum Depth of Binary Tree


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

int maxDepth(TreeNode* root){
  if(root == NULL)
    return 0;
  
  int h1 = maxDepth(root->left);
  int h2 = maxDepth(root->right);

  int ans =  max(h1,h2);
  return ans+1;
}

int main()
{
  cout << "\n\n";

  /* Same tree */
  TreeNode *root = new TreeNode(1);
  TreeNode *n1 = new TreeNode(2);
  TreeNode *n2 = new TreeNode(3);
  TreeNode *n3 = new TreeNode(4);
  TreeNode *n4 = new TreeNode(5);

  root->left = n1;
  root->right = n2;
  n1->left = n3;
  n1->right = n4;

  cout << "Level orerd traversal of 1st tree" << endl;
  levelOrderTraversal(root);
  cout << "\n\n";

  cout<<"maxDepth = "<<maxDepth(root)<<endl;


  cout << "\n\n";
  return 0;
}
