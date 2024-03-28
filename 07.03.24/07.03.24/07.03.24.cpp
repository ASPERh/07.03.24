#include <iostream>
using namespace std;

class Transport {
protected:
    string type;

public:
    Transport(string type) : type(type) {}

    double calculate_time(double distance, int avg_speed) {
        return distance / avg_speed;
    }

    double calculate_price(double distance, double price_per_km) {
        return distance * price_per_km;
    }
};

class Car : public Transport {
public:
    Car() : Transport("Car") {}
};

class Taxi : public Transport {
public:
    Taxi() : Transport("Taxi") {}
};

class Tram : public Transport {
public:
    Tram() : Transport("Tram") {}
};

class Bus : public Transport {
public:
    Bus() : Transport("Bus") {}
};

class Escooter : public Transport {
public:
    Escooter() : Transport("Electro scooter") {}
};

class Train : public Transport {
public:
    Train() : Transport("Train") {}
};

class Airplane : public Transport {
public:
    Airplane() : Transport("Airplane") {}
};

class Bike : public Transport {
public:
    Bike() : Transport("Bike") {}
};

int main() {
    double distance = 475.8;
    int avg_speed_car = 90;
    double price_per_km_car = 0.12;
    int avg_speed_taxi = 70;
    double price_per_km_taxi = 0.15;
    int avg_speed_tram = 40;
    double price_per_km_tram = 0.08;
    int avg_speed_bus = 60;
    double price_per_km_bus = 0.1;
    int avg_speed_escooter = 25;
    double price_per_km_escooter = 0.05;
    int avg_speed_train = 120;
    double price_per_km_train = 0.2;
    int avg_speed_airplane = 800;
    double price_per_km_airplane = 0.5;

    Car car;
    Taxi taxi;
    Tram tram;
    Bus bus;
    Escooter escooter;
    Train train;
    Airplane airplane;
    Bike bike;

    cout << "From Odessa to Kiev:" << "\n";
    cout << "Car - Time: " << car.calculate_time(distance, avg_speed_car) << " hours, Price: $" << car.calculate_price(distance, price_per_km_car) << "\n";
    cout << "Taxi - Time: " << taxi.calculate_time(distance, avg_speed_taxi) << " hours, Price: $" << taxi.calculate_price(distance, price_per_km_taxi) << "\n";
    cout << "Tram - Time: " << tram.calculate_time(distance, avg_speed_tram) << " hours, Price: $" << tram.calculate_price(distance, price_per_km_tram) << "\n";
    cout << "Bus - Time: " << bus.calculate_time(distance, avg_speed_bus) << " hours, Price: $" << bus.calculate_price(distance, price_per_km_bus) << "\n";
    cout << "Electric Scooter - Time: " << escooter.calculate_time(distance, avg_speed_escooter) << " hours, Price: $" << escooter.calculate_price(distance, price_per_km_escooter) << "\n";
    cout << "Train - Time: " << train.calculate_time(distance, avg_speed_train) << " hours, Price: $" << train.calculate_price(distance, price_per_km_train) << "\n";
    cout << "Airplane - Time: " << airplane.calculate_time(distance, avg_speed_airplane) << " hours, Price: $" << airplane.calculate_price(distance, price_per_km_airplane) << "\n";
    cout << "Bike - Time: " << bike.calculate_time(distance, 20) << " hours (assuming average speed of 20 km/h), Price: Not applicable" << "\n";

    return 0;
}