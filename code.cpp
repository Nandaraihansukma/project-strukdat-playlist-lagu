#include <iostream>

struct lagu{
char judul;
char penyanyi;
int rank;
lagu *next;
lagu *prev;
lagu *left;
lagu *right;
};

using pointer=lagu*;
using Tree=pointer;

struct Queue {
 pointer Head;
 pointer Tail;
};

Queue createQueue(){
  Queue baris;
  baris.Head=nullptr;
  baris.Tail=nullptr;
  return baris;
}

Tree createTree(){
    return nullptr;
}

void createNode(pointer& newNode){
newNode =new lagu;
std::cout<<"Masukkan judul lagu :";
std::cin>>newNode->judul;
std::cout<<"Masukkan penyanyi lagu :";
std::cin>>newNode->penyanyi;
std::cout<<"Masukkan Ranking lagu :";
std::cin >>newNode->rank;
newNode->next=nullptr;
newNode->prev=nullptr;
newNode->left=nullptr;
newNode->right=nullptr;
}
void enqueue(Queue &q,pointer newNode){
}
void insertTree(Tree& root, pointer newNode){
if(root == nullptr){
    root = newNode;
    }else{
  bool isLowerThanRoot = (newNode->rank < root->rank);

  if(isLowerThanRoot){
    insertTree(root->left, newNode);}
  else{
    insertTree(root->right, newNode);
}
}
}
int main(){
    int menu,exit=0;
    pointer newNode;
    createQueue();
    createTree();
    do{
    std::cout<<"-----------------------"<<"\n";
    std::cout<<"-----------------------"<<"\n";
    std::cout<<"Program Playlist Musik"<<"\n";
    std::cout<<"Menu"<<"\n";
    std::cout<<"1. Insert Lagu"<<"\n";
    std::cout<<"2. Delete Lagu"<<"\n";
    std::cout<<"3. List Lagu"<<"\n";
    std::cout<<"4. Now Playing"<<"\n";
    std::cout<<"5. Ranking Lagu"<<"\n";
    std::cout<<"6. Info Lagu"<<"\n";
    std::cout<<"7. Update Lagu"<<"\n";
    std::cout<<"7. Exit"<<"\n";
    std::cout<<"Masukkan Pilihan:";
    std::cin>>menu;
    switch(menu){
        case(1):
        createNode(newNode);
        insertTree(Root,newNode);
        enqueue(Baris,newNode);
        case(2):
        case(3):
        case(4):
        case(5):
        case(6):
    
        case(7):
        std::cout<<"-----------------------"<<"\n";
        std::cout<<"-----------------------"<<"\n";
        std::cout<<"Terimakasih Telah Menggunakan Playlist"<<"\n";
        std::cout<<"-----------------------"<<"\n";
        std::cout<<"-----------------------"<<"\n";
            exit=1;
            break;
        default:
        std::cout<<"-----------------------"<<"\n";
        std::cout<<"-----------------------"<<"\n";
        std::cout<<"Perintah Tidak Sesuai"<<"\n"<<"Program Dikeluarkan"<<"\n";
        std::cout<<"-----------------------"<<"\n";
        std::cout<<"-----------------------"<<"\n";
            exit=1;
            break;
    }
    }while(exit==0);
}