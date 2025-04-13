#include <iostream>

using namespace std;

int main() {
    
    int total = 0;

   
    cout << "FOR LOOP \n" << endl;
    for (int i = 1; i <= 100; i++) {
        cout << i << endl;
    }

   
    cout << "\nFOR LOOP \n" << endl;
    for (int i = 1; i <= 100; i += 2) {
        cout << i << endl;
    }

    cout << "\nFOR LOOP \n" << endl;
    for (int i = 1; i >= -100; i--) {
        cout << i << endl;
    }

  
    cout << "\nFOR LOOP \n" << endl;
    for (int i = 1; i <= 100; i++, total += i) {
        cout << i << " || " << total << endl;
    }

    return 0;
}
