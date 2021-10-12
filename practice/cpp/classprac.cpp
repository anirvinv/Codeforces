#include <iostream>

using namespace std;

class A
{
private:
    int myNum;
    string myName;

public:
    A(int num, string name)
    {
        this->myNum = num;
        this->myName = name;
    }
    void print()
    {
        cout << myNum << " " << myName << endl;
    }
};

int main()
{
    A a = A(5, "name");
    a.print();
}
