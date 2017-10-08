#include <stdio.h>
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "concert.h"

int main(int argc, char** argv){

    std::vector<Concert::Concert> concerts;
    std::tm dt;

    dt.tm_mday = 1;
    dt.tm_mon = 3;
    dt.tm_year = 10;
    Concert a = Concert("Metallica", {"Matt", "Zach"}, 2, dt);           

    Concert b = Concert();

    dt.tm_mday = 4;
    dt.tm_mon = 7;
    dt.tm_year = 130;
    Concert c = Concert("Def Leppard", {"Sue"}, 4, dt);

    dt.tm_mday = 28;
    dt.tm_mon = 11;
    dt.tm_year = 1000;
    Concert d = Concert("Boston", {"Matt"}, 10, dt);

    dt.tm_mday = 28;
    dt.tm_mon = 11;
    dt.tm_year = 1000;
    Concert e = Concert("Styx", {"Bob", "Zach"}, 9, dt);

    dt.tm_mday = 28;
    dt.tm_mon = 3;
    dt.tm_year = 10000;
    Concert f = Concert("Metallica", {"Matt", "Zach"}, 2, dt);

    dt.tm_mday = 1;
    dt.tm_mon = 3;
    dt.tm_year = 10;
    Concert g = Concert("Metallica", {"Matt", "Zach"}, 2, dt);

    dt.tm_mday = 1;
    dt.tm_mon = 3;
    dt.tm_year = 10;
    Concert h = Concert("Metallica", {"Matt", "Zach"}, 2, dt);

    dt.tm_mday = 1;
    dt.tm_mon = 3;
    dt.tm_year = 10;
    Concert i = Concert("Metallica", {"Matt", "Zach"}, 2, dt);

    dt.tm_mday = 1;
    dt.tm_mon = 3;
    dt.tm_year = 10;
    Concert j = Concert("Metallica", {"Matt", "Zach"}, 2, dt);

    concerts.push_back(a);
    concerts.push_back(b);
    concerts.push_back(c);
    concerts.push_back(d);
    concerts.push_back(e);
    concerts.push_back(f);
    concerts.push_back(g);
    concerts.push_back(h);
    concerts.push_back(i);
    concerts.push_back(j);

    
    for (int i = 0; i < 10 ; i++){
        std::cout << concerts[i];
    }
    std::cout << "\n\n";

    std::sort(concerts.begin(), concerts.end());

    
    for (int i = 0; i < 10 ; i++){
        std::cout << concerts[i];
    }

    return 0;
}
