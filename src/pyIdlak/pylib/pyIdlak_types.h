// pyIdlak/pylib/pyIdlak_types.h

// Copyright 2018 CereProc Ltd.  (Authors: David Braude
//                                         Matthew Aylett)

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED
// WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE,
// MERCHANTABLITY OR NON-INFRINGEMENT.
// See the Apache 2 License for the specific language governing permissions and
// limitations under the License.
//


#ifndef KALDI_PYIDLAK_PYLIB_PYIDLAK_TYPES_H_
#define KALDI_PYIDLAK_PYLIB_PYIDLAK_TYPES_H_

#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <complex>

typedef struct PySimpleOptions PySimpleOptions;
typedef struct PyIdlakBuffer PyIdlakBuffer;

// These should be replaced with templates at some point
typedef class PyIdlakSequentialBaseFloatMatrixReader PyIdlakSequentialBaseFloatMatrixReader;
typedef class PyIdlakBaseFloatMatrixWriter PyIdlakBaseFloatMatrixWriter;


#endif // KALDI_PYIDLAK_PYLIB_PYIDLAK_TYPES_H_
