#define _CRT_SECURE_NO_WARNINGS // This directive allows the use of scanf and strncpy without errors

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    int age;
    char name[10];
    //char email[30];
};


void swap(struct contact *a, struct contact *b) {
    struct contact temp = *a;
    *a = *b;
    *b = temp;
}


void sort(struct contact**ct1,int rows)
{
	if(*ct1==NULL)
		return;
	for (int i = 0; i < rows; i++) {
	  for (int j = 0; j < rows- i - 1; j++) {
            if((ct1[j]->age) > (ct1[j+1]->age)) {
                swap(ct1[j], ct1[j+1]);
            }
        }
    }
		
}



/*void my_struct_update(struct contact** ct1, int age, char name[], int rows) {
    for (int i = 0; i < rows; i++) {
        if (ct1[i]->age == age) {
            ct1[i]->age = age;
            //strncpy(ct1[i]->name, name, sizeof(ct1[i]->name) - 1); // Buffer size checking
            //strncpy(ct1[i]->email, email, sizeof(ct1[i]->email) - 1); // Buffer size checking
        }
    }
}*/

void my_struct_read(struct contact** ct1, int rows) {
    for (int i = 0; i < rows; i++) {
        printf("Enter name: ");
        scanf("%9s", ct1[i]->name);
        printf("Enter age: ");
        scanf("%d", &ct1[i]->age);
        //printf("Enter email: ");
        //scanf("%29s", ct1[i]->email);
    }
}

void my_struct_display(struct contact** ct1, int rows) {
    for (int i = 0; i < rows; i++) {
        printf("Name: %s\n", ct1[i]->name);
        printf("Phone Number: %d\n", ct1[i]->age);
        //printf("Email: %s\n", ct1[i]->email);
    }
}

struct contact** allocate_mem(int rows) {
    struct contact** ct1 = (struct contact**)malloc(rows * sizeof(struct contact*));
    for (int i = 0; i < rows; i++) {
        ct1[i] = (struct contact*)malloc(sizeof(struct contact));
    }
    return ct1;
}

void deallocate_mem(struct contact** ct1, int rows) {
    for (int i = 0; i < rows; i++) {
        free(ct1[i]);
    }
    free(ct1);
    printf("memory deallocated");
}

int main() {
    int rows = 5;
    struct contact** ct = allocate_mem(rows);

    if (ct == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }

    my_struct_read(ct, rows);
    //char update_name[] = "Bharat";
    //char update_email[] = "@gmail.com";
    //my_struct_update(ct, 100, update_name, update_email, rows);
    my_struct_display(ct, rows);
    deallocate_mem(ct, rows);

    return 0;
}
