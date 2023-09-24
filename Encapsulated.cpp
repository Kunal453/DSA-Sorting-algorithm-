// Encapsulated-------------------------
#include <iostream>
using namespace std;

class Encap
{
private:
    string name;
    int roll;
    int age;

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getRoll(int roll)
    {
        return roll;
    }
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
int main()
{
    Encap e1;
    e1.setName("Kunal");
    e1.setRoll(10);
    e1.setAge(22);
    cout << e1.getName() << endl;
    cout << e1.getRoll(10) << endl;
    cout << e1.getAge() << endl;
    return 0;
}
