#ifndef PERSON_H
#define PERSON_H

class PERSON
{
private:
    const char *name;
    int age;
    double height;
    double weight;

public:
    PERSON();
    void setName(const char *name);
    void setAge(int age);
    void setHeight_Weight(double height, double weight);
    void printPerson();
};

#endif //PERSON_H