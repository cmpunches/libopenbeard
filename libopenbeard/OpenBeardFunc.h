//
// Created by bagira on 5/26/18.
//

#ifndef OPENBEARD_OPENBEARDFUNC_H
#define OPENBEARD_OPENBEARDFUNC_H

#include <iostream>
#include <tgmath.h>

#define FUNC_FAILURE 0
#define FUNC_SUCCESS 1

class BeardDomamaru
{
    public:
        static int calc_followers( long depth, long length, long coverage, unsigned long * followers );
};


#endif //OPENBEARD_OPENBEARDFUNC_H
