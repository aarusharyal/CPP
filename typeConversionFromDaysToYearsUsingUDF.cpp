#include <iostream>

class Years;

class Days {
public:
    explicit Days(int d) : days(d) {}

    // User-defined conversion from Days to Years
    operator Years() const;

    int value() const { return days; }

private:
    int days;
};

class Years {
public:
    explicit Years(double y) : years(y) {}

    double value() const { return years; }

private:
    double years;
};

// Define the conversion operator after Years is known
Days::operator Years() const {
    return Years(days / 365.0);
}

int main() {
    int inputDays;
    std::cout << "Enter number of days: ";
    std::cin >> inputDays;

    Days d(inputDays);
    Years y = d; // user-defined conversion

    std::cout << inputDays << " days is approximately " << y.value() << " years." << std::endl;
    return 0;
}
