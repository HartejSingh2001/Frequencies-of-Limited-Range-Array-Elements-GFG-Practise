class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
         map<int, int> mp;
       for (int i = 0; i < N; i++)
       {
           mp[arr[i]]++;
       }
   
       for (int j = 1; j <= N; j++)
       {
           int temp = mp[j];
           arr[j - 1] = temp;
       }
    }
};
