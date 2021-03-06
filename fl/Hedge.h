/*
 Author: Juan Rada-Vilela, Ph.D.
 Copyright (C) 2010-2014 FuzzyLite Limited
 All rights reserved

 This file is part of fuzzylite.

 fuzzylite is free software: you can redistribute it and/or modify it under
 the terms of the GNU Lesser General Public License as published by the Free
 Software Foundation, either version 3 of the License, or (at your option)
 any later version.

 fuzzylite is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with fuzzylite.  If not, see <http://www.gnu.org/licenses/>.

 fuzzylite™ is a trademark of FuzzyLite Limited.

 */

#ifndef FL_HEDGE_H
#define FL_HEDGE_H

#include "fuzzylite.h"

#include <string>

namespace fl {

    class FL_API Hedge {
    public:

        Hedge() {
        }

        virtual ~Hedge() {
        }
        FL_DEFAULT_COPY_AND_MOVE(Hedge)

        virtual std::string name() const = 0;
        virtual scalar hedge(scalar x) const = 0;
        virtual Hedge* clone() const = 0;

    };
}

#endif /* FL_HEDGE_H */
