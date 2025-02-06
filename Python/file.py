def main():
    f = open("file.txt", "w+", encoding= "UTF-8")
    print(type(f))
    
    f.write("床前明月光\n")
    f.write("床前明月光\n")
    f_r = f.read(5) # 单位是字节 括号留空读取全部
    f_r2 = f.read(6)    # 从上次读取完的位置继续读
    print(f_r)
    print(f_r2)
    f.close()
    print("-"*20)
    
    f = open("file.txt", "r", encoding= "UTF-8")
    f_lines_list = f.readlines()    # 读取文件全部行 封装到列表中
    print(type(f_lines_list))
    print(f_lines_list)
    for i in f_lines_list:
        print(i)
    f.close()
    print("-"*20)
    
    f = open("file.txt", "r", encoding= "UTF-8")
    A = f.readline()    # 读取一行 括号内可写入读取的字节数
    B = f.readline()
    print(A)
    print(B)
    f.close()
    print("-"*20)
    
    for i in open("file.txt", "r", encoding= "UTF-8"):  # for循环打开并遍历文件
        print(i)
    print("-"*20)
    
    with open("file.txt", "r", encoding="UTF-8") as f: # with open打开文件 文件在操作结束后自动关闭
        A = f.readline()
        print(A)
        
def file_exercises():
    with open("file_exercises", "r", encoding = "UTF-8") as f:
        count = 0
        # lines = f.readlines()
        # for i in lines:
        #     word = lines.split(" ")
        #     print(word)
        #     if "itheima" in i:
        #         count+=1
        for lines in f:
            lines = lines.strip()
            word = lines.split(" ")
            print(word)
            if "itheima" in word:
                count+=1
    print(count)            
    
file_exercises()