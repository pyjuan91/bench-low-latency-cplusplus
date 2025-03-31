# Bench Low-Latency C++

Bench Low-Latency C++, a project where I explore how to build fast C++ applications with a focus on keeping latency as low as possible. This work draws inspiration from ideas in [Building Low Latency Applications with C++](https://www.packtpub.com/product/building-low-latency-applications-with-c/9781837639359), mixes in some Modern C++ techniques, and uses [Google’s Benchmark library](https://github.com/google/benchmark) to measure what’s really happening under the hood. My goal here is to break down complex concepts, show how they play out in code, and highlight the real-world differences they make.

If you’re someone who enjoys digging into performance, writing efficient C++, or just understanding how to make software run faster, I hope you’ll find this project interesting. Let’s get into it.


## What’s This Project About?

Latency matters a lot in certain kinds of software—think about systems where every tiny delay could mean losing money or missing a critical moment, like in trading platforms or real-time simulations. This project is my attempt to figure out how to write C++ that performs at its best on modern hardware. I’m looking at ideas like managing memory smartly, making the most of the CPU’s cache, and avoiding bottlenecks, all while using features from Modern C++ (like C++20) to keep the code clean and effective.

## The Machine I’m Using

I’m running all the experiments on this setup:

- Operating System: Ubuntu 24.04.2 LTS
- Hardware: ASUSTeK COMPUTER INC. E500 G9_WS760T
- Processor: Intel Core i7-14700 (28 threads)
- Memory: 32.0 GiB DDR5

It’s a solid machine that lets me see how these optimizations behave on something close to what you might find in a modern development or production environment.

## What’s Inside

- Low-latency tricks: Things like pre-allocating memory, reducing branches, or writing code that plays nicely with the processor.
- Modern C++ usage: I’m using C++23 features—like concepts or ranges—to write code that’s both fast and readable.
- Google Benchmark: This tool helps me measure performance precisely, down to the nanosecond.
- Real examples: I’ve included demos that compare a straightforward approach to an optimized one, so you can see the difference.

## How to Get Started

- A C++20-compatible compiler (GCC 13 or Clang 16 should work fine).
- CMake 3.22 or higher.
- Google Benchmark library (it’s included as a submodule).
- A Linux system like Ubuntu for the best benchmarking consistency.


