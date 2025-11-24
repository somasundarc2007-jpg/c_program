#include <stdio.h>
#include <string.h>
struct book{
	int id;
	char title[50];
	char author [50];
	
};
int main(){
	struct book b1= {101,"C programming", "dennis ritchie"};
	struct book b2= {102,"Data structures", "mark weiss"};
	struct book b3= {103,"operating system","silberschatz"};
	
	struct book*books[3]={&b1,&b2,&b3};
	int searchID, i, found=0;
	printf("enter book ID to search:");
	scanf("%d", &searchID);
	for(i=0;i<3;i++){
		if(books[i]->id==searchID){
			printf("\nbook found:\n");
			printf("ID:%d\n", books[i]->id);
            printf("Title:%s\n", books[i]->title);
            printf("Author:%s\n", books[i]->author);
            found=1;
            break;
		}
	}
	if(!found){
		printf("book not found\n");
        return 0;
		}
	}
