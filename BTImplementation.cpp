#include <iostream>
#include <queue>
using namespace std;

// building a binarytree
class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildtree(Node *root)
{
    // using recursion":

    cout << "ENTER DATA \n";
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1) // base condition,if we dont want to expand the tree,we give -1 as the data
    {
        return NULL;
    }

    cout << "Enter data for inserting@left of" << data << endl;
    root->left = buildtree(root->left);

    cout << "Enter data for inserting@right of" << data << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    // implemented using queue of Node* type i.e it will be a queue of pointers to object of Node

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) // while queue is not empty:
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{

    Node *root = NULL;
    root = buildtree(root);

    // level order/bfs
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);

    return 0;
}

