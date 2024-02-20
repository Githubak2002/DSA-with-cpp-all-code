// L100. Same Tree
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

bool isSameTree(TreeNode *p, TreeNode *q)
{
  if (p == NULL && q == NULL)
    return true;

  if (p == NULL || q == NULL || p->val != q->val)
    return false;

  return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
/*
bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr || q == nullptr)
            return p == q;
        return p->val == q->val && isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right); // check using preorder traversal
    }
    */

int main()
{
  cout << "\n\n";

  /* Same tree */
  TreeNode *root1 = new TreeNode(1);
  TreeNode *root2 = new TreeNode(1);
  TreeNode *r1n1 = new TreeNode(2);
  TreeNode *r2n1 = new TreeNode(2);
  TreeNode *r1n2 = new TreeNode(3);
  TreeNode *r2n2 = new TreeNode(3);

  root1->left = r1n1;
  root2->left = r2n1;
  root1->right = r1n2;
  root2->right = r2n2;

  cout << "Inorder traversal of 1st tree" << endl;
  preorderTraversal(root1);
  cout << "\n\n";
  cout << "Inorder traversal of 2nd tree" << endl;
  preorderTraversal(root2);
  cout << "\n\n";

  cout << "tree same = " << isSameTree(root1, root2) << endl;

  cout << "\n\n";
  return 0;
}
