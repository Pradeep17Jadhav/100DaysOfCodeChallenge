/**
 https://leetcode.com/problems/design-parking-system/
 Learned using this keyword in C++
 Leared a good way to return boolean value instead of using if else
*/

class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big, int medium, int small) {
        this -> big = big;
        this -> medium = medium;
        this -> small = small;
    }
    
    bool addCar(int carType) 
    {
        if(carType == 1)
        {
            return this -> big-- > 0;
        }  
        else if(carType == 2)
        {
            return this -> medium-- > 0;
        }
        else if(carType == 3)
        {
            return this -> small-- > 0;
        }
        return false;
    }
};