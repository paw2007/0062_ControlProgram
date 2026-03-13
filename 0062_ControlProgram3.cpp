#include <iostream>
using namespace std;

float Rata_rata(float a,float b){
    return (a+b) / 2;
}

string Status_lulus(float a){
    if (a >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    float nilBI,nilMTK,rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilMTK;

    //rerata = (nilBI+nilMTK) / 2;
    //if (rerata >= 60)
    //    status = "Lolos";
    //else
    //    status = "Gagal";
    rerata = Rata_rata(nilBI,nilMTK);
    //status = Status_lulus(rerata);

   