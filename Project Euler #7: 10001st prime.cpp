bool FindnthPrime(unsigned long n) {
    long sq = sqrt(n);
    for (long i = 2; i <= sq; i++) {
        if (n % i == 0) {
            n = 1;
            break;
        }
    }
    if (n == 1) return false;
    else return true;
}

int main() {
    int k, cases;
    cin >> cases;
    unsigned long i = 3;
    vector<unsigned long> store{ 2,3 };
    while (cases--) {
        cin >> k;
        while (store.size() < k) {
            i += 2;
            if (FindnthPrime(i) == true) {
                store.push_back(i);
            }
        }
        cout << store[k - 1] << endl;
    }
    return 0;
}
