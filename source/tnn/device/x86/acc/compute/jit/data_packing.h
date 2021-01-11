// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the 
// specific language governing permissions and limitations under the License.


#ifndef TNN_JIT_DATA_PACKING_H_
#define TNN_JIT_DATA_PACKING_H_

#include "type_def.h"
#include "utils/utils.h"
#include "gemm_config.h"

namespace tnn {

template<typename T>
void pack_t(const T * a, dim_t lda, T * b, dim_t ldb, dim_t m, dim_t n, gemm_config<T, T, T> &gemm_conf);

template<typename T>
void pack_n(const T * a, dim_t lda, T * b, dim_t ldb, dim_t m, dim_t n, gemm_config<T, T, T> &gemm_conf);

} // namespace tnn

#endif //TNN_JIT_DATA_PACKING_H_