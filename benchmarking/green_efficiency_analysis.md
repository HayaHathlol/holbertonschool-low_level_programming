# Green Tech Efficiency & Benchmarking Analysis

## Measurement Methodology

In this project, I measured the execution time of C programs to understand performance differences and how they relate to software efficiency.

I compiled the programs using GCC with the required flags: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`.

All measurements were performed in the same WSL Ubuntu environment. The programs used `clock()` from `<time.h>` to measure CPU time, and `CLOCKS_PER_SEC` to convert the measurements into seconds.

For `baseline_loop.c`, I measured a computation containing 100,000,000 iterations. One recorded execution time was 0.315796 seconds.

For `comparison_algorithms.c`, I executed the program three times and recorded the execution times of both algorithms. I calculated their average execution times to compare their performance.

For `instrumentation_lab.c`, I measured three phases separately: building the dataset, processing the dataset, and calculating the checksum. I also measured the total execution time.

## Observed Performance Differences

The comparison experiment showed a significant difference between the two algorithms.

The Naive algorithm recorded execution times of 2.579437, 3.556257, and 3.495891 seconds. Its average execution time was approximately 3.210528 seconds.

The Single-pass algorithm recorded 0.000082, 0.000155, and 0.000091 seconds, with an average of approximately 0.000109 seconds.

Based on these averages, the Naive algorithm was approximately 29,365 times slower than the Single-pass algorithm.

The Naive algorithm uses nested loops, resulting in many repeated operations. The Single-pass algorithm uses one loop and processes each element once. However, the algorithms produce different results, so they are not equivalent implementations of the same calculation.

In the instrumentation experiment, the total execution time was 0.001324 seconds. Building the dataset took 0.000470 seconds, processing took 0.000613 seconds, and reducing took 0.000234 seconds.

Processing was the slowest measured phase, while reducing was the fastest.

## Relation Between Runtime and Energy Consumption

Execution time is an important indicator of software efficiency.

Programs that require longer CPU activity may consume more energy, especially when executed repeatedly or at a large scale.

My measurements showed that the Single-pass algorithm completed its work much faster than the Naive algorithm.

This demonstrates how algorithm structure can significantly affect execution time. However, faster execution does not automatically prove lower energy consumption because actual power usage was not measured.

## Limitations of the Experiment

This experiment has several limitations.

First, I measured CPU execution time rather than actual electrical energy consumption in watts or joules.

Second, execution times varied between runs, possibly because of system activity and measurement conditions.

Third, the Single-pass execution times were extremely short, making small timing differences relatively significant.

Additionally, the two comparison algorithms produced different results, which limits conclusions about their relative efficiency for an identical task.

The instrumentation measurements were also based on one recorded run, so they do not establish consistent performance across repeated executions.

## Practical Engineering Takeaway

This project demonstrated the importance of measuring performance instead of relying only on assumptions.

I learned how to compile C programs with strict flags, measure execution time using `clock()`, calculate averages, and compare algorithm performance.

The results showed that nested loops can require substantially more execution time than a single loop, although the comparison must account for differences in program behavior.

As a future software engineer, I can use benchmarking to identify performance bottlenecks and make decisions supported by measurements.

Efficient software development requires correct functionality, reliable measurements, and careful interpretation of results.
