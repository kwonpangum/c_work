# include <stdio.h>

# define BOLD 	(0x01 << 0) // 0x01 // <<0
# define ITALIC 	(0x01 << 1) // 0x02  <<1
# define SHADOW 	(0x01 << 2) // 0x03  <<2
# define UL 	 	(0x01 << 3) // 0x04  <<3


int main(void)
{
	unsigned char attr;
	
	attr = attr ^ attr;
	printf("attr: 0x%02x\n", attr);
		
	attr = attr | BOLD;
	printf("attr: 0x%02x\n", attr);
		
	attr = attr | (SHADOW + ITALIC);
	printf("attr: 0x%02x\n", attr);
		
	attr = attr & (~BOLD);
	printf("attr: 0x%02x\n", attr);
	return 0;
}
