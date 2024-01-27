#include <iostream>
using namespace std;
class mobile
{
    public:
    void call()
    {
        cout << "call" << endl;
    }

    void sms()
    {
        cout << "sms" << endl;
    }

    void muzik()
    {
        cout << "muzik" << endl;
    }

    void utube()
    {
        cout << "utube" << endl;
    }
};
int main()
{
    mobile vivo;
    vivo.call();
    vivo.sms();
    vivo.muzik();
    vivo.utube();
    return 0;
}