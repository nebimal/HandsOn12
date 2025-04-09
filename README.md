# HandsOn12

## Task 1
**Usage**

    ```bash
    g++ DynArr.cpp
    ./a.out
    
**Sample Run**

    Enter integers to add (enter -1 to stop):
    3
    3
    84
    32
    503
    8126
    382
    23
    67
    8
    9
    -1
    Contents of the array:
    3 3 84 32 503 8126 382 23 67 8 9
##  Task 2
**Aggregate Method**
- Each insertion costs 1.
- When the array doubles, t(n) < 2n
- So total cost => 3n
- Therefore the amortized cost per insertion is 3n/n
- O(1)
