# include<iostream>
# include<queue>
using namespace std;
//right view of a binary tree
class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

void levelorderbuild(node*&root){
    int d;
    cin>>d;
    root = new node(d);
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node*f = q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1){
            f->left = new node(c1);
            q.push(f->left);
        }
        if(c2!=-1){
            f->right = new node(c2);
            q.push(f->right);
        }
    }
}

node* buildtree(){
    //base case
    int d;
    cin>>d;

    if(d==-1){
        return NULL; 
    }
   node* root  = new node(d);
   root->left = buildtree();
   root->right = buildtree();
   return root;
}
//error below
void printrightview(node*root,int level,int &maxlevel){
    if(root==NULL){
        return;
    }

    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel = level;
    }

    //right
    //left
    printrightview(root->right,level+1,maxlevel);
    printrightview(root->left,level+1,maxlevel);
}
int main(){
    node*root = NULL;
    levelorderbuild(root);
    int maxlevel = -1;
    printrightview(root,0,maxlevel);
    return 0;
}
