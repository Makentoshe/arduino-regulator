#include "../MeanRegulator.h"
#include "../../../LinkedList.h"

#ifndef IntMeanRegulator_h
#define IntMeanRegulator_h

class IntMeanRegulator : public MeanRegulator<int> {

public:
    explicit IntMeanRegulator(int bufferSize);
    ~IntMeanRegulator();

    int regulate(int value) override;

private:
    int mBufferSize;
    LinkedList<int> *mBuffer;
    int mean(LinkedList<int> *buffer) ;
};

#endif //IntMeanRegulator_h