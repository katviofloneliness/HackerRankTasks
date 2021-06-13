

int main() {
    int cases = 0;
    long long n = 0, sq;
    cin >> cases;
    while (cases--) {
        cin >> n;
        sq = sqrt(n);
        for (int i = 2; i <= sq; i++) {
            if (n % i == 0 && n != 2) {
                n=1;
                break;
            }
        }
        if (n == 1) cout << "Not prime\n";
        else cout << "Prime\n";
    }
    return 0;
}
