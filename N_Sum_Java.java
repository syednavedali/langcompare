public class N_Sum_Java {
    public static void main(String[] args) {
        int N = 1000000000;
        long sum = 0;
        long startTime = System.nanoTime();
        for (int i = 1; i <= N; ++i) {
            sum += i;
        }
        long endTime = System.nanoTime();
        System.out.println("Sum: " + sum);
        System.out.println("Time taken: " + (endTime - startTime) / 1e9 + "s");
    }
}