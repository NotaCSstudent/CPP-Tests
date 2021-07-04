#ifndef BOX_
#define BOX_


#include "../includes.hpp"
namespace Boxboi
{
class Box
{
    private:
        int x,y,z;

    public:
        Box(int &a,int &b,int &c) : x(a),y(b),z(c) {}
        Box(int &&a,int &&b,int &&c) : x(a),y(b),z(c) {}
        void show()
        {
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
        }
};
}
#endif