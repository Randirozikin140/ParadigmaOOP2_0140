#include  <iostream>
using namespace std;

class AbstraksiKlas {
    private:
    string x,y;

    public:
    // method untuk mengisi nilai
    //private number
    void setX(string a, string b) {
        x = a;
        y = b;
    }

    //menampilkan nilai
    void display(){
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }


};
