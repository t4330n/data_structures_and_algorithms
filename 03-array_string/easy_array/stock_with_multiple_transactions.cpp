#include <iostream>
#include <vector>
using namespace std;

// // [Naive Approach] By Trying All Possibility
// // O(2^n) Time and O(n) Space
// int maxProfitRec(vector<int> &price, int start, int end) {
//   int res = 0;

//   for (int i = start; i < end; i++) {
//     for (int j = i + 1; j <= end; j++) {

//       if (price[j] > price[i]) {

//         int curr = (price[j] - price[i]) + maxProfitRec(price, start, i - 1)
//         +
//                    maxProfitRec(price, j + 1, end);
//         res = max(res, curr);
//       }
//     }
//   }
//   return res;
// }

// int maxProfit(vector<int> &prices) {
//   return maxProfitRec(prices, 0, prices.size() - 1);
// }

// int main() {
//   vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
//   cout << maxProfit(prices);
//   return 0;
// }

// // [Better Approach] Using Local Minima and Maxima
// // O(n) Time and O(1) Space
// int maxProfit(vector<int> &prices) {
//   int n = prices.size();

//   int lMin = prices[0];

//   int lMax = prices[0];
//   int res = 0;

//   int i = 0;
//   while (i < n - 1) {

//     while (i < n - 1 && prices[i] >= prices[i + 1]) {
//       i++;
//     }
//     lMin = prices[i];

//     while (i < n - 1 && prices[i] <= prices[i + 1]) {
//       i++;
//     }
//     lMax = prices[i];

//     res = res + (lMax - lMin);
//   }

//   return res;
// }

// int main() {
//   vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
//   cout << maxProfit(prices);
//   return 0;
// }

// [Expected Approach] By Accumulating Profit
// O(n) Time and O(1) Space
int maxProfit(const vector<int> &prices) {
  int res = 0;

  for (int i = 1; i < prices.size(); i++) {
    if (prices[i] > prices[i - 1])
      res += prices[i] - prices[i - 1];
  }

  return res;
}

int main() {
  vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
  cout << maxProfit(prices) << endl;
  return 0;
}