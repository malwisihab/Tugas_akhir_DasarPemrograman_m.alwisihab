#include <iostream>
#include <string>

using namespace std;

const int menuCount = 5;
struct Menu {
  string name;
  int price;
};

int main() {
  int pilih;

  menuUtama:
  Menu menu[menuCount];
  menu[0].name = "Coffee";
  menu[0].price = 5000;
  menu[1].name = "Tea";
  menu[1].price = 4000;
  menu[2].name = "Hot Chocolate";
  menu[2].price = 6000;
  menu[3].name = "Cake";
  menu[3].price = 8000;
  menu[4].name = "Sandwich";
  menu[4].price = 10000;

  int total = 0;
  int order[menuCount];
  for (int i = 0; i < menuCount; i++) {
    cout << i + 1 << ". " << menu[i].name << " - Rp" << menu[i].price << endl;
    cout << "Order: ";
    cin >> order[i];
    total += order[i] * menu[i].price;
  }

  cout << "Total: Rp " << total << endl;

  menuPilih:

  cout << "Pilih 1 untuk kembali ke menu utama \n";
  cout << "Pilih 2 untuk keluar dari aplikasi \n";

  cout << "Pilih : ";
  cin >> pilih;

  if (pilih == 1){
    goto menuUtama;
  } else if (pilih == 2){
    cout << "Terima Kasih";
  } else {
    cout <<"Tidak ada pilihan \n";
    goto menuPilih;
  }



}
