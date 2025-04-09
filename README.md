# HandsOn12

## Task 1
**Usage**

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
- Final Result: O(1)
  
**Accounting Method for Dynamic Array Insertions**
- Charge $3 for every insertion.
- Insertion (No Resizing): Actual: $1, Charge: $3, Cred Saved: $2 (3 - 1).
- Insertion (With Resizing): Actual: $C (C for copying C elements), Insertion: $1, Total: C + 1
- Credit Before Resizing: $2C
- Insertion Charge: $3
- Total Available Credit: 2C + 3
- Remaining Credit(After Resizing): (2C + 3) - (c + 1) = C + 2
- Since the bank doesn't go negative, then the Amortized Cost per Insertion is $3
- Final Result: O(1)
