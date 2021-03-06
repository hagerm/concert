/***********************************************************************
The main function for demonstration of Concert's functionality.

@author Matthew A. Hager
@version October 7, 2017
***********************************************************************/

// Includes
#include <stdio.h>
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "concert.h"

// Runs the code.
int main(int argc, char** argv){

    // Set ups a list of Concerts
    std::vector<Concert::Concert> concerts;
    
    // Used to set and pass dates in to the objects
    std::tm dt; 

    // Setting up the concerts.
    dt.tm_mday = 15;
    dt.tm_mon = 8;
    dt.tm_year = 2017;
    Concert a = Concert("Metallica", {"Matt", "Zach"}, 2, dt);           

    Concert b = Concert();

    dt.tm_mday = 11;
    dt.tm_mon = 8;
    dt.tm_year = 2017;
    Concert c = Concert("Def Leppard", {"Sue"}, 4, dt);

    dt.tm_mday = 28;
    dt.tm_mon = 10;
    dt.tm_year = 3030;
    Concert d = Concert("Boston", {"Matt"}, 10, dt);

    dt.tm_mday = 9;
    dt.tm_mon = 7;
    dt.tm_year = 2016;
    Concert e = Concert("Styx", {"Bob", "Zach"}, 9, dt);

    dt.tm_mday = 11;
    dt.tm_mon = 7;
    dt.tm_year = 11;
    Concert f = Concert("Jynx", {"Matt", "Zach"}, 7, dt);

    dt.tm_mday = 11;
    dt.tm_mon = 7;
    dt.tm_year = 11;
    Concert g = Concert("Bob", {"Matt", "Zach"}, 4, dt);

    dt.tm_mday = 17;
    dt.tm_mon = 3;
    dt.tm_year = 2018;
    Concert h = Concert("Van Halen", {"Matt", "Zach"}, 7, dt);

    dt.tm_mday = 15;
    dt.tm_mon = 6;
    dt.tm_year = 2018;
    Concert i = Concert("Bruno Mars", {"Matt", "Zach"}, 1, dt);

    dt.tm_mday = 6;
    dt.tm_mon = 6;
    dt.tm_year = 2019;
    Concert j = Concert("Two Steps from Hell", {"Matt", "Zach"}, 9, dt);

    // Adding the concerts to the list.
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

    // Prints the concerts
    for (int i = 0; i < 10 ; i++){
        std::cout << concerts[i];
    }
    std::cout << "\n\n";

    // Sorts the concerts given Concerts rules
    std::sort(concerts.begin(), concerts.end());

    // Prints the concerts again.
    for (int i = 0; i < 10 ; i++){
        std::cout << concerts[i];
    }

    return 0;
}
