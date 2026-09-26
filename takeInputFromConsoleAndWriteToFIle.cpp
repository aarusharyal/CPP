#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char c;

    // Open stream for output file
    ofstream fout("myFile2.txt");

    if (!fout.is_open()) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    cout << "Enter a sentence: " << endl;

    // Use a do-while loop or fetch character inside while condition to ensure initial reading
    while (cin.get(c) && c != '\n') {
        fout.put(c);
    }

    cout << "File writing completed!!" << endl;

    fout.close();
    return 0;
}
