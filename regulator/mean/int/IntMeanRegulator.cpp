#include "IntMeanRegulator.h"
#include <iostream>

IntMeanRegulator::IntMeanRegulator(int bufferSize) {
    this->mBufferSize = bufferSize;
    this->mBuffer = new LinkedList<int>();
}

IntMeanRegulator::~IntMeanRegulator() {
    delete mBuffer;
}

int IntMeanRegulator::mean(LinkedList<int> *buffer) {
    int value = 0;
    for (int i = 0; i < buffer->size(); ++i) {
        value += buffer->get(i);
    }
    return value / mBufferSize;
}

int IntMeanRegulator::regulate(int value) {
    // if buffer is full then calculate mean value else return as is
    if (mBuffer->size() >= mBufferSize) {
        mBuffer->shift();
        mBuffer->add(value);
        return mean(mBuffer);
    }

    return value;
}
