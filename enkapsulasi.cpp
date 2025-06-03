#include <iostream>
using namespace std;

class remoteLampu{
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
     string getSaklarNo(int i) {
        return saklarNo[i];
     }
};

int main(){
    remoteLampu LampuRumah;

    LampuRumah.setSaklarNo(1,"Lampu teras rumah");
    LampuRumah.setSaklarNo(2,"Lampu ruang tamu");
    LampuRumah.setSaklarNo(3,"Lampu kamar tidur");
    LampuRumah.setSaklarNo(4,"Lampu dapur");

    cout << LampuRumah.getSaklarNo(1) << endl;
    cout << LampuRumah.getSaklarNo(2) << endl;
    cout << LampuRumah.getSaklarNo(3) << endl;
    cout << LampuRumah.getSaklarNo(4) << endl;
    return 0;
}
