#include <unistd.h>
int main()
{
	int i = 0;
	while (i<5){
		write(1,"Hello",5);
		write(1,"\n",1);
		i++;
	}
	return 0;
}
