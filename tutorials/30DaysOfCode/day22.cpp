#include <iostream>
#include <cstddef>
#include <algorithm>  // std::max

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution
{
public:
    Node* insert(Node* root, int data)
    {
        if(root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node* cur;
            if(data <= root->data)
            {
                cur = insert(root->left,data);
                root->left=cur;
            }
            else
            {
               cur = insert(root->right,data);
               root->right=cur;
            }
            return root;
       }
    }

    int getHeight(Node* root)
    {
        //Write your code here
        if (root == NULL || (root->left == NULL && root->right == NULL)) // leaf
        {
            return 0;
        }

        else
        {
            return 1 + std::max(getHeight(root->left),
                                getHeight(root->right));
        }
    }

};//End of Solution

int main()
{
    Solution myTree;
    Node* root=NULL;
    int T, data;

    std::cin>>T;

    while(T-->0)
    {
        std::cin>>data;
        root= myTree.insert(root,data);
    }

    int height= myTree.getHeight(root);
    std::cout<<height;
    return 0;
}
