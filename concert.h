/***********************************************************************
Header file for the Concerts class library.

@author Matthew A. Hager
@version October 7, 2017
***********************************************************************/

// Include Guards
#ifndef CONCERT_H
#define CONCERT_H

// Includes for funcionality
#include <ctime>
#include <vector>
#include <string>
#include <iostream>

/***********************************************************************
Class definition.
***********************************************************************/  
class Concert{

        // instance variables
        private:
            std::string concertName;
            std::vector<std::string> friends;
            int desire;
            std::tm datetime;

        // public functions
        public:
            Concert();
            Concert(std::string name, std::vector<std::string> friends,
                    int desire, std::tm date);
            bool operator<(const Concert& other) const;
            std::string get_name() const;
            std::vector<std::string> get_friends() const;
            int get_desire() const;
            std::tm get_date() const;

            // had some difficulties with this. Eventually used the 
            // below source. [1]
            friend std::ostream& operator<< (std::ostream &out,
                                             const Concert &obj);

};

/***********************************************************************
Sources
[1]: 
http://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/
***********************************************************************/

#endif
