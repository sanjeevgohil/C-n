//file handling (read)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int rno;
    char nm[20];

    ifstream in("other.txt");

    if (!in) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    in >> rno;
    in >> nm;

    in.close();

    cout << "\nRoll no: " << rno;
    cout << "\nName is: " << nm;

    return 0;
}
