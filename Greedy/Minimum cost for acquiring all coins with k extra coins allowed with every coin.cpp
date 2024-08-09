int minCost(int coin[], int n, int k)  
{ 
    // sort the coins value 
    sort(coin, coin + n); 
  
    // calculate no. of 
    // coins needed 
    int coins_needed = ceil(1.0 * n /  
                            (k + 1)); 
  
    // calculate sum of  
    // all selected coins 
    int ans = 0; 
    for (int i = 0; i <= coins_needed - 1;  
                                      i++)  
        ans += coin[i]; 
      
    return ans; 
} 
