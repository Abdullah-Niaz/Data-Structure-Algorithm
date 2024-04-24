#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL;

int NodeHeight(struct Node *p)
{
    if (p == nullptr)
        return 0;
    int hl = (p->lchild) ? p->lchild->height : 0;
    int hr = (p->rchild) ? p->rchild->height : 0;
    return (hl > hr) ? hl + 1 : hr + 1;
}

int BalanceFactor(struct Node *p)
{
    if (p == nullptr)
        return 0;
    int hl = (p->lchild) ? p->lchild->height : 0;
    int hr = (p->rchild) ? p->rchild->height : 0;
    return hl - hr;
}

struct Node *LRRotation(struct Node *p)
{
    return NULL;
}
struct Node *LLRotation(struct Node *p)
{
    return NULL;
}
struct Node *RRRotation(struct Node *p)
{
    return NULL;
}
struct Node *RLRotation(struct Node *p)
{
    struct Node *pr = p->rchild;
    struct Node *prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;

    prl->rchild = pr;
    prl->lchild = p;

    pr->height = NodeHeight(pr);
    p->height = NodeHeight(p);
    prl->height = NodeHeight(prl);

    if (root == p)
    {
        root = prl;
    }
    return prl;
}

// Recursive insert using BST
struct Node *RInsert(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)(malloc(sizeof(struct Node)));
        t->data = key;
        t->height = 1; // height is of your choocie, you can start from 0
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = RInsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = RInsert(p->rchild, key);
    }

    p->height = NodeHeight(p);

    // perform roation, for that check the balance factor
    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
    {
        return LLRotation(p);
    }
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
    {
        return LRRotation(p);
    }
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
    {
        return RRRotation(p);
    }
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
    {
        return RLRotation(p);
    }
    return p;
}

void InOrder(struct Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        cout << p->data << " ";
        InOrder(p->rchild);
    }
}

void printTree(Node *root, int space = 0, int count = 10)
{
    if (root == NULL)
        return;

    space += count;

    printTree(root->rchild, space);
    cout << endl;
    for (int i = count; i < space; i++)
        cout << " ";
    cout << root->data << endl;
    printTree(root->lchild, space);
}


int main()
{
    root = RInsert(root, 50);
    RInsert(root, 10);
    RInsert(root, 20);
    RInsert(root, 60);
    RInsert(root, 5);
    InOrder(root);
    printTree(root);

    return 0;
}