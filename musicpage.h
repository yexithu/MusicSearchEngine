#ifndef MUSICPAGE_H
#define MUSICPAGE_H
#include "charstring.h"

namespace yx {
    class MusicPage
    {
    public:
        MusicPage();
        ~MusicPage();
        void parsePage();
        void loadPage(string fileName);
        void getMusicInfo();
    private:
        CharString htmlContents;
    };
}
#endif