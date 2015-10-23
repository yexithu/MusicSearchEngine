#ifndef CHARSTRING_H
#define CHARSTRING_H
#include <string>
using namespace std;
namespace yx {
    class CharString
    {
    public:
        char *data;
        int length;
        int capacity;

        CharString();
        ~CharString();
        
        void fromString(string cstring);
        void toSring();
    };
}

#endif