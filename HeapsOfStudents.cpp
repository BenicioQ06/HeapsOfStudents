#include <iostream>
#include <string>

class Address {
	private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    
Address() {
        street = "";
        city = "";
        state = "";
        zip = "";
    }

    void init(std::string streetValue, std::string cityValue,
              std::string stateValue, std::string zipValue) {
        street = streetValue;
        city = cityValue;
        state = stateValue;
        zip = zipValue;
    }

    void printAddress() {
        std::cout << street << std::endl;
        std::cout << city << " " << state << ", " << zip << std::endl;
    }
};

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date() {
        month = 1;
        day = 1;
        year = 2000;
    }

    void init(std::string dateString) {
        month = std::stoi(dateString.substr(0, 2));
        day = std::stoi(dateString.substr(3, 2));
        year = std::stoi(dateString.substr(6, 4));
    }

    void printDate() {
        std::string monthNames[12] = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };

        if (month >= 1 && month <= 12) {
            std::cout << monthNames[month - 1] << " ";
        } else {
            std::cout << month << "/";
        }

        std::cout << day << ", " << year << std::endl;
    }
};

void testAddress() {
    Address a;

    a.init("123 W Main St", "Muncie", "IN", "47303");
    a.printAddress();
}

void testDate() {
    Date d;

    d.init("01/27/1997");
    d.printDate();
}

int main() {
    std::cout << "Hello!" << std::endl;

    testAddress();
    testDate();

    return 0;
