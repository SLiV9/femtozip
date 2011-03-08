/**
 *   Copyright 2011 Garrick Toubassi
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */
/*
 * SubstringPacker.h
 *
 *  Created on: Mar 2, 2011
 *      Author: gtoubassi
 */

#ifndef SUBSTRINGPACKER_H_
#define SUBSTRINGPACKER_H_

using namespace std;

#include <string>

namespace femtozip {

class SubstringPacker {

private:
    const char *dict;
    int dictLen;

public:

    class Consumer {
    public:
        virtual void encodeLiteral(int aByte) = 0;
        virtual void encodeSubstring(int offset, int length) = 0;
        virtual void endEncoding() = 0;
    };

    SubstringPacker(const char *dictionary, int length);
    ~SubstringPacker();

    void pack(const char *bytes, int length, Consumer& consumer);
};


}

#endif /* SUBSTRINGPACKER_H_ */