class Solution:
  def largestInteger(self, num: int) -> int:
    digits = list(str(num))
    odds = []
    evens = []
    for d in digits:
      if int(d) % 2 != 0:
        odds.append(d)
      else:
        evens.append(d)
    odds.sort(reverse=True)
    evens.sort(reverse=True)
    res = []
    odd_idx = 0
    even_idx = 0
    for d in digits:
      if int(d) % 2 != 0:
        res.append(odds[odd_idx])
        odd_idx += 1
      else:
        res.append(evens[even_idx])
        even_idx += 1
    final_str = "".join(res)
    return int(final_str)