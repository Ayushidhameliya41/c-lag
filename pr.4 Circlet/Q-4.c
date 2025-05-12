
int main() {
    int i, j, s;

    for(i = 1; i < 6; i++) {
        
        for(s = 0; s < i; s++) {
            printf("  ");
        }

        for(j = 0; j < 6 - i; j++) {
            printf("%d ", (i+j)  % 2); 
        }

        printf("\n");
    }

    return 0;
}


/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1*/