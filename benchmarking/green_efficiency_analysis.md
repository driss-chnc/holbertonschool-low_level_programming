First Project - Baseline Execution Measurement

I measured the execution time using the clock() function from the C standard library.
I compiled each source file using the required GCC flags and executed the program three consecutive times.
After each execution, I recorded the reported execution time and compared the results.
The execution times were slightly different but remained very close to each other,
showing that the benchmark was consistent while still being affected by normal system activity.
In my measurements, the execution time remained around 1.25 seconds during the three executions, with only very small variations.
This confirms that the program behaves consistently and 
that the measured differences are mainly caused by the operating system and background processes rather than changes in the program itself.

Second Project - Algorithmic Efficiency Comparison

During the algorithmic efficiency comparison, I compared two different algorithms solving the same problem: the naive algorithm and the single-pass algorithm.
I observed that the results remained the same for every execution.
The naive algorithm always returned 625025000, while the single-pass algorithm always returned 25000.
The execution times were also consistent across the three runs.
However, the naive algorithm took significantly longer to execute than the single-pass algorithm.
The naive algorithm required approximately 0.93 seconds, while the single-pass algorithm completed the same task in only about 0.000029 seconds.
Comparing the execution times showed a clear difference in performance.
This experiment taught me that the choice of algorithm has a major impact on execution time and that comparing performance helps identify the most efficient solution for a given task.
It also demonstrated that two algorithms can correctly solve a problem while having completely different execution times.
This comparison highlights the importance of selecting an efficient algorithm when developing software.

Last Project - Controlled Instrumentation Experiment

During the controlled instrumentation experiment, I measured the total execution time of the program as well as the execution time of each main function:
-BUILD_DATA
-PROCESS
-REDUCE
The measurements showed that BUILD_DATA was the longest phase, while REDUCE was the fastest.
The total execution time varied slightly between runs, but the results remained consistent. During my measurements,
the total execution time was approximately 0.000323 seconds, while BUILD_DATA required about 0.000145 seconds, PROCESS about 0.000122 seconds, and REDUCE about 0.000050 seconds.
This experiment helped me understand that measuring each part of the program separately is more useful than measuring only the total execution time because it allows us to identify which function takes the most time and where optimization efforts should be focused to improve the program's performance.
It also showed that measuring individual functions makes it easier to locate performance bottlenecks instead of only knowing the overall execution time.
This approach provides more useful information when optimizing software and improving its overall efficiency.





