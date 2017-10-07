#include <ctime>
#include <vector>
#include <string>
#include "concert.h"


Concert::Concert(){

    this->concertName = "No name";
    this->friends = {"No friends"};
    this->desire = 1;
    this->datetime.tm_year = 0;
    this->datetime.tm_mon = 0;
    this->datetime.tm_mday = 1;

}


Concert::Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date){

    this->concertName = name;
    this->friends = friends;
    this->desire = desire;
    this->datetime = date;

}


bool Concert::operator<(const Concert& other) const{
    
    if (this->datetime.tm_year < other.datetime.tm_year){
        return true;
    }

    if (this->datetime.tm_mon < other.datetime.tm_mon){
        return true;
    }

    if (this->datetime.tm_mday < other.datetime.tm_mday){
        return true;
    }

    if (this->desire > other.desire){
        return true;
    }

    return false;
}
