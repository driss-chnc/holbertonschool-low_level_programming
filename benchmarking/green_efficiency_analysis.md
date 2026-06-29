Relation Between Runtime and Energy Consumption

Although this project did not directly measure energy consumption, execution time can be used as a useful indicator.
A program that takes longer to complete its work generally keeps the CPU active for a longer period.
As a result, it is likely to consume more energy than a program that finishes more quickly under the same conditions.
The comparison between the naive algorithm and the single-pass algorithm illustrates this idea well.
Since the single-pass algorithm completes the same task much faster, it is expected to use computing resources more efficiently.

Limitations of the Experiment

This experiment has several limitations.
First, the measurements were performed using the clock() function, which measures CPU execution time but does not measure actual electrical power consumption.
In addition, the operating system and background processes can slightly influence execution times, which explains the small differences observed between runs.
Finally, all tests were performed on the same machine and under the same environment,
so the results may be different on other hardware or operating systems.

Practical Engineering Takeaway

This project showed me the importance of measuring performance before trying to optimize a program.
Benchmarking makes it possible to compare different solutions using real measurements instead of assumptions.
It also helps identify which part of a program consumes the most execution time so that optimization efforts can be focused where they will have the greatest impact.
Overall, this project demonstrated that choosing an efficient algorithm and using proper performance measurements are important engineering practices.

