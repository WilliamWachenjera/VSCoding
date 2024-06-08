#include "Universities.h"
#include <cstdlib>

Universities::Universities()
{
    Name = "";
    Location = "";
    TuitionFee = 0;

}
Universities::Universities(const string& name, string location, int tuitionfee){
setName(name);
setLocation(location);
setTuitionfee(tuitionfee);
}
void Universities::setName(const string& name){
this -> Name = name;
}
string Universities::getName()const{
return Name;
}
void Universities::setLocation(string location ){
this -> Location = location;
}
string Universities::getLocation()const{
return Location;
}
void Universities::setTuitionfee(int tuitionfee){
this -> TuitionFee = tuitionfee;
}
int Universities::getTuitionFee() const{
return TuitionFee;
}

Universities::~Universities()
{
    //dtor
}
