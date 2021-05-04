#include <iostream>

struct lagu{
std::string judul;
std::string penyanyi;
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
void searchTree(){

}
void searchStack(){

}
void replaceStack(){

}
void replaceTree(){

}
void dequeue(){

}
void playing( Queue &Top){
std::cout<<Top.Head->judul;
}
void infoLagu(){

}
void createNode(pointer& newNode){
newNode =new lagu;
std::cout<<"Masukkan Judul lagu :";
std::cin>>newNode->judul;
std::cout<<"Masukkan Penyanyi lagu :";
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
  auto Baris=createQueue();
  auto Root=createTree();
    do{
    std::cout<<"-----------------------"<<"\n";
    std::cout<<"-----------------------"<<"\n";
    std::cout<<"Program Playlist Musik"<<"\n";
    std::cout<<"Menu"<<"\n";
    std::cout<<"1. Insert Lagu"<<"\n";//masukin ke stack,tree
    std::cout<<"2. Delete Lagu"<<"\n";//delete di dua duanya
    std::cout<<"3. List Lagu"<<"\n";//return tree
    std::cout<<"4. Now Playing"<<"\n";//return stack
    std::cout<<"5. Ranking Lagu"<<"\n";//return tree bfs
    std::cout<<"6. Info Lagu"<<"\n";//search bebas terus return
    std::cout<<"7. Update Lagu"<<"\n";//search stack,tree terus replace
    std::cout<<"8. Exit"<<"\n";
    std::cout<<"Masukkan Pilihan:";
    std::cin>>menu;
    switch(menu){
        case(1):
        createNode(newNode);
        insertTree(Root,newNode);
        enqueue(Baris,newNode);
        break;

        case(2):
        break;

        case(3):
        
        break;

        case(4):
        break;

        case(5):
        break;

        case(6):
        break;

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