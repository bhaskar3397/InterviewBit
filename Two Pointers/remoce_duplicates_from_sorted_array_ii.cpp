//  https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=0;i<A.size();i++) {
        if(i<A.size()-2 && A[i]!=A[i+1] && A[i]!=A[i+2])
            continue;
        else
            A.erase(remove(A.begin()+i+2, A.end(), A[i]), A.end());
    }
    
    return A.size();
}
