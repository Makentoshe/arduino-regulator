#include <cstdint>
#include "../../Regulator.h"
#include "../../../LinkedList.h"

#ifndef UInt8MeanRegulator_h
#define UInt8MeanRegulator_h

class UInt8MeanRegulator : public Regulator<uint8_t> {

public:
    explicit UInt8MeanRegulator(int bufferSize);
    ~UInt8MeanRegulator();
    uint8_t regulate(uint8_t value) override;

private:
    int mBufferSize;
    LinkedList<uint8_t> *mBuffer;
    uint8_t mean(LinkedList<uint8_t> *buffer) const;
};


#endif //UInt8MeanRegulator_h
