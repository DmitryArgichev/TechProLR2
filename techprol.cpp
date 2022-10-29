#include <iostream>;

using namespace std ;

class complex_navigation_system {
public:
    string name;
    char vector collection[vec1, vec2, vec3];
    void add_sensor ();
    void measure_acc ();
    void measure_gyro ();
    void measure_position ();
    void list_sensors ();
    void list_sensors_info ();
};

class sensor {
public:
    string name;
    double measurement_unit;
    int measurement_range [min, max]; 
    
};