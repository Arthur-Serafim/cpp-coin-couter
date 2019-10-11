#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> notes {100, 50, 20, 10, 5, 2, 1};
    int total {0};
    
    cout << "How many dolars do you want to withdraw? ";
    cin >> total;
    
    for (int i {0}; i < 7; i++) {
            int modulo {0};
            int total_notes {0};
            int note = notes.at(i);
            int round_note {0};
            
            modulo = total % note;
            round_note = total - modulo;
            total_notes = round_note / note;
            total = modulo;
            
            cout << notes.at(i) << "$: " << total_notes << " notes" << endl;
    }
}