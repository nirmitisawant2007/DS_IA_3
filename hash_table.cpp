#include <iostream>
using namespace std;

#define TABLE_SIZE 23
#define DATA_SIZE 20

class HashTable {
private:
    int table[TABLE_SIZE];

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = -1;
        }
    }

    // Division Method Hash Function
    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    // Insert using Linear Probing
    void insert(int key) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (table[index] != -1) {
            index = (index + 1) % TABLE_SIZE;

            if (index == originalIndex) {
                cout << "Hash table is full!" << endl;
                return;
            }
        }

        table[index] = key;

        cout << "Inserted " << key
             << " at index " << index << endl;
    }

    // Display Hash Table
    void display() {
        cout << "\nFinal Hash Table\n";
        cout << "-------------------------\n";
        cout << "Index\tValue\n";

        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << "\t";

            if (table[i] == -1)
                cout << "EMPTY";
            else
                cout << table[i];

            cout << endl;
        }
    }
};

int main() {

    HashTable ht;

    // Personalized dataset for PRN 202602100012
    int values[DATA_SIZE] = {
        12, 25, 38, 51, 64,
        77, 90, 3, 16, 29,
        42, 55, 68, 81, 94,
        7, 20, 33, 46, 59
    };

    cout << "DATA STRUCTURES INTERNAL ACTIVITY 3\n";
    cout << "PRN: 202602100012\n";
    cout << "Hashing: Division Method\n";
    cout << "Collision Handling: Linear Probing\n";
    cout << "Table Size: " << TABLE_SIZE << endl;

    cout << "\nInsertion Process\n";
    cout << "-------------------------\n";

    for (int i = 0; i < DATA_SIZE; i++) {
        ht.insert(values[i]);
    }

    ht.display();

    return 0;
}