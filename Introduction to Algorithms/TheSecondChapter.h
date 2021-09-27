#pragma once
#ifndef THESECONDCHAPTER_H
#define THESECONDCHAPTER_H
#include "includes.h"

                             /*  2.1  */
//---------------------------------------------------------------------


namespace introductionToAlgorithms
{
    using namespace std;
    


    template<random_access_iterator RandomIt,class _Pr = Less<iter_value_t<RandomIt>>>
    requires predicate<_Pr, iter_value_t<RandomIt>&, iter_value_t<RandomIt>&>
    void insertion_sort(RandomIt First,RandomIt Last,_Pr pre = _Pr())
    {
        auto len = Last - First;
        for (decltype(len) j = 1; j < len; ++j)
        {
            auto const key = First[j];
            auto i = j - 1;
            while (i >= 0 and !pre(First[i], key))
            {
                First[i + 1] = First[i];
                i = i - 1;
            }
            First[i + 1] = key;
        }
    }



}





#endif // THESECONDCHAPTER_H
