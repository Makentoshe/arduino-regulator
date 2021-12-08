#include "MeanRegulator.h"
#include <iostream>

//template<typename T>
//MeanRegulator<T>::MeanRegulator(int bufferSize) {
//    std::cout << bufferSize;
//}
//
//template<typename T>
//T MeanRegulator<T>::regulate(T value) {
//    // if buffer is full then calculate mean value else return as is
//    if (mBuffer->size() >= mBufferSize) {
//        mBuffer->shift();
//        mBuffer->add(value);
//        return mean(mBuffer);
//    }
//
//    return value;
//}
