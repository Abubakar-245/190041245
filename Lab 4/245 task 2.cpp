#include <iostream>
#include <string>

using namespace std;

class Flight{
private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;
    float CalFuel(){
        if(distance<=1000){
            return 500;
        }else if(distance <=2000&&distance >1000){
            return 1100;
        }else if(distance>2000){
            return 2200;
        }
    }
public:
    void FeedInfo(int FlightNumber, string Destination, float Distance, float MaxFuelCapacity){
        flightNumber = FlightNumber;
        destination = Destination;
        distance = Distance;
        maxFuelCapacity = MaxFuelCapacity;
        if(MaxFuelCapacity >= CalFuel())
            cout<<"Fuel Capacity is fit for this flight"<<endl;
        else
            cout<<"Not sufficient Fuel Capacity for this flight"<<endl;
    }
    void ShowInfo(){
        cout<<"Flight number: "<<flightNumber<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Distance: "<<distance<<endl;
        cout<<"Max fuel capacity: "<<maxFuelCapacity<<endl;
    }
};

int main()
{
    Flight x;
    x.FeedInfo(234,"Dhaka",1093.8f,1200);

    x.ShowInfo();
}

