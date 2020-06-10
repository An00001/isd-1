#ifndef ISD_STERN_H
#define ISD_STERN_H

#if defined(__AVX512DQ__) && defined(__AVX512F__) && defined(__AVX512VL__)
#define AVX512_ENABLED
#endif

#include <m4ri/m4ri.h>
#include <stdint.h>

// Input:
//  - G, a n/2 x n generator matrix
//  - niter, the number of iteration to make
//  - sigma and p, the Stern parameters
//  Output:
//  - min_cw, the lowest codeword found
mzd_t* isd_stern_canteaut_chabaud_p2_sort(mzd_t* G, uint64_t niter, uint64_t sigma);


#endif
