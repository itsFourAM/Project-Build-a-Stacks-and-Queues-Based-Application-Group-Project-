//Patient.cpp
#include "Patient.h"

Patient::Patient() : name(""), id(0), age(0) {}

Patient::Patient(const std::string& n, int i, int a)
    : name(n), id(i), age(a) {}

std::string Patient::getName() const {
    return name;
}

int Patient::getId() const {
    return id;
}

int Patient::getAge() const {
    return age;
}

void Patient::setName(const std::string& n) {
    name = n;
}

void Patient::setId(int i) {
    id = i;
}

void Patient::setAge(int a) {
    age = a;
}

//Getters
std::ostream& operator<<(std::ostream& os, const Patient& p) {
    os << "[Name: " << p.getName()
       << ", ID#: " << p.getId()
       << ", Age: " << p.getAge() << "]";
    return os;
}