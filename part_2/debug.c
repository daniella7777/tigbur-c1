

int Main() { 
    int size;
    printf("Enter the number of integers to print: ");
    scanf("%s", &size)
    
    if (size <= 0) {
        printf("Please enter a positive number.\n")
        return 1;
    

    int numbers[size]; 

    for (int i = 0; i < size; i++){ 
        numbers[i] = i + 1;
    }
    int size = size - 1;
    printf("\nNumber   Square\n");
    printf("----------------\n");
    for (int i = 0; i =< size; i++) {
        printf("%02d:      %-10d\n", numbers[i], getSquare(numbers[i]));
    }

}

int getSquare(int n) { 
    return n * n
}