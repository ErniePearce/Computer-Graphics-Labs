#include <iostream>


class Car {
public:
    std::string make;
    std::string model;
    int year;
    float speed = 0.0f;

    //constructor

    Car();

    Car(const std::string, const std::string, const int);

    //methods
    void outputDetails();
    void accelerate(const float);
    static float mph2kph(const float);
};

void Car::outputDetails()
{

    std::cout << "\nMake: " << make
        << "\nModel: " << model
        << "\nYear: " << year << std::endl;
}

void Car::accelerate(const float increment)
{
    speed = +increment;
    std::cout << "\nThe car has accelerated to " << speed << "mph." << std::endl;
}

float Car::mph2kph(const float speed)
{
    return speed * 1.60934f;
}

Car::Car()
{
    std::cout << "\nCar object created" << std::endl;
}

Car::Car(const std::string makeInput, const std::string modelInput, const int yearInput)
{
    make = makeInput;
    model = modelInput;
    year = yearInput;
    std::cout << "\nCar object created" << std::endl;
}


int main()
{
//converts degrees to radians
    float angleInDegrees = 45.0f;
    float pi = 3.1415927f;

    float angleInRadians = angleInDegrees * pi / 180.0f;

    //output result
    std::cout << angleInDegrees << " degrees is equal to"
        << angleInRadians << " radians." << std::endl;

    //acute or obtuse
    std::cout << "\nIf statements\n-------------" << std::endl;
    std::cout << angleInDegrees << " degrees is an ";

    if (angleInDegrees < 90)
        std::cout << "acute angle." << std::endl;
    else
        std::cout << "obtuse angle." << std::endl;

    //output the first 10 powers of 2
    std::cout << "\nFor loop\n----------" << std::endl;
    int powerOfTwo = 1;

    for (unsigned int i = 0; i < 10; i++)
    {
        powerOfTwo *= 2;
        std::cout << "2^" << i + 1 << " = " << powerOfTwo << std::endl;
    }

    //count the number of steps the collatz sequence takes to reach 1
    int n, step, nsave;
    n = 10;
    step = 0;
    nsave = n;
    std::cout << "\nWhile loop\n-------------\n" << n;

    while (n > 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

        step++;
        std::cout << " ->" << n;
    }
    std::cout << "\n\nThe Collatz sequence starting at " << nsave
        << " took " << step << " steps to reach 1." << std::endl;
   
    //define car object

    Car delorean;
    delorean.make = "Delorean";
    delorean.model = "DMC-12";
    delorean.year = 1981;
    std::cout << "\nClasses\n-------" << std::endl;
    delorean.outputDetails();
    delorean.accelerate(88.0f);
    // Convert speed from mph to kph
    std::cout << "\n" << 88 << " mph is equivalent to " << Car::mph2kph(88.0f) << " kph." << std::endl;

    return 0;

}



