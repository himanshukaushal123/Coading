// To subtract 1 from an odd number means flipping a 1 to a 0.
// To divide an even number by 2 means shifting right by one, dropping a 0.
// After subtracting, you'll always get an even number
// That means: (the number of steps required) = (the total number of bits used to represent the      //                                       number) + (the number of 1 bits that are in there).
    int numberOfSteps(int num) {
       return num == 0 ? 0 : log2(num) + bitset<32>(num).count();
    }
