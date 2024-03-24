class Solution {
    public int trailingZeroes(int n) {
        // EFFICIENT METHOD : Count the number of 5 in prime factorization
        int ans=0;
        while(n>0){
            ans+=n/5;
            n/=5;
        }
        return ans;

        // NAIVE METHOD
      
        // if( n <= 0) return 0;

        // long fact = 1;

        // while(n>0){
        //     fact = fact * n;
        //     n--;
        // }

        // int counter = 0;
        // while((fact % 10) == 0){
        //     counter++;
        //     fact = fact/10;
        // }

        // return counter;
    }
}
