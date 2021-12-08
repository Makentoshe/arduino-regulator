#include "../Regulator.h"
#include "../../LinkedList.h"

#ifndef MeanRegulator_h
#define MeanRegulator_h

template<typename T>
class MeanRegulator : public Regulator<T> {

public:
//    MeanRegulator(int bufferSize);
//    //override from Regulator
//    T regulate(T value) override;

//protected:
//    int mBufferSize;
//    LinkedList<T> *mBuffer;
//
//    virtual int mean(LinkedList<T> *buffer) = 0;
};

#endif //MeanRegulator_h
