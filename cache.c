#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *init(int length)
{	
	char *tmp = (char*) malloc( length);
	memset(tmp, 0, length);
	return tmp;
}

void destroy(char *cache)
{
	free(cache);
}


void update(char *cache, char c)
{
}

int isfull(cache)
{
	return 0;
}

void release(char *cache)
{
}

int find(char *cache, char c)
{
	return 0;
}

void insert (char *cache, char c)
{

}

void usecache(char *cache, char c, int* miss, int *match)
{
	
	if(find(cache, c)) {
		(*match)++;
		update(cache, c);
	} else {
		(miss++);
		if(isfull(cache)){
			release(cache);
		}
		insert(cache, c);
	}
}
void compute(int length, char *input, int *miss, int *match)
{
	char * cache = NULL;
	char c;
	cache = init(length);

	while( (c = *input++) != '\0') {
		usecache(cache, c, miss, match); 	
	}

	destroy(cache);
}

int main()
{

	return 0;
}
