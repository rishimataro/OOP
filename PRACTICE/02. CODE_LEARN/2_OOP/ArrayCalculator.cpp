class ArrayCalculator {
    public:
        static int sumOfArray(int arr[], int n) {
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += arr[i];
            }
            return sum;
        }

        static double sumOfArray(double arr[], int n) {
            double sum = 0;
            for(int i = 0; i < n; i++){
                sum += arr[i];
            }
            return sum;
        }
};