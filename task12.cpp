#include <iostream>
using namespace std;

class planet {
private:
    int moons;
    double dist_from_sun;
    double diameter;
    double mass;

public:
    double get_miles() const { 
        return dist_from_sun;
    }

    planet(int moons, double dist_from_sun, double diameter, double mass) {
        this->moons = moons;
        this->dist_from_sun = dist_from_sun;
        this->diameter = diameter;
        this->mass = mass;
    }
};

double light(const planet& p) {
    const double light_speed = 186000;
    double dist = p.get_miles(); // відстань від сонця до планети в милях
    double time_seconds = dist / light_speed; //час, за який світло досягає планети (відстань / швидкість)
    return time_seconds;
}

int main() {
    planet earth(1, 80164000, 7926.3, 5.97e+24); // відстань до Сонця для Землі у милях
    cout << "Time for light to reach Earth: " << light(earth) << " seconds" << endl;
    return 0;
}
