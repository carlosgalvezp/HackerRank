#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

class Node
{
    public:
        int data;
        Node *left,*right;
        Node(int d)
        {
            data=d;
            left=right=NULL;
        }
};

class Solution
{
    public:
        Node* insert(Node* root, int data)
        {
            if(root==NULL)
            {
                return new Node(data);
            }
            else
            {
                Node* cur;
                if(data<=root->data)
                {
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else
                {
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }

        void levelOrder(Node * root)
        {
          //Write your code here
            // Breadth-First Search
            std::queue<Node*> to_visit_;
            to_visit_.push(root);

            while (to_visit_.size() > 0U)
            {
                Node* n = to_visit_.front();
                to_visit_.pop();

                if (n != NULL)
                {
                    std::cout << n->data << " ";
                    to_visit_.push(n->left);
                    to_visit_.push(n->right);
                }
            }
        }

};//End of Solution

int main()
{
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0)
    {
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
