# 1. 已知一个字符串为 “hello_world_yoyo”，如何得到一个队列 [“hello”,”world”,”yoyo”] ？
# test="hello world yoyo"
# print(test.split("_"))
# split模块将字符串转队列

# 2. 有个列表 [“hello”, “world”, “yoyo”]，如何把列表里面的字符串联起来，得到字符串 “hello_world_yoyo”？
# test=["hello","world","yoyo"]
# print("_".join(test))
# join模块将队列转字符串

# 3. 把字符串 s 中的每个空格替换成”%20”，输入：s = “We are happy.”，输出：“We%20are%20happy.”。
# test="We are happy"
# result=""
# for char in test:
#     if char==" ":
#        result+="%20"
#     else:
#         result+=char
# print(result)
# 字符串不能直接遍历修改，字符串为不可变对象

# test="We are happy"
# print(test.replace(" ","%20"))
# replace模块体块字符串

# 4. Python 如何打印 99 乘法表？ 
# for i in range(1,10):
#     for j in range(1,i+1):
#         print('{}*{}={}\t'.format(j,i,j*i),end="")
#     print()

# i=1
# while i<=9:
#     j=1
#     while j<=i:
#         print("%d*%d=%d"%(i,j,i*j),end=" ")
#         j+=1
#     print()
#     i+=1
# C的printf函数和python的print函数不同
# printf("%d*%d=%d",i,j,j*i);
# print("%d*%d=%d"%(i,j,i*j),end=" ")
# 注意缩进！！！特别是嵌套循环

# 5. 从下标 0 开始索引，找出单词 “welcome” 在字符串“Hello, welcome to my world.” 中出现的位置，找不到返回 -1。
# def test():
#     test="Hello, welcome to my world."
#     world="welcome"
#     if world in test:
#         return test.find(world)
#     else:
#         return -1
# print(test())

# 6. 统计字符串“Hello, welcome to my world.” 中字母 w 出现的次数。
# test="Hello, welcome to my world."
# count=0
# for char in test:
#    if char=="w":
#       count=count+1
# print(count)
# 记数要循环

# 7. 输入一个字符串 str，输出第 m 个只出现过 n 次的字符，如在字符串 gbgkkdehh 中，找出第 2 个只出现 1 次的字符，输出结果：d
# def test(str_test,num,counts):
#     result=[]
#     for i in str_test:
#         count=str_test.count(i,0,len(str_test))
#         if count==num:
#              result.append(i)
#     return result[counts-1]
# print(test("gbgkkdehh",1,2))

# 8. 判断字符串 a = “welcome to my world” 是否包含单词 b = “world”，包含返回 True，不包含返回 False。
# def test():
#     test="Hello, welcome to my world."
#     b="welcome"
#     if b in test:
#         return True
#     else:
#         return False
# print(test())

# 9. 从 0 开始计数，输出指定字符串 A = “hello” 在字符串 B = “hi how are you hello world, hello yoyo!”中第一次出现的位置，如果 B 中不包含 A，则输出 -1。
# def test():
#     test="hi how are you hello world, hello yoyo!"
#     b="hello"
#     if b in test:
#         return test.find(b)
#     else:
#         return -1
# print(test())

# 10. 从 0 开始计数，输出指定字符串 A = “hello”在字符串 B = “hi how are you hello world, hello yoyo!”中最后出现的位置，如果 B 中不包含 A，则输出 -1。
# def test(string,str):
#     last_position=-1
#     while True:
#         position=string.find(str,last_position+1)
#         if position==-1:
#             return last_position
#         last_position=position


# print(test("hi how are you hello world, hello yoyo","hello"))

# s = "hi how are you hello world, hello yoyo!"
# print(s.rfind("hello"))  # 也是输出 29

# 11. 给定一个数 a，判断一个数字是否为奇数或偶数。
# num=int(input("请输入一个整数"))
# if num%2==0:
#     print("偶数")
# else:
#     print("奇数")

# 12. 输入一个姓名，判断是否姓王。
# def test():
#     user_input=input("请输入你的姓名：")
#     if user_input[0]=="王":
#         return "用户姓王"
#     return "用户不姓王"
# print(test())

