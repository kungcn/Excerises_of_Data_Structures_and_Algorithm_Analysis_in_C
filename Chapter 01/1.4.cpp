#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void) {
    int answer = 1;
    string filename;  //  like abc.cpp
    cin >> filename;  //  the file name is abc.cpp included in folder
    const char* file = filename.c_str();
    ifstream ifs;
    ifs.open (file, std::ifstream::in);
    string test = "#include <" + filename + ">";
    char temp[MAX];
    ifs.getline(temp, MAX);
    string beToTest = temp;
    while (ifs.good()) {
        if (test[0] != '#' && test[0] != '\n') {
            break;
        }
        else if (beToTest == test) {
            answer = 0;
            break;
        } else {
            ifs.getline(temp, MAX);
            beToTest = temp;
        }
    }
    ifs.close();
    if (answer == 0)
        cout << "Include itself" << endl;
    else
        cout << "Not include itself" << endl;
    return 0;
}
