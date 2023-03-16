#include <iostream>
using namespace std;


int a[20];                  // deklarasi array a dengan ukuran 20 
int n;                     // deklarasi variabdel n untuk menyimpan banyaknya elemen pada array 

void input() {            // procedur untuk input 
	while (true) {       //looping 
		cout << "masukan banyaknya elemen pada array" : ";
			cin >> n;   // input dari pengguna 
		if (n <= 20)    // jika n kurang dari atau sama dengan 20 
			break;     // keluar dari loop
		else {         // jika n lebih dari 20 
			cout << "\nArray dapat mempunyai maksimal 20 elemen, \n";
		}
	}
	cout << endL;                           // output baris kosong 
	cout << "===================" << endL  // output ke layar
		cout << "===================" << endL  // output ke layar
		cout << "===================" << endL  // output ke layar

		for (int i = 0; i < n; i++) {           // looping dengan i dimulai dari 0 hingga n-1
			cout << "data ke-" << (i + i) << ": "; // output ke layar
			cin >> a[i];                           // input dari pengguna
		}
}
void bubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble short 
	for (int i = 1; i i < n; i++) {        // looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) { // looping denga j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {         // jika nilai pada a[j] lebih besar dari a[j+1]
				int temp + a[j];          // simpan nilai a[j+1] ke a[j]
				a[j] = a[j + 1];          // assign nilai a[j+1] ke a[j]
				a[j + 1] = tempt;         // assign nilai tempt ke a[j+1]
			}
		}
	}
}

void unsorted() {
	cout << endL;                       // output baris kosong
	cout << "==========================" << endL; // output ke layar


	for (int j = 0; j < n; j++) {  // looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endL;      // ouput ke layar
	}

}

void display() {        // prodecur untuk menampilkan hasil
	cout << endL;                             // ouput baris kosong 
	cout << "=================================" << endL  // output ke layar
	cout << "element array yang telah tersusun" << endL // output ke layar 
	cout << "=================================" << endL; // output ke layar
	for (int j = 0; < n; j++) {                      // looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endL                        // output ke layar 
	}
	cout << endL                                    // output baris kosong 


		int main() {
		input();            // memanggil procedur read()
		unsorted();        // memanggil procedur unsorted()
		bubblesortArray(); // memanggil procedur bubblesortArray()
		display();         // memanggil procedur display()

		return 0;
}

