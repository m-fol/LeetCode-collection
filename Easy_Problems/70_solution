class Solution {
public:
    /*int climbStairs(int n) {   
        std::vector<int> c(n+1, 0);
        return calculatorFib(n, c);
    }
    int calculatorFib(int n, std::vector<int> alreadyCalc) {   
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        
        if (alreadyCalc[n] != 0)
            return alreadyCalc[n];
        
        return alreadyCalc[n] = calculatorFib(n-1, alreadyCalc) + calculatorFib(n-2, alreadyCalc);
    }
    int main() {
        std::cout << climbStairs(2) << std::endl;
        std::cout << climbStairs(3) << std::endl; 

        return 0;
    }*/
    int climbStairs(int n){

        std::vector<int> calc(n + 1, 0);

        if (n == 1)
            return 1;

        calc[1] = 1;
        calc[2] = 2;

        for (int i = 3; i <= n; ++i) 
            calc[i] = calc[i - 1] + calc[i - 2];

        return calc[n];

    }
    

};
