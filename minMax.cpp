class MinMax {
public:        // must be public to access outside
    long min;
    long max;
};

MinMax minmaxFromArray(long arr[], short length, short index = 0) {
    if (index == length - 1) {
        MinMax base;
        base.min = arr[index];
        base.max = arr[index];
        return base;
    }

    MinMax sub = minmaxFromArray(arr, length, index + 1);
    long current = arr[index];

    MinMax result;
    result.min = (current < sub.min) ? current : sub.min;
    result.max = (current > sub.max) ? current : sub.max;

    return result;
}
