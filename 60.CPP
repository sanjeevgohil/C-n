//manipulators of string using operator
#include <iostream>
#include <cstring>
using namespace std;

class Abc
{
    char *nm;
    
	public:
    Abc() : nm(nullptr) {}

    Abc(const char name[])
    {
        nm = new char[strlen(name) + 1];
        std::strcpy(nm, name);
    }

    // Destructor to release allocated memory
    ~Abc()
    {
        delete[] nm;
    }

    void output() const
    {
        cout << "\nName is: " << nm;
    }

    Abc operator+(const Abc& t1) const
    {
        Abc temp;
        temp.nm = new char[strlen(nm) + strlen(t1.nm) + 1];
        std::strcpy(temp.nm, nm);
        std::strcat(temp.nm, t1.nm);
        return temp;
    }
};

int main()
{
    Abc a1("Sanjeev");
    Abc a2(" Gohil");
    Abc a3 = a1 + a2;

    a1.output();
    a2.output();
    a3.output();

    return 0;
}
