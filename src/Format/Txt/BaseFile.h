/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2012-2015 Falltergeist developers
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef FALLTERGEIST_FORMAT_TXT_BASEFILE_H
#define FALLTERGEIST_FORMAT_TXT_BASEFILE_H

// C++ standard includes
#include <list>

// Falltergeist includes
#include "../../Format/Dat/Item.h"

// Third party includes

namespace Falltergeist
{
namespace Format
{
namespace Txt
{

/**
 * @brief Base class for all TXT file types.
 */
class BaseFile : public Dat::Item
{

public:
    BaseFile(std::ifstream* stream);
    BaseFile(Dat::Entry* datFileEntry);

protected:
    virtual void _initialize() override;

    /**
     * Called when initializing file.
     */
    virtual void _parseText(std::istream& istr) = 0;
};

}
}
}
#endif //FALLTERGEIST_FORMAT_TXT_BASEFILE_H
