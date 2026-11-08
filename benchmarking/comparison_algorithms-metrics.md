# Comparison Algorithms - Benchmark Results

## Run 1
Naive algorithm result: 625025000  
Naive algorithm time: 2.579437 seconds  
Single-pass algorithm result: 25000  
Single-pass algorithm time: 0.000082 seconds

## Run 2
Naive algorithm result: 625025000  
Naive algorithm time: 3.556257 seconds  
Single-pass algorithm result: 25000  
Single-pass algorithm time: 0.000155 seconds

## Run 3
Naive algorithm result: 625025000  
Naive algorithm time: 3.495891 seconds  
Single-pass algorithm result: 25000  
Single-pass algorithm time: 0.000091 seconds

## Average Execution Time

Naive algorithm:  
(2.579437 + 3.556257 + 3.495891) / 3 = 3.210528 seconds

Single-pass algorithm:  
(0.000082 + 0.000155 + 0.000091) / 3 = 0.000109333 seconds

## Relative Difference

3.210528333 / 0.000109333 = 29364.6

The Naive algorithm is approximately 29,365 times slower than the Single-pass algorithm based on the average execution times.

## Conclusion

The Single-pass algorithm executed much faster than the Naive algorithm. The Naive algorithm uses nested loops, while the Single-pass algorithm uses only one loop.

The two algorithms produce different results, so this comparison demonstrates their runtime differences rather than equivalent implementations of the same computation.
