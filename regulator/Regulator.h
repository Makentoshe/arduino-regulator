#ifndef Regulator_h
#define Regulator_h

template<typename T>
class Regulator {
public:
    virtual T regulate(T value) = 0;
};

#endif //Regulator_h