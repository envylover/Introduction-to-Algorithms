#pragma once
#ifndef INCLUDES_H
#define INCLUDES_H
#include<concepts>
#include<limits>
#include<iterator>
#include<type_traits>
namespace introductionToAlgorithms
{



    template<typename Ty>
    struct Less
    {
        bool operator ()(Ty && a, Ty && b) {
            return a < b;
        }
    };
    template<>
    struct Less<float>
    {
        bool operator ()(float & a, float & b) {
            auto deta = a - b;
            if (deta < 0.0)
            {
                if (0.0f - deta > std::numeric_limits<float>::epsilon())
                    return true;
                return false;
            }
            return false;
        }
    };

   
    template<>
    struct Less<double>
    {
        bool operator ()(double & a, double & b) {
            auto deta = a - b;
            if (deta < 0.0)
            {
                if (0.0f - deta > std::numeric_limits<double>::epsilon())
                    return true;
                return false;
            }
            return false;
        }
    };

}
#endif