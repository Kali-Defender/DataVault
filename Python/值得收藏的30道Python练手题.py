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
#C的printf函数和python的print函数不同
#printf("%d*%d=%d",i,j,j*i);
#print("%d*%d=%d"%(i,j,i*j),end=" ")
#注意缩进！！！特别是嵌套循环

#5. 从下标 0 开始索引，找出单词 “welcome” 在字符串“Hello, welcome to my world.” 中出现的位置，找不到返回 -1。
# def test():
#     test="Hello, welcome to my world."
#     world="welcome"
#     if world in test:
#         return test.find(world)
#     else:
#         return -1
# print(test())

#6. 统计字符串“Hello, welcome to my world.” 中字母 w 出现的次数。
# test="Hello, welcome to my world."
# count=0
# for char in test:
#    if char=="w":
#       count=count+1
# print(count)
# 记数要循环

#7. 输入一个字符串 str，输出第 m 个只出现过 n 次的字符，如在字符串 gbgkkdehh 中，找出第 2 个只出现 1 次的字符，输出结果：d
# def test(str_test,num,counts):
#     result=[]
#     for i in str_test:
#         count=str_test.count(i,0,len(str_test))
#         if count==num:
#              result.append(i)
#     return result[counts-1]
# print(test("gbgkkdehh",1,2))

#8. 判断字符串 a = “welcome to my world” 是否包含单词 b = “world”，包含返回 True，不包含返回 False。
# def test():
#     test="Hello, welcome to my world."
#     b="welcome"
#     if b in test:
#         return True
#     else:
#         return False
# print(test())

#9. 从 0 开始计数，输出指定字符串 A = “hello” 在字符串 B = “hi how are you hello world, hello yoyo!”中第一次出现的位置，如果 B 中不包含 A，则输出 -1。
# def test():
#     test="hi how are you hello world, hello yoyo!"
#     b="hello"
#     if b in test:
#         return test.find(b)
#     else:
#         return -1
# print(test())

#10. 从 0 开始计数，输出指定字符串 A = “hello”在字符串 B = “hi how are you hello world, hello yoyo!”中最后出现的位置，如果 B 中不包含 A，则输出 -1。
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

#11. 给定一个数 a，判断一个数字是否为奇数或偶数。
# num=int(input("请输入一个整数"))
# if num%2==0:
#     print("偶数")
# else:
#     print("奇数")

#12. 输入一个姓名，判断是否姓王。
# def test():
#     user_input=input("请输入你的姓名：")
#     if user_input[0]=="王":
#         return "用户姓王"
#     return "用户不姓王"
# print(test())

#13.如何判断一个字符串是不是纯数字组成？
# def test(num):
#     try:
#         return float(num)
#     except ValueError:
#         return "请输入数字"
# print(test("233f4"))
#异常处理机制，防止程序崩溃

#14. 将字符串 a = “This is string example….wow!” 全部转成大写，字符串 b = “Welcome To My World” 全部转成小写。
# a="This is string example...wow!"
# b="Welcome To My World"
# print(a.upper())
# print(b.lower())

#15. 将字符串 a = “ welcome to my world ”首尾空格去掉
# test=" asdf "
# print(test.strip())
# Python 提供了strip() 方法，可以去除首尾空格，rstrip() 去掉尾部空格，lstrip() 去掉首部空格，replace(" ", “”) 去掉全部空格。

#16. 将字符串 s = “ajldjlajfdljfddd”，去重并从小到大排序输出”adfjl”。
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
