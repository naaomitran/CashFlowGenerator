#include <iostream>
#include <cmath>

using namespace std;

class BalanceSheet {
    public:
        string assets[100];
    
    void enter() {
        
        int count;

        cout << "Enter number of current assets: " << endl;
        cin >> count;

        string type;
        int change;
        int opResult;
        if (count > 0 && count <= 100) {
            for (int i = 0; i < count ; i++) { 
                cout << "Enter type of asset: " << endl;
                cin.ignore();
                getline(cin, type);

                cout << "Enter change in " << type << " (previous year - current year): " << endl;
            
                cin >> change;
                opResult += change;
        
                assets[i] = type;
            }
        }
        
    }

    void doChange(string asset) {

    }
};

int main() {

    BalanceSheet bs;

    bs.enter();


}

