Data Structures Internal Activity 3
Project Title
Personalized Hash Table Implementation Using Mid-Square Hashing and Separate Chaining

Student Details
PRN: 202602100012

Subject: Data Structures

Programming Language: C++

Project Description
This project implements a hash table using the Mid-Square hashing technique and Separate Chaining for collision handling.

The project uses a personalized dataset generated according to the student's PRN. It demonstrates how hashing maps keys to table indices and how separate chaining handles collisions.

Personalized Dataset
PRN last four digits (S) = 12

The dataset is generated using:

v[i] = (S + 13 * i) mod 100

Dataset:

12, 25, 38, 51, 64, 77, 90, 3, 16, 29, 42, 55, 68, 81, 94, 7, 20, 33, 46, 59

Hashing Details
Hashing technique: Mid-Square Method

Collision handling: Separate Chaining

Table size: 10 (implementation assumption; confirm with faculty)

Programming language: C++

For this implementation, the square is padded to four digits, the middle two digits are extracted, and the result is reduced modulo the table size.

Project Files
README.md: Project overview and documentation.

hash_table.cpp: C++ implementation.

output.txt: Actual program output.

trace_report.md: Manual trace and output comparison.

debugging_log.md: Development and debugging records.

Expected Learning Outcomes
Understand the Mid-Square hashing technique.

Implement a hash table in C++.

Handle collisions using Separate Chaining.

Compare manual calculations with actual program output.

Understand incremental project development.
Algorithm
Initialize all hash table positions as empty.

Read the 20 personalized values.

Calculate the hash index using key % 23.

Check whether the calculated index is empty.

If occupied, use Linear Probing to find the next available position.

Insert the value into the available position.

Repeat until all values are inserted.

Display the final hash table.

Compilation and Execution
Compile the program using:

Bash
g++ hash_table.cpp -o hash_table
Execute the program:

Bash
./hash_table
For Windows:

Bash
hash_table.exe
Time Complexity
Average insertion: O(1), assuming a reasonable load factor.

Worst-case insertion: O(n) due to linear probing.

Display operation: O(m), where m is the table size.

Final Result
The project demonstrates successful implementation of a hash table using the Division Method and Linear Probing with 20 personalized values.
