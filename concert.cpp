/***********************************************************************
Implementation file for Concert's methods.

@author Matthew A. Hager
@version October 7, 2017
***********************************************************************/

// Includes
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
#include "concert.h"

/***********************************************************************
Concert constructor
@param None
@return Returns a default object of type Concert
***********************************************************************/
Concert::Concert(){

    this->concertName = "No name";
    this->friends = {"No friends"};
    this->desire = 1;
    this->datetime.tm_year = 0;
    this->datetime.tm_mon = 0;
    this->datetime.tm_mday = 1;

}

/***********************************************************************
Concert constructor
@param name A std::string that is the name of the concert.
@param friends A std::vector<std::string> that is a list of friends 
               attending.
@param desire A int representing the desire to see the concert 
@param date A std::tm that hold information about the concert date. Only
            the year, mon, and mday parts of std::tm are needed.
@return Returns a set object of type Concert
***********************************************************************/
Concert::Concert(std::string name, std::vector<std::string> friends,
                 int desire, std::tm date){

    this->concertName = name;
    this->friends = friends;
    this->desire = desire;
    this->datetime = date;

}

/***********************************************************************
Getter Methods
***********************************************************************/
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

/***********************************************************************
Operator overload of '<'. Prioty of Years, then Month, then day. 
otherwise we give priorty to higher values of desire.
@param other A reference to a concert to compare to.
@return Returns a bool value given the above logic after comparing the
        2 passed concerts.
***********************************************************************/
bool Concert::operator<(const Concert& other) const{
    
    if (this->datetime.tm_year < other.datetime.tm_year){
        return true;
    }
    if (this->datetime.tm_year == other.datetime.tm_year &&
        this->datetime.tm_mon < other.datetime.tm_mon){
        return true;
    }
    if (this->datetime.tm_year == other.datetime.tm_year &&
        this->datetime.tm_mon == other.datetime.tm_mon &&
        this->datetime.tm_mday < other.datetime.tm_mday){
        return true;
    }
    if (this->datetime.tm_year == other.datetime.tm_year &&
        this->datetime.tm_mon == other.datetime.tm_mon &&
        this->datetime.tm_mday == other.datetime.tm_mday &&
        this->desire > other.desire){
        return true;
    }

    return false;
}

/***********************************************************************
Overload for the '<<' outstream operator. Learned from source [1]
@param os std::ostream& That is being used: via stream << Concert.
@return Returns the stream.
***********************************************************************/
std::ostream& operator<<(std::ostream& os, const Concert& obj){

    std::tm temp = obj.get_date();
    return os <<  obj.get_name() << " on " << temp.tm_mon << '/' <<
           temp.tm_mday << '/' <<  temp.tm_year << "\t" <<
           obj.get_desire() << "\n";
}

/***********************************************************************
source
[1]:
http://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/
***********************************************************************/
