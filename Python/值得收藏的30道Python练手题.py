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
