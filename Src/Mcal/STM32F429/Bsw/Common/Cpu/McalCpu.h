/////////////////////////////////////////////////////// 
//  Copyright 2014 Stephan Hage.
//  Copyright 2014 Christopher Kormanyos.
//  Distributed under the Boost 
//  Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt 
//  or copy at http://www.boost.org/LICENSE_1_0.txt ) 
//

#ifndef _MCAL_CPU_2014_10_14_H_
  #define _MCAL_CPU_2014_10_14_H_

  #include <Bsw/Common/Std_Types.h>

  INLINE void McalCpuNop(void) { __asm__ volatile ("nop"); }

  #if defined(__cplusplus)

    namespace mcal
    {
      namespace cpu
      {
        inline void nop(void) { McalCpuNop(); }
      }
    }

  #endif

#endif // _MCAL_CPU_2014_10_14_H_
