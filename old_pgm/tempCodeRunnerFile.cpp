int random_int(int min, int max) {
    srand(time(NULL)); // initialize random seed based on current time
    int random_num = rand() % (max - min + 1) + min; // generate random number between min and max
    return random_num;
}
