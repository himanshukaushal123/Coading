pair<long long, long long> getMinMax(long long a[], int n) {
     pair<long long ,long long>p;
    sort(a,a+n);
    p.first=a[0];
    p.second=a[n-1];
    return p;
}
