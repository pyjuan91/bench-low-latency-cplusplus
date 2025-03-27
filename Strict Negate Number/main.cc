#include "StrictNegateNumber.hpp"
#include <benchmark/benchmark.h>

static void BM_NormalMethod(benchmark::State& state) {
  StrictNegateNumber sn;
  for (auto _ : state) {
    sn.NormalMethod(123.456);
  }
}

static void BM_LowLatencyMethod(benchmark::State& state) {
  StrictNegateNumber sn;
  for (auto _ : state) {
    sn.LowLatencyMethod(123.456);
  }
}

BENCHMARK(BM_NormalMethod);
BENCHMARK(BM_LowLatencyMethod);
BENCHMARK_MAIN();