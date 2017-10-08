#ifndef CONCERT_H
#define CONCERT_H

#include <ctime>
#include <vector>
#include <string>
#include <iostream>


class Concert{

        private:
            std::string concertName;
            std::vector<std::string> friends;
            int desire;
            std::tm datetime;

        public:
            Concert();
            Concert(std::string name, std::vector<std::string> friends,
                    int desire, std::tm date);
            bool operator<(const Concert& other) const;
            std::string get_name() const;
            std::vector<std::string> get_friends() const;
            int get_desire() const;
            std::tm get_date() const;
            friend std::ostream& operator<< (std::ostream &out, const Concert &obj);

};

#endif
