void FindPrimes(int &n) {
    int sq = sqrt(n);
    for (int i = 2; i <= sq; i++) {
        if (n % i == 0) {
            n = 1;
            break;
        }
    }
    if (n == 1) cout << "Not prime\n";
    else cout << "Prime\n";
}

int main() {
	int cases = 0;
	int n = 0;
	cin >> cases;
	while (cases--) {
		cin >> n;
        FindPrimes(n);
	}
	return 0;
}
