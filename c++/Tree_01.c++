#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildtree(vector<int>& preorder){
    idx++;
    if(preorder[idx]==-1) 
        return(NULL);
    Node* root = new Node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return(root);
}

// preorder traversal (root, left, right) TC ~ O(n).
void preorder_trv(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder_trv(root->left);
    preorder_trv(root->right);
}

// Inorder Traversal (Left, root, right) TC ~ O(n).
void inorder_trv(Node* root){
    if(root == NULL){
        return ;
    }
    inorder_trv(root->left);
    cout<<root->data<<" ";
    inorder_trv(root->right);
}

// Postorder traversal (left, right, root) TC ~ O(n).
void postorder_trv(Node* root){
    if(root == NULL){
        return;
    }
    postorder_trv(root->left);
    postorder_trv(root->right);
    cout<<root->data<<" ";
} 

// Level Ordre traversal with the help of queue TC ~ O(n).
void levelorder_trv(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr -> left != NULL){
            q.push(curr->left);
        }
        if(curr-> right != NULL){
            q.push(curr->right);
        }

    }
    cout<<endl;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(preorder);

    preorder_trv(root);
    cout<<endl;
    inorder_trv(root);
    cout<<endl;
    postorder_trv(root);
    cout<<endl;
    levelorder_trv(root);
    return(0); 
}