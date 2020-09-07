// By Bikesh Hada
// Function for endian change
unsigned long long int endianChange(unsigned long long int x)
{
	return (((x<<24) & 0xff000000) | ((x<<8) & 0x00ff0000) | ((x>>8) & 0x0000ff00) | ((x>>24) & 0x000000ff));
}
		      	
