// By Binu Gaire
// Function to count leading zeros
int countLeadingZero(unsigned long long int noToCountZeros)
{
	unsigned long long int x = 0; 
	unsigned long long int temp = 0;
	int count = 0;
	
	x = noToCountZeros;

	for (int i = 31; i>=0; i--)
	{
		temp = x >> i;
		
		if(temp == 0)
			count++;
		else if(temp == 1)
			break;
	}
	return count;
}
