#include <iostream>

struct lagu{
std::string judul;
std::string penyanyi;
int rank;
lagu *next;
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
bool IsEmptyq(Queue q) {
  if(q.Head==nullptr && q.Tail==nullptr){
    return true;
  }else{
  return false;
  }
}
bool isEmptys(Stack Top) {
  if(Top==nullptr){
  return true;
  }else{
    return false;
  }
}
pointer searchStack(Stack Top,int ranking){
        pointer help=Top;
         while(help!=nullptr){ 
           if(help->rank==ranking){
            break;
            help=Top->next;
        } 
         }return help;
}
void deleteQueue(Queue &Q,pointer delElement){        
 if(IsEmptyq(Q)){
    delElement=nullptr;
 }else if(Q.Head->next==nullptr){
   delElement=Q.Head;
   Q.Head=nullptr;
   Q.Tail=nullptr;
 }else{
   delElement=Q.Head;
   Q.Head=Q.Head->next;
   delElement->next=nullptr;
 }
 std::cout<<" ============================ "<<"\n";
 std::cout<<"|    Lagu Berhasil Dihapus!  |"<<"\n";
 std::cout<<" ============================ "<<"\n\n";
}
void deleteStack(Stack &Top,pointer delElement){
 if(isEmptys(Top)){
    delElement=nullptr;
  } else if(Top->next==nullptr){
    delElement=Top;
    Top=nullptr;
  }else{
  delElement=Top;
  Top=Top->next;
  delElement->next=nullptr;
}
}
void replace(Stack &Top,pointer search,int pilihan){
        if(pilihan>2&&pilihan<1){
            std::cout<<" ============================ "<<"\n";
            std::cout<<"|  Terjadi Kesalahan Input!  |"<<"\n";
            std::cout<<" ============================ "<<"\n";
            exit(0);
        } else if(pilihan==1) {
          std::cout<<" ---------------------------- "<<"\n";
          std::cout<<"| Masukkan Judul Baru:      |"<<"\n";
          std::cout<<"| ";
          std::cin>>search->judul;
          std::cout<<"\n";
          } else if(pilihan==2) {
          std::cout<<" --------------------------------"<<"\n";
          std::cout<<"| Masukkan Penyanyi Baru:      |"<<"\n";
          std::cout<<"| ";
          std::cin>>search->penyanyi;
          std::cout<<"\n";
}
}

pointer searchQueue(Queue baris,int ranking){
 pointer help=baris.Head;
         while(help=nullptr){ 
           if(help->rank==ranking){
            break;
            help=baris.Head->next;
        } 
         }return help;

}

void playing(Stack &Top){
  if(isEmptys(Top)){
   std::cout<<"| Playlist Kosong           |"<<"\n";
  }else{
std::cout<<" ============================ "<<"\n";
        std::cout<<"| Now Playing:               |"<<"\n";
        std::cout<<"| "<<Top->judul<<"\n";
        std::cout<<"| By:                        |"<<"\n";
         std::cout<<"|"<<Top->penyanyi<<"\n";
}
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

void enqueue(Queue &q, pointer newNode) {
 
pointer help = q.Head;
 if (IsEmptyq(q) || newNode->rank < q.Head->rank)
            {
                newNode->next = q.Head;
                q.Head = newNode;
            }
            else
            {
                while (help->next != NULL && help->next->rank <= newNode->rank)
                    help=help->next;
                newNode->next =help->next;
                help->next = newNode;
                q.Tail=newNode;
            }
        }

void push(Stack&Top,pointer newNode){
 if(isEmptys(Top)){
    Top=newNode;
  }else{
     newNode->next=Top;
    Top=newNode;
}
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
void tranversalQ(Queue q) {
  pointer pHelp = q.Head;
  if(IsEmptyq(q)){
   std::cout<<" --------------------------- "<<"\n";
   std::cout<<"| Playlist Kosong           |"<<"\n";
   std::cout<<" =========================== "<<"\n";
 }else{
   while (pHelp!= nullptr) {
     std::cout<<" ---------------------------- "<<"\n";
     std::cout<<"|Ranking Lagu Anda:          |"<<"\n";
     std::cout<<"|"<<pHelp->rank<<"\n";
     std::cout<<"|Judul Lagu:                 |"<<"\n";
     std::cout<<"|"<<pHelp->judul<<"\n";
      std::cout<<"|Penyanyi:                   |"<<"\n";
      std::cout<<"|"<<pHelp->penyanyi<<"\n";
       pHelp = pHelp->next;
          }
   }std::cout<<" ============================ "<<"\n";
 }

int main(){
    int menu,exit=0,ranking,pilihan;
    pointer newNode,search,del,searchS,searchQ;
    auto Baris=createQueue();
   auto Top=createStack();
    do{
    std::cout<<" ============================ "<<"\n";
    std::cout<<"|        Playlist Musik      |"<<"\n";
    std::cout<<" ---------------------------- "<<"\n";
    std::cout<<"| MENU:                      |"<<"\n";
    std::cout<<"| 1. Insert Lagu             |"<<"\n";  
    std::cout<<"| 2. Delete Lagu             |"<<"\n";  
    std::cout<<"| 3. List Lagu               |"<<"\n";  
    std::cout<<"| 4. Now Playing             |"<<"\n";  
    std::cout<<"| 5. Ranking Lagu            |"<<"\n"; 
    std::cout<<"| 6. Info Lagu               |"<<"\n"; 
    std::cout<<"| 7. Update Lagu             |"<<"\n";  
    std::cout<<"| 8. Exit                    |"<<"\n";
    std::cout<<" ============================ "<<"\n";
    std::cout<<"| Masukkan Pilihan(No 1-8): ";std::cin>>menu;
    std::cout<<"\n";
    switch(menu){
        case(1):
       createNode(newNode);    
         push(Top,newNode);
     enqueue(Baris,newNode); 
        break;

        case(2):
        deleteQueue(Baris,del);
        
        break;

        case(3):
        tranversalS(Top);
        break;

        case(4):
        playing(Top);
        break;

        case(5):
        tranversalQ(Baris);
        break;

        case(6):
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"|Ranking Lagu Anda:          |"<<"\n";
        std::cout<<"| ";
        std::cin>>ranking;
        search=searchStack(Top,ranking);
        infoLagu(search);
        break;

        case(7):
        std::cout<<" ------------------------------------- "<<"\n";
        std::cout<<"| Ranking Lagu yang ingin diupdate:  |" <<"\n";
        std::cout<<"|";std::cin>>ranking;
        std::cout<<" ===================================== "<<"\n";
       searchS=searchStack(Top,ranking);
       
        std::cout<<"|  Lagu Berhasil Ditemukan!          |"<<"\n";
        std::cout<<" --------------------------------------"<<"\n";
        std::cout<<"| 1. Update Judul Lagu               |"<<"\n";
        std::cout<<"| 2. Update Penyanyi                 |"<<"\n";
        std::cout<<"| Masukan Pilihan:";
         std::cin>>pilihan; std::cout<<"\n";
        replace(Top,searchS,pilihan);
    
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