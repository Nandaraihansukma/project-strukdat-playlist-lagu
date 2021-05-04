#include <iostream>

int main(){
    int menu,exit=0;;
    do{
    std::cout<<" ============================ "<<"\n";
    std::cout<<"|        Playlist Musik      |"<<"\n";
    std::cout<<" ---------------------------- "<<"\n";
    std::cout<<"| MENU:                      |"<<"\n";
    std::cout<<"| 1. Insert Lagu             |"<<"\n";  //masukin ke stack,tree
    std::cout<<"| 2. Delete Lagu             |"<<"\n";  //delete di dua-duanya
    std::cout<<"| 3. List Lagu               |"<<"\n";  //return tree
    std::cout<<"| 4. Now Playing             |"<<"\n";  //return stack
    std::cout<<"| 5. Ranking Lagu            |"<<"\n";  //return tree BFS
    std::cout<<"| 6. Info Lagu               |"<<"\n";  //search bebas terus return
    std::cout<<"| 7. Update Lagu             |"<<"\n";  //search stack,tree terus replace
    std::cout<<"| 8. Exit                    |"<<"\n";
    std::cout<<" ============================ "<<"\n";
    std::cout<<"| Masukkan Pilihan: ";std::cin>>menu;
    std::cout<<"\n";
    switch(menu){
        case(1):
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Masukkan Judul Lagu:      |" <<"\n";
        std::cout<<"| Masukkan Penyanyi:        |" <<"\n";
        std::cout<<"| Masukkan Ranking Lagu:    |" <<"\n";
        std::cout<<" ============================ "<<"\n";
        std::cout<<"|      Playlist Diupdate!    |"<<"\n";
        std::cout<<" ============================ "<<"\n\n";
        break;

        case(2):
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Lagu yang ingin dihapus:   |"<<"\n";
        std::cout<<" ============================ "<<"\n";
        std::cout<<"|    Lagu Berhasil Dihapus!  |"<<"\n";
        std::cout<<" ============================ "<<"\n\n";
        break;

        case(3):
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Playlist Anda:            |"<<"\n";
        break;

        case(4):
        std::cout<<" ============================ "<<"\n";
        std::cout<<"| Now Playing:               |"<<"\n";
        std::cout<<"|                            |"<<"\n";
        std::cout<<"| By:                        |"<<"\n";
        break;

        case(5):
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"|Ranking Lagu Anda:          |"<<"\n";
        std::cout<<"|Judul Lagu:                 |"<<"\n";
        std::cout<<"|Penyanyi:                   |"<<"\n";

        break;

        case(6):
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Masukkan Rank Lagu Anda:   |"<<"\n"; 
        std::cout<<"|Judul Lagu:                 |"<<"\n";
        std::cout<<"|Penyanyi:                   |"<<"\n";
        

        break;

        case(7):
        int pilihan;
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| Lagu yang ingin diupdate:  |" <<"\n";
        std::cout<<" ============================ "<<"\n";
        std::cout<<"|  Lagu Berhasil Ditemukan!  |"<<"\n";
        std::cout<<" ---------------------------- "<<"\n";
        std::cout<<"| 1. Update Judul Lagu       |"<<"\n";
        std::cout<<"| 2. Update Penyanyi         |"<<"\n";
        std::cout<<"| 3. Update Ranking Lagu     |"<<"\n";
        std::cout<<" ============================ "<<"\n";
        std::cout<<"| Masukkan Pilihan: ";
        std::cin>>pilihan; std::cout<<"\n";
        if(pilihan>3 ){
            std::cout<<" ============================ "<<"\n";
            std::cout<<"|  Terjadi Kesalahan Input!  |"<<"\n";
            std::cout<<" ============================ "<<"\n";
        } else if(pilihan=1) {
            std::cout<<" ---------------------------- "<<"\n";
            std::cout<<"| Masukkan Judul Baru:      |";
            std::cout<<"\n";
        }
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
