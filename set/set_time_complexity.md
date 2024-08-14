# Set Container Time Complexity

## Insert
*  Element Insertion : logrithmic in container size.
*  Position Insertion : Amortized constant in case of provided position is correct else logrithmic
*  Range Insertion: If K no. of elements to be inserted then K * log(size of container).
*  List Insertion: Same as Range Insertion

## Erase
*  Position Removal (erase(position)), amortized constant.
*  Value Removal (erase(val)), logarithmic in container size.
*  Range Removal (erase(first,last)), linear in the distance between first and last.
