#include <iostream>
using namespace std;

int stack[100], n=100, top=-1; //batas stack 100
void push(int val) {
   if(top>=n-1) //ketika mencapai maksimal
   cout<<"Tumpukkan Penuh"<<endl;
   else {
      top++; //top bertambah
      stack[top]=val; //masuk ke val
   }
}
void pop() {
   if(top<=-1) //ketika isinya kosong
   cout<<"Tumpukkan Masih Kosong"<<endl;
   else {
      cout<<"Yang Keluar Dari Tumpukkan: "<< stack[top] <<endl;
      top--; //top berkurang
   }
}
void display() {
   if(top>=0) { //jika Terdapat element
      cout<<"Daftar Tumpukkan Yang Ada:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" "; //menampilkan seluruh stack
      cout<<endl;
   } else
   cout<<"Tumpukkan Kosong";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Pilih nomor: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Masukkan Nilai: "<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}