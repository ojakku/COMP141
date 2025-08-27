class MinMax {
public:
    long min;
    long max;
    MinMax(long a, long b) : min(a), max(b) {}
};

MinMax minmaxFromArray(long arr[], short length, short index = 0) {
    return (index == length - 1)
        ? MinMax(arr[index], arr[index])
        : MinMax(
            (arr[index] < minmaxFromArray(arr, length, index + 1).min)
            ? arr[index]
            : minmaxFromArray(arr, length, index + 1).min,
            (arr[index] > minmaxFromArray(arr, length, index + 1).max)
            ? arr[index]
            : minmaxFromArray(arr, length, index + 1).max
        );
}
