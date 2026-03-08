/*
* _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
               if (i % 10){
	       printf("  ");
	       
	       }
                if (!(i % 10 )&& i)
		{
		printf("\n");
		}
         printf("0x%02x", buffer[i]);
        i++;
	}
         printf("\n");
}
~                                                                                                    
~                                                                                                    
~           
