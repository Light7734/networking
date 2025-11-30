#include "./forward_decl.hpp"

// This inclusion will not leak to other header files...
#include "./big.hpp"

IncludedManyTimes::IncludedManyTimes():
    m_large_dependency(new Big { 1 })
{
}

