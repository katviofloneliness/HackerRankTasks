//Recursive Digit Sum

int SuperDigit(string super) {
    long long help = 0;
    string help3;
    if (super.size() == 1) { return stoi(super); }
    for (long long i = 0; i < super.size();i++) {
        help3 = super[i];
        help += stoi(help3);
    }
    return SuperDigit(to_string(help));
}

int superDigit(string n, int k) {
    long long help2 = 0;
    
    help2 = k * SuperDigit(n);
    
    return SuperDigit(to_string(help2));
}
