
static int seed;  // static 전역변수는 .c 함수 안에서만 쓸 수 있음.

void my_srand (int s)
{
	seed = s;
}

int my_rand (void) // generator : no input but output
{
	seed = seed * 1103515245 + 12345;

	return((unsigned)(seed/65536) % 32768);
}

