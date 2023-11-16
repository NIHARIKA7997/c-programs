#include <stdio.h>

struct Location {
    char city[50];
    char state[50];
    char country[50];
};

struct Address {
    char street[100];
    int pinCode;
    struct Location location;  // Nested structure
};

struct Person {
    char name[100];
    int age;
    struct Address address;  // Nested structure
};

// Function to display the details of a person's address
void displayPersonDetails(struct Person person) {
    printf("Person Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address:\n");
    printf("  Street: %s\n", person.address.street);
    printf("  Pin Code: %d\n", person.address.pinCode);
    printf("  Location:\n");
    printf("    City: %s\n", person.address.location.city);
    printf("    State: %s\n", person.address.location.state);
    printf("    Country: %s\n", person.address.location.country);
}

int main() {
     struct Person person1 = {
        .name = "kumbh",
        .age = 15,
        .address = {
            .street = "Hyd Street",
            .pinCode = 500001,
            .location = {
                .city = "HYD",
                .state = "TEL",
                .country = "INDIA"
            }
        }
    };

     displayPersonDetails(person1);

    return 0;
}
