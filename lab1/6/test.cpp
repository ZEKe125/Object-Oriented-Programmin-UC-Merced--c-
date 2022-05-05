#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Object
{
public:
    static int count;
    Object()
    {
        cout << "Object()" << endl;
        cout << ++count << endl;
    }
    ~Object()
    {
        cout << "~Object()" << endl;
        cout << --count << endl;
    }
};
int Object::count = 0;
Object f(Object someObject)
{
    return someObject;
}
int main(int argc, const char *argv[])
{
    Object myObject;
    Object another = f(myObject);
    return 0;
}
