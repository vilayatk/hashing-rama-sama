#include <iostream>
const size_t SIZE = 20;

// This is ideal hashing
// What that means is we use a hashfunction H(x) = x to
// Create a hashtable
// Yes, it shall take up a lot of space unnecessary
// But Hey! it is faster data retrieval
// 

void InsertKey(int hash_table[], int key)
{
    if (key >= SIZE)
        throw std::invalid_argument("Key is out of bounds for ideal hashing!");
    hash_table[key] = key;
}

int SearchKey(int hash_table[], int key_to_be_found)
{
    if (key_to_be_found >= SIZE)
        throw std::invalid_argument("Key is out of bounds for ideal hashing!");
    
    return hash_table[key_to_be_found] == key_to_be_found ? key_to_be_found : -1;
}

int main()
{
    int hash_table[SIZE];

    InsertKey(hash_table, 12);
    InsertKey(hash_table, 8);
    InsertKey(hash_table, 15);
    InsertKey(hash_table, 12);
    InsertKey(hash_table, 7);

    std::cout << SearchKey(hash_table, 7) << std::endl;
    std::cout << SearchKey(hash_table, 8) << std::endl;
    std::cout << SearchKey(hash_table, 11) << std::endl;
    std::cout << SearchKey(hash_table, 12) << std::endl;

    return 0;
}