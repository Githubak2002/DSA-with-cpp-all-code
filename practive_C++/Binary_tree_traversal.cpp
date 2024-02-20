
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
  if(root == NULL)
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


void levelOrderTraversal(TreeNode *root){
  queue<TreeNode *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    TreeNode *node = q.front();
    q.pop();
    if(node == NULL){
      cout<<"\n";
      if(!q.empty())
        q.push(NULL);
    }
    else{
      cout<<node->val<<" ";
      if(node->left != NULL)
        q.push(node->left);
      if(node->right != NULL)
        q.push(node->right);
    }
  }
}


int main()
{
  cout << "\n\n";

  TreeNode *root = new TreeNode(10);
  TreeNode *n2 = new TreeNode(20);
  TreeNode *n3 = new TreeNode(30);
  TreeNode *n4 = new TreeNode(40);
  TreeNode *n5 = new TreeNode(50);
  TreeNode *n6 = new TreeNode(60);
  TreeNode *n7 = new TreeNode(70);
  root->left = n2;
  root->right = n3;
  n2->left = n4;
  n2->right = n5;
  n3->left = n6;
  n3->right = n7;

  cout << "Inorder traversal" << endl;
  inorderTraversal(root);
  cout<<"\n\n";
  cout << "post traversal" << endl;
  postorderTraversal(root);
  cout<<"\n\n";
  cout << "pre traversal" << endl;
  preorderTraversal(root);
  cout<<"\n\n";

  cout << "Level order traversal" << endl;
  levelOrderTraversal(root);
  cout<<endl;



  cout << "\n\n";
  return 0;
}
