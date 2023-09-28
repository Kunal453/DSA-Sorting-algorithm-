#include <iostream>
using namespace std;

class pa
{
public:
    void show()
    {
        cout << "Inside pa" << endl;
    }
};
class pb : public pa
{
public:
    void show()
    {
        cout << "Inside pb" << endl;
    }
};
class pc : public pa
{
public:
    void show()
    {
        cout << "Inside pc" << endl;
    }
};
int main()
{
    pb p;
    p.show();
    pc r;
    r.show();
}
