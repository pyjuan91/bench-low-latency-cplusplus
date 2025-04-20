#include <benchmark/benchmark.h>

#include <chrono>
#include <random>
#include <vector>

#include "StrictNegateNumber.hpp"

std::vector<double> random_doubles = []() {
  std::vector<double> vec;
  std::mt19937 gen(std::chrono::system_clock::now().time_since_epoch().count());
  std::uniform_real_distribution<double> dis(0.0, 1000000.0);
  for (int i = 0; i < 10000000; ++i) {
    vec.push_back(dis(gen));
  }
  return vec;
}();

static void BM_NormalMethod(benchmark::State& state) {
  StrictNegateNumber sn;
  for (auto _ : state) {
    sn.NormalMethod(123456.789101112);
  }
}

static void BM_LowLatencyMethod(benchmark::State& state) {
  StrictNegateNumber sn;
  for (auto _ : state) {
    sn.LowLatencyMethod(123456.789101112);
  }
}

static void BM_NormalMethodExperiment(benchmark::State& state) {
  StrictNegateNumber sn;
  for (auto _ : state) {
    sn.NormalMethodExperiment(random_doubles);
  }
}

static void BM_LowLatencyMethodExperiment(benchmark::State& state) {
  StrictNegateNumber sn;
  for (auto _ : state) {
    sn.LowLatencyMethodExperiment(random_doubles);
  }
}

BENCHMARK(BM_NormalMethod);
BENCHMARK(BM_LowLatencyMethod);
BENCHMARK(BM_NormalMethodExperiment);
BENCHMARK(BM_LowLatencyMethodExperiment);
BENCHMARK_MAIN();