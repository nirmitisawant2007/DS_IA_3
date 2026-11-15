# TRACE REPORT

## 1. Student Details
- PRN: 202602100012
- Subject: Data Structures
- Project: Hash Table Implementation
- Scenario: Mango Varieties

## 2. Personalized Dataset

Last four digits of PRN:

S = 12

Dataset formula:

v[i] = (S + 13 × i) mod 100

Personalized dataset:

12, 25, 38, 51, 64, 77, 90, 3, 16, 29, 42, 55, 68, 81, 94, 7, 20, 33, 46, 59

## 3. Hashing Technique

Division Method:

h(key) = key mod 23

Table size = 23 (chosen implementation assumption).

## 4. Collision Handling

Linear Probing is used to resolve collisions.

If a calculated index is already occupied, the next available index is checked.

Formula:

hᵢ(key) = (h(key) + i) mod 23

## 5. Manual Insertion Trace

| Key | Initial Index | Final Index |
|---:|---:|---:|
| 12 | 12 | 12 |
| 25 | 2 | 2 |
| 38 | 15 | 15 |
| 51 | 5 | 5 |
| 64 | 18 | 18 |
| 77 | 8 | 8 |
| 90 | 21 | 21 |
| 3 | 3 | 3 |
| 16 | 16 | 16 |
| 29 | 6 | 6 |
| 42 | 19 | 19 |
| 55 | 9 | 9 |
| 68 | 22 | 22 |
| 81 | 12 | 13 |
| 94 | 2 | 4 |
| 7 | 7 | 7 |
| 20 | 20 | 20 |
| 33 | 10 | 10 |
| 46 | 0 | 0 |
| 59 | 13 | 14 |

## 6. Final Hash Table

| Index | Value |
|---:|---:|
| 0 | 46 |
| 1 | EMPTY |
| 2 | 25 |
| 3 | 3 |
| 4 | 94 |
| 5 | 51 |
| 6 | 29 |
| 7 | 7 |
| 8 | 77 |
| 9 | 55 |
| 10 | 33 |
| 11 | EMPTY |
| 12 | 12 |
| 13 | 81 |
| 14 | 59 |
| 15 | 38 |
| 16 | 16 |
| 17 | EMPTY |
| 18 | 64 |
| 19 | 42 |
| 20 | 20 |
| 21 | 90 |
| 22 | 68 |

## 7. Trace-Match Report

The manually calculated final hash table was compared with the actual output produced by the C++ program.

The insertion positions and final table should match exactly.

## 8. Conclusion

The program successfully inserts all 20 personalized values into the hash table. The Division Method calculates the initial index, while Linear Probing resolves collisions by checking subsequent positions.