namespace C#
{
    public class FibbonacciNumber
    {
        public getFibonacciNumber(int n){
            if (n <= 1){
                return n;
            }else{
                return getFibonacciNumber(n - 1) + getFibonacciNumber(n - 2);
            }
        }
    }
}