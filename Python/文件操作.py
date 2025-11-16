# def my_write():
#     file=open("first.txt","w",encoding="utf-8")
#     file.write("这是第一个文件")
#     file.close()
# def my_read():
#     file=open("first.txt","r",encoding="utf-8")
#     print(file.read())
#     file.close()

# if __name__=='__main__':
#     my_write()
#     my_read()

def my_write_list(filename,data_list):
    file=open("demo1.txt","w",encoding="utf-8")
    file.write('写入一行数据')
    file.write('\n')
    file.close()
# 主程序运行
if __name__ == '__main__':
    lst=[]
    my_write_list("demo1.txt",lst)
