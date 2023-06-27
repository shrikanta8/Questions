/*
💡 **Question 1**
Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

**Example 1:**

Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

Output: [1,5]

**Explanation:** Only 1 and 5 appeared in the three arrays.

*/

vector <int> func (int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2 && k<n3){
        if((A[i] == B[j]) && (C[k] ==A[i]) ){
            ans.push_back(A[i]);
            i++,j++,k++;
            while(k<n3 && (C[k] == C[k-1])){ k++; }
            while(i<n1 && (A[i] == A[i-1])){ i++; }
            while(j<n2 && (B[j] == B[j-1])){ j++; }
        }
        else if(A[i] < B[j]){
            i++;
        }
        else if(B[j] < C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    if(ans.size() == 0){
        ans.push_back(-1);
    }
    return ans;
    //code here.
}
