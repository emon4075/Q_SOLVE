#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int Value;
    Node *Left;
    Node *Right;
    Node(int Value)
    {
        this->Value = Value;
        this->Left = NULL;
        this->Right = NULL;
    }
};
Node *Input_Tree()
{
    int Value;
    cin >> Value;
    Node *Root;
    if (Value == -1)
    {
        Root = NULL;
    }
    else
    {
        Root = new Node(Value);
    }
    queue<Node *> Q;
    if (Root)
    {
        Q.push(Root);
    }
    while (!Q.empty())
    {
        Node *Parent = Q.front();
        Q.pop();
        int L, R;
        cin >> L >> R;
        Node *myLeft, *myRight;
        if (L == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(L);
        }
        if (R == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(R);
        }
        Parent->Left = myLeft;
        Parent->Right = myRight;
        if (Parent->Left)
        {
            Q.push(Parent->Left);
        }
        if (Parent->Right)
        {
            Q.push(Parent->Right);
        }
    }
    return Root;
}
int heightOfBinaryTree(Node *Root)
{
    if (Root == NULL)
    {
        return -1;
    }
    int L = heightOfBinaryTree(Root->Left);
    int R = heightOfBinaryTree(Root->Right);
    return max(L, R) + 1;
}
int main()
{
    Node *Root = Input_Tree();
    cout << "Height of the Binary Tree is: " << heightOfBinaryTree(Root);
    return 0;
}