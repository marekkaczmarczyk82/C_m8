#include <stdio.h>
#include <string.h>

	int strrindex( char s[], char t[] );

		int main()
		{
			int i, j, k, pos;

			for( i = 0; i < 100; i++, j++, k++, pos++ )
			{
				printf( "%d %d %d %d\t", i, j, k, pos );
			}

			
						

		}

			int strrindex( char s[], char t[] )
			{
				int i, j, k, pos;

					pos = -1;

						for( i = 0; s[i] != '0'; i++ )
						{
							for( j = i, k = 0; t[k] != '0' && s[j] == t[k]; j++, k++ )
								;
							if( k > 0 && t[k] == '0' )
								pos = i;
						}
						return pos;
			}
