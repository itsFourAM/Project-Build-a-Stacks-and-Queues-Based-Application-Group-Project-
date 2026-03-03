//Patient.h
#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <iostream>

class Patient {
private:
    std::string name;
    int id;
    int age;

public:
    Patient();
    Patient(const std::string& n, int i, int a);

    std::string getName() const;
    int getId() const;
    int getAge() const;

    void setName(const std::string& n);
    void setId(int i);
    void setAge(int a);
};


std::ostream& operator<<(std::ostream& os, const Patient& p);

#endif