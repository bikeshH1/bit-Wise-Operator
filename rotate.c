// By  AASHISH NEPAL
/*Function to right rotate n by d bits*/

unsigned long long int rotate(unsigned long long int numberToBeRotated, int numberOfBits) {
	

	unsigned int numberBits[35], newNumber = 0, j = 31; // array to hold all 32 bits of the number
	// Converting long long unsigned int to unsigned int
	unsigned int modifiedNumber = numberToBeRotated;
	for (int i = 0; i < 32; i++, j--)
	{
		numberBits[j] = modifiedNumber & (1 << i);
	}
	numberOfBits %= 32;
	//Rotate the bits array by n times toward right
	for (int i = 0; i < numberOfBits; i++) {
		int j, last;
		//Stores the last element of the array
		last = numberBits[32 - 1];

		for (j = 32 - 1; j > 0; j--) {
			//Shift element of array by one
			numberBits[j] = numberBits[j - 1];
		}
		//Last element of array will be added to the start of array.
		numberBits[0] = last;
	}
	for (int i = 0 , j =31; i < 32; i++ , j--)
	{
		if (numberBits[j])
		{
			newNumber = newNumber | (1 << i);
		}
	}
	// Converting unsigned int to long long unsigned int
	unsigned long long int newModifiedNumber = newNumber;
	// return newModifiedNumber;
	return newModifiedNumber;
                }
