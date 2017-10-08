#include <ctime>
#include <vector>
#include <string>
#include <iostream>
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


/*
 *
 */
std::string Concert::get_name() const{
    return this->concertName;
}

std::vector<std::string> Concert::get_friends() const{
    return this->friends;
}

int Concert::get_desire() const{
    return this->desire;
}

std::tm Concert::get_date() const{
    return this->datetime;
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


std::ostream& operator<<(std::ostream os, const Concert& obj){

    std::tm temp = obj.get_date();
    return os <<  obj.get_name() << " on " << temp.tm_mon << '/' <<
           temp.tm_mday << '/' <<  temp.tm_year << "\t" <<
           obj.get_desire() << "\n";
}
