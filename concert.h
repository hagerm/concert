#ifndef CONCERT_H
#define CONCERT_H

#include <ctime>
#include <vector>
#include <string>

class Concert{

        private:
            std::string concertName;
            std::vector<std::string> friends;
            int desire;
            std::tm datetime;

        public:
            Concert();
            Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date);
            bool operator<(const Concert& other) const;

};

#endif
