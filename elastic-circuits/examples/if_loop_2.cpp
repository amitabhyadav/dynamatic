//------------------------------------------------------------------------
// If loop
//------------------------------------------------------------------------

int if_loop(int a[], int n) {
    int i;
    int tmp;
    int sum = 0;

    for (i = 0; i < n; i++) {
        tmp = a[i];

        if (tmp > 10) {

            sum = tmp + sum;
        }
    }

    return sum;
}
