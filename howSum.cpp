#include <optional>
#include <vector>

std::optional<std::vector<int>> 
howSum(int targetSum, const std::vector<int>& numbers) {
  if (targetSum == 0) 
    return std::vector<int>{};
  if (targetSum < 0) 
    return std::nullopt;
  for (auto numer : numbers) {
    const auto remainder = targetSum - numer;
    auto remainderResult = howSum(remainder, numbers);
    if (remainderResult) {
      remainderResult->push_back(targetSum);
      return remainderResult;
    }
  }
  return std::nullopt;
}