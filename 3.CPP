#include <iostream.h>
#include <conio>
int main() {
    int i,j,n;

    cout << "Masukkan nilai N: ";
    cin >> n;

    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
        if(i % 2 != 0 && j % 2 != 1){
            cout<<"*";
        }
        else{
            cout<<"=";
        }
        }
        cout << endl;
    }
	getch();
}