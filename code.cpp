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
using Stack=pointer;
Stack Top;

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

Stack createStack(){
Top=nullptr;
return Top;
}
void deleteQueue(){
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Lagu yang ingin dihapus:   |"<<"\n";
        std::cout<<" ============================ "<<"\n";
        std::cout<<"|    Lagu Berhasil Dihapus!  |"<<"\n";
        std::cout<<" ============================ "<<"\n\n";
}
void deleteStack(){

}
void replaceStack(){
    int pilihan;
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Lagu yang ingin diupdate:  |" <<"\n";
        std::cout<<" ============================ "<<"\n";
        std::cout<<"|  Lagu Berhasil Ditemukan!  |"<<"\n";
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| 1. Update Judul Lagu       |"<<"\n";
        std::cout<<"| 2. Update Penyanyi         |"<<"\n";
         std::cin>>pilihan; std::cout<<"\n";
        if(pilihan>3 ){
            std::cout<<" ============================ "<<"\n";
            std::cout<<"|  Terjadi Kesalahan Input!  |"<<"\n";
            std::cout<<" ============================ "<<"\n";
        } else if(pilihan=1) {
}
}
void replaceQueue(){

}
void searchQueue(Queue baris,int rank){


}
pointer searchStack(Stack Top,int ranking){
        pointer help=Top;
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"|Ranking Lagu Anda:          |"<<"\n";
        std::cin>>ranking;
         while(help!=nullptr){
            help=Top->next;
            if(help->rank=ranking){
            break;
        } 
         }return help;
}
void playing(Stack &Top){
std::cout<<" ============================ "<<"\n";
        std::cout<<"| Now Playing:               |"<<"\n";
        std::cout<<"| "<<Top->judul<< " |"<<"\n";
        std::cout<<"| By:                        |"<<"\n";
         std::cout<<"|"<<Top->penyanyi<< " |"<<"\n";
}
void infoLagu(pointer search){
        std::cout<<"|Judul Lagu:                 |"<<"\n";
        std::cout<<"| "<<search->judul<<"\n";
        std::cout<<"|Penyanyi:                   |"<<"\n";
        std::cout<<"| "<<search->penyanyi<<"\n";
}
void createNode(pointer& newNode){
newNode =new lagu;
newNode->next=nullptr;
newNode->prev=nullptr;
newNode->left=nullptr;
newNode->right=nullptr;
std::cout<<" ---------------------------- "<<"\n";
std::cout<<"| Masukkan Judul Lagu:      |" <<"\n";
std::cout<<"| " ;
std::cin>>newNode->judul;
std::cout<<"| Masukkan Penyanyi:        |" <<"\n";
std::cout<<"| " ;
std::cin>>newNode->penyanyi;
std::cout<<"| Masukkan Ranking Lagu:    |" <<"\n";
std::cout<<"| " ;
std::cin >>newNode->rank;
std::cout<<" ============================ "<<"\n";
std::cout<<"|      Playlist Diupdate!    |"<<"\n";
std::cout<<" ============================ "<<"\n\n";
}
bool IsEmptyq(Queue q) {
  if(q.Head==nullptr && q.Tail==nullptr){
    return true;
  }else{
  return false;
  }
}
/*void enqueue(Queue &q, pointer newNode) {
  pointer  prev=nullptr;
  pointer help=q.Head;
  if(IsEmptyq(q)){
    q.Head=newNode;
    q.Tail=newNode;
  }else{
     while (help->next != NULL &&help->rank >=newNode->rank) {
        prev = help;
        help = help->next;
    }if(help==q.Tail&&help->rank>newNode->rank){
      help->next=newNode;
      q.Tail=newNode;
    }else if(help==q.Head&&help->rank<newNode->rank){
      newNode->next=help;
      q.Head=newNode;
    }else if(help->rank==newNode->rank){
      newNode->next=help->next;
      help->next=newNode;
    }
      else {
            newNode->next = help;
            prev->next = newNode;
        }
    }
}*/


bool isEmptys(Stack Top) {
  if(Top==nullptr){
  return true;
  }else{
    return false;
  }
}
Stack push(Stack&Top,pointer newNode){
 if(isEmptys(Top)){
    Top=newNode;
  }else{
     newNode->next=Top;
    Top=newNode;
} return Top;
}

void tranversalS(Stack Top) {
    int count=1;
    std::cout<<" ---------------------------- "<<"\n";
    std::cout<<"| Playlist Anda:            |"<<"\n";
  pointer pHelp = Top;
  if(isEmptys(Top)){
   std::cout<<"| Playlist Kosong           |"<<"\n";
 }else{
   while (pHelp!= nullptr) {
    std::cout<<"|Judul Lagu"<<" "<<count<<":              |"<<"\n";
    std::cout<<"|"<<pHelp->judul<<"\n";
    std::cout<<"|Penyanyi:                  |"<<"\n";
    std::cout<<"|"<<pHelp->penyanyi<<"\n";
         pHelp = pHelp->next;
         count++;
          }
   }std::cout<<" ============================ "<<"\n";
 }


int main(){
    int menu,exit=0,ranking;
    pointer newNode,search;
   // auto Baris=createQueue();
   auto Top=createStack();
    do{
    std::cout<<" ============================ "<<"\n";
    std::cout<<"|        Playlist Musik      |"<<"\n";
    std::cout<<" ---------------------------- "<<"\n";
    std::cout<<"| MENU:                      |"<<"\n";
    std::cout<<"| 1. Insert Lagu             |"<<"\n";  //masukin ke stack,tree
    std::cout<<"| 2. Delete Lagu             |"<<"\n";  //delete di dua-duanya
    std::cout<<"| 3. List Lagu               |"<<"\n";  //return stack tranversal
    std::cout<<"| 4. Now Playing             |"<<"\n";  //return stack
    std::cout<<"| 5. Ranking Lagu            |"<<"\n";  //return queue tranversal
    std::cout<<"| 6. Info Lagu               |"<<"\n";  //search bebas terus return
    std::cout<<"| 7. Update Lagu             |"<<"\n";  //search stack,queue terus replace
    std::cout<<"| 8. Exit                    |"<<"\n";
    std::cout<<" ============================ "<<"\n";
    std::cout<<"| Masukkan Pilihan(No 1-8): ";std::cin>>menu;
    std::cout<<"\n";
    switch(menu){
        case(1):
        createNode(newNode);
        push(Top,newNode);
       // enqueue(Baris,newNode); priority dibenarkan
        break;

        case(2):
        searchQueue();
        searchStack();
        deleteQueue();
        deleteStack();
        break;

        case(3):
        tranversalS(Top);//done
        break;

        case(4):
        playing(Top);//done
        break;

        case(5):
        //tranversal queue
        break;

        case(6):
        search=searchStack(Top,ranking);//broken
        infoLagu(search);//broken
        break;

        case(7):
        searchStack();
        searchQueue();
        replaceStack();
        replaceQueue;
        break;
        case(8):
       std::cout<<" ============================ "<<"\n";
       std::cout<<"|        TERIMA KASIH!       |"<<"\n";
       std::cout<<" ============================ "<<"\n";
            exit=1;
            break;

        default:
        std::cout<<" ===================================== "<<"\n";
            std::cout<<"|  Terjadi Kesalahan Input!          |"<<"\n";
            std::cout<<"|  Mohon Masukan Perintah yang benar |"<<"\n";
            std::cout<<" ====================================="<<"\n";
            
            break;
    }
    }while(exit==0);
}