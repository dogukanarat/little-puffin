/*
 * The MIT License (MIT)
 * Copyright (c) 2021 Dogukan Fikri Arat
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * */

#ifndef Network_hpp
#define Network_hpp

#include <stdio.h>
#include <cstdint>
#include <stdlib.h>
#include <list>

#include "components.hpp"

using namespace Components;

namespace Network
{
    class Packet : public Component
    {
    public:
        Packet();
        uint8_t GetSourceIDHigh();
        uint8_t GetSourceIDLow();
        uint8_t GetTargetIDHigh();
        uint8_t GetTargetIDLow();
        uint8_t GetMessageIDHigh();
        uint8_t GetMessageIDLow();
        std::list<uint8_t> GetPayload();
        uint8_t GetChecksumHigh();
        uint8_t GetChecksumLow();
        static uint8_t GetVersion();
    private:
        std::list<uint8_t> TransmissionBuffer;
        uint8_t SourceIDHigh;
        uint8_t SourceIDLow;
        uint8_t TargetIDHigh;
        uint8_t TargetIDLow;
        uint8_t MessageIDHigh;
        uint8_t MessageIDLow;
    };

    uint32_t GetVersion();
}

#endif