# 13.如何判断一个字符串是不是纯数字组成？
# def test(num):
#     try:
#         return float(num)
#     except ValueError:
#         return "请输入数字"
# print(test("233f4"))
# 异常处理机制，防止程序崩溃

# 14. 将字符串 a = “This is string example….wow!” 全部转成大写，字符串 b = “Welcome To My World” 全部转成小写。
# a="This is string example...wow!"
# b="Welcome To My World"
# print(a.upper())
# print(b.lower())

# 15. 将字符串 a = “ welcome to my world ”首尾空格去掉
# test=" asdf "
# print(test.strip())
# Python 提供了strip() 方法，可以去除首尾空格，rstrip() 去掉尾部空格，lstrip() 去掉首部空格，replace(" ", “”) 去掉全部空格。

# 16. 将字符串 s = “ajldjlajfdljfddd”，去重并从小到大排序输出”adfjl”。
# def test():
#     s="ajldjlajfdljfddd"
#     str_list=[]
#     for i in s:
#         if i in str_list:
#             str_list.remove(i)
#         str_list.append(i)
#     a=sorted(str_list)
#     return "".join(a)
# print(test())

# 17. 打印出如下图案（菱形）:
# def test():
#     n = 8
#     for i in range(-int(n/2), int(n/2) + 1):
#         print(" " * abs(i), "*" * (n - abs(i) * 2))
# print(test())

# 18.  给一个不多于 5 位的正整数（如 a = 12346），求它是几位数和逆序打印出各位数字。
# x=123
# t=x
# count=0
# ret=0
# while t>0:
#     t=t//10
#     count=count+1
# print(count)
# while x>0:
#     digit=x%10
#     ret=ret*10+digit
#     x=x//10
# print(ret)

# 19. 如果一个 3 位数等于其各位数字的立方和，则称这个数为水仙花数。例如：153 = 13 + 53 + 33，因此 153 就是一个水仙花数。那么如何求 1000 以内的水仙花数（3 位数）。
# def test():
#     for num in range(100,1000):
#         i=num//100
#         j=num//10%10
#         k=num%10
#         if i**3+j**3+k**3==num:
#              print(str(num)+"是水仙花数")
# test()

# 20. 求 1+2+3…+100 相加的和。
# sum=0
# for num in range(1,101):
#     sum=sum+num
# print(sum)

# 21. 计算 1-2+3-4+5-…-100 的值。
# sum=0
# flag=1
# for num in range(1,101):
#     sum=sum+num*flag
#     flag=-flag
# print(sum)

# 22. 现有计算公式 13 + 23 + 33 + 43 + …….+ n3，如何实现：当输入 n = 5 时，输出 225（对应的公式 : 13 + 23 + 33 + 43 + 53 = 225）。
# def test(n):
#     sum=0
#     for i in range(1,n+1):
#         sum+=i*10+3
#     return sum
# print(test(5))

# 23. 已知 a 的值为“hello”，b 的值为“world”，如何交换 a 和 b 的值，得到 a 的值为“world”，b 的值为”hello”？
# a="hello"
# b="world"

# c=a
# a=b
# b=c
# print(a,b)

# 24. 如何判断一个数组是对称数组？ 
# def test():
#     x=[1,2,2,1]
#     if x==x[::-1]:
#         return True
#     return False
# print(test())

# 25. 如果有一个列表 a = [1,3,5,7,11]，那么如何让它反转成 [11,7,5,3,1]，并且取到奇数位值的数字 [1,5,11]？
# def test():
#     s=[1,3,5,7,11]
#     print(s[::-1])
#     count=0
#     for i in s:
#         count+=1
#         if(count%2!=0):
#             print(i)
# test()

# 26. 对列表 a = [1, 6, 8, 11, 9, 1, 8, 6, 8, 7, 8] 中的数字从小到大排序,最大值、最小值和最大的三位。
# s=[1,-4,35,7,53,-9,2,0]
# # print(sorted(s))
# # print(max(s))
# # print(min(s))
# print(sorted(s)[5:])
# for i in s:
#     print(abs(i))