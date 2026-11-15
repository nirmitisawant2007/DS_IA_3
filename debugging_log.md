# DEBUGGING LOG

## Project Details
- PRN: 202602100012
- Project: Personalized Hash Table Implementation
- Language: C++
- Hashing Method: Division Method
- Collision Handling: Linear Probing

### Entry 1: Selecting Table Size

*Problem:* Initially, a table size of 10 was considered.

*Failed Approach:* A table with 10 positions cannot accommodate all 20 distinct values.

*Solution:* Selected a table size of 23 as an implementation choice to accommodate all 20 values.

*Result:* The selected table size provides sufficient capacity.

### Entry 2: Resolving Collision

*Problem:* During manual tracing, value 59 was initially assigned to index 13.

*Failed Approach:* The initial calculation did not account for the fact that index 13 was already occupied by 81.

*Solution:* Applied Linear Probing:
- Initial index = 59 % 23 = 13.
- Index 13 is occupied.
- Checked index 14.
- Index 14 was empty.
- Inserted 59 at index 14.

*Result:* The manual trace was corrected.

### Entry 3: Program Testing

*Testing:* The C++ program was executed using an online compiler.

*Observation:* The program generated the insertion process and final hash table.

*Verification:* The final table was compared with the manually calculated trace.

*Result:* The implementation was checked against the expected insertion positions.

## Conclusion

The debugging process helped identify an unsuitable initial table-size choice and a collision-handling calculation error. Both were corrected, improving the accuracy of the hash table implementation.