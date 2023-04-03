#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1; //Dengan array[100], maka n = 100
void Insert() {
   int val;
   if (rear == n - 1) //ketika antrean penuh
   cout<<"Antrean Penuh"<<endl;
   else {
      if (front == - 1) 
      front = 0;
      cout<<"Masukkan angka: "<<endl;
      cin>>val; //masuk ke antrean
      rear++; //rearnya bertambah
      queue[rear] = val; //masukkan ke val
   }
}
void Delete() {
   if (front == - 1 || front > rear) { //antrean masih kosong
      cout<<"Antrean Masih Kosong"; 
      return ;
   } else {
      cout<<"Nama Antrean Yang Dihapus: "<< queue[front] <<endl;
      front++;; //maka frontnya berada pada antrean selanjutnya
   }
}
void Display() {
   if (front == - 1)
   cout<<"Antrean Kosong"<<endl; //ketika antrean kosong
   else {
      cout<<"Daftar Antrean: ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" "; // menampilkan seluruh isi
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Masukkan ke antrean"<<endl;
   cout<<"2) Menghapus antrean"<<endl;
   cout<<"3) Tampilkan daftar antrean"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Pilih nomor: "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}