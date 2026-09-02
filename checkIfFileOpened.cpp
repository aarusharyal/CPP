#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Attempt to open "data.txt" for reading
    ifstream file("data.txt");

    // Check if the file stream opened successfully
    if (file.is_open()) {
        cout << "File opened successfully!" << endl;

        // Perform file operations here...

        file.close(); // Close stream after finishing operations
    } else {
        cout << "File could not be opened." << endl;
    }

    return 0;
}
