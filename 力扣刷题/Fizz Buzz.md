
> Problem: [412. Fizz Buzz](https://leetcode.cn/problems/fizz-buzz/description/)

[TOC]

# 思路

> 1、使用for循环遍历1到n的所有数
  2、使用if-elif-else对数字进行筛选

# 解题过程

> 1、使用for循环遍历1到n的所有数
  2、使用if-elif-else对数字进行筛选


# 遇到的问题
> 1、注意代码的缩进，一不注意就报错
  2、answer为空列表，不能直接赋值，要用answer.append
  3、range的区间左闭右开

# 复杂度

- 时间复杂度: $O(n)$
- 空间复杂度: $O(n)$



# Code
```Python3 []
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer=[]
        for i in range(1,n+1):
            if i%3==0 and i%5==0:
                answer.append("FizzBuzz")
            elif i%3==0:
                answer.append("Fizz")
            elif i%5==0:
                answer.append("Buzz")
            else:
                answer.append(str(i))
        return answer
```
  
