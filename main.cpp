#include <iostream>
#include <string>
#include <cstring>
#include "musicpage.h"

using namespace std;

int main()
{
    //
    yx::MusicPage musicPage;
    musicPage.loadPage();
    musicPage.getMusicInfo();
}