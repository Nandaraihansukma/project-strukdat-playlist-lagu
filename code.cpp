#include <iostream>

struct lagu{
char judul[25];
char penyanyi[25];
int rank[5];
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

void createNode(){

}

int main(){
    int menu;
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
    std::cout<<"7. Exit"<<"\n";
    std::cout<<"Masukkan Pilihan:";
    std::cin>>menu;
    switch(menu){
        case(1):
        case(2):
        case(3):
        case(4):
        case(5):
        case(6):
    
        case(7):
        std::cout<<"Terimakasih Telah Menggunakan Playlist";
            exit(0);
        default:
        std::cout<<"Perintah Tidak Sesuai"<<"\n"<<"Program Dikeluarkan";
            exit(0);
        
    }
}