// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     int data;
//     node* left;
//     node* right;
//     node(ind d)
//     {
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// node* BuildTree(node* root)
// {
//     Cout<<"Enter the data "<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data==-1)
//     return NULL;
//     cout<<"Enter data for inserting in left of "<<data<<endl;
//     root->left=BuildTree(root->left);
//     cout<<"Enter data for inserting in right of "<<data<<endl;
//     root->right=BuildTree(root->right);
//     return root;
// }
// void levelOrderTraversal(node* root)
// {
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty())
//     {
//         node* temp = q.front();
//         q.pop();
//         if(temp==NULL)
//         {
//             cout<<endl;
//             if(!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if(temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }

// }
// int main()
// {
//     node* root=NULL;
//     root=BuildTree(root);
//     levelOrderTraversa(root);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

// class node
// {
// public:
//     int data;
//     node* left;
//     node* right;
//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node* BuildTree(node* root)
// {
//     cout << "Enter the data: ";
//     int data;
//     cin >> data;
//     if(data == -1)
//         return NULL;
//     root = new node(data);
//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = BuildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = BuildTree(root->right);
//     return root;
// }

// vector<vector<int>> levelOrderTraversal(node* root)
// {
//     queue<node*> q;
//     vector<vector<int>> Result;
//     q.push(root);
//     while(!q.empty())
//     {
//         int n=q.size();
//         vector<int>temp;
//         for(int i=0;i<n;i++)
//         {
//             node* val=q.front();
//             q.pop();
//             temp.push_back(val->data);
//             if(val->left)
//             q.push(val->left);
//             if(val->right)
//             q.push(val->right);
//         }
//         Result.push_back(temp);
//     }
//     return Result;
// }
// int main()
// {
//     node* root = NULL;
//     root = BuildTree(root);
//     cout << "Level Order Traversal:" << endl;
//     vector<vector<int>> traversal=levelOrderTraversal(root);
//     for (auto& level : traversal) {
//         for (int node : level) {
//             cout << node << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



class node 
{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* BuildTree(node * root)
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root = new node(data);
    cout<<"Enter the data for left "<<data<<endl; 
    root->left=BuildTree(root->left);
    cout<<"Enter the data for right "<<data<<endl; 
    root->right=BuildTree(root->right);
    return root;
}
void print(node* root)
{
    if(root == nullptr)
    return ;
    print(root->left);
    cout<<root->data;
    print(root->right);
}
int main()
{
    node* root=nullptr;
    root=BuildTree(root);
    print(root);
}
