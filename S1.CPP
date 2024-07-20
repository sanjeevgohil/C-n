//udf manipulators
#include <iostream>
using namespace std;

ostream &custom_right(ostream &out)
{
    out << "<------";
    return out;
}

ostream &custom_left(ostream &out)
{
    out << "------->";
    return out;
}

int main()
{
    cout << endl << "String" << custom_right << "ABCD" << custom_left;
    return 0;
}
