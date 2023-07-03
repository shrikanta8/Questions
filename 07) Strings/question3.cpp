/*
Given two non-negative integers, num1 and num2 represented as string, return *the sum of* num1 *and* num2 *as a string*.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

**Example 1:**

**Input:** num1 = "11", num2 = "123"

**Output:**

"134"
  */

string func(string num1, string num2) {
    int l1 = num1.length()-1, l2 = num2.length()-1, carry=0;
    string ans ="";

    while(l1 >= 0 || l2 >=0 || carry){
        if(l1>=0){
            carry += num1[l1--]-'0';
        }
        if(l2>=0){
            carry += num2[l2--]-'0';
        }
        char dig=(carry%10) + '0';
        ans = dig + ans;        //it will take n^2 time in total. in place of that add it to the end and reverse the final answer
        carry/=10;
    }
    return ans;
}
