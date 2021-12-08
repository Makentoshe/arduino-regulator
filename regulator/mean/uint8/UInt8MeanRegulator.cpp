#include "UInt8MeanRegulator.h"
#include <iostream>

uint8_t UInt8MeanRegulator::mean(LinkedList<uint8_t> *buffer) const {
    uint8_t value = 0;
    for (int i = 0; i < buffer->size(); ++i) {
        value += buffer->get(i);
    }
    return value / mBufferSize;
}

UInt8MeanRegulator::UInt8MeanRegulator(int bufferSize) {
    this->mBufferSize = bufferSize;
    this->mBuffer = new LinkedList<uint8_t>();
}

uint8_t UInt8MeanRegulator::regulate(uint8_t value) {
    // if buffer is full then calculate mean value else return as is
    if (mBuffer->size() >= mBufferSize) {
        mBuffer->shift();
        mBuffer->add(value);
        return mean(mBuffer);
    }

    return value;
}

UInt8MeanRegulator::~UInt8MeanRegulator() {
    delete mBuffer;
}
