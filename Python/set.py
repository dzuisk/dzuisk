def main():
    my_set = {"dzu", "123", "DDD", "dzu", "123", "DDD", "dzu", "123", "DDD"}
    my_set_empty = set()
    print(my_set)
    print(type(my_set))
    print(my_set_empty)
    print(type(my_set_empty))
    # 集合元素不重复 无序 无法使用索引
    
    my_set.add("bento.me/dzu")
    print(f"my_set添加结果后元素是{my_set}")
    my_set.add("dzu")
    print(f"{my_set}")  # 添加重复元素 集合内并不会出现多个该元素
    
    my_set.remove("DDD")    # 删除元素
    print(my_set)   # 此时"DDD"已从集合中删除
    
    A = my_set.pop()    # 随机取出一个元素并传入变量A
    print(A)
    print(my_set)   # 取出时元素被移除 集合改变
    
    my_set = {"dzu", "123", "DDD"}
    my_set.clear()  # 清空集合
    print(my_set)
    
    set1 = {1,2,3}
    set2 = {1,4,5}
    B = set1.difference(set2)   # 取出set1中与set2不同的元素传入B
    print(B)
    print(type(B))  # B的类型为集合
    
    set1.difference_update(set2)    # 将set1中与set2重复的元素删除
    print(set1)
    
    set1 = {1,2,3}
    set2 = {1,4,5}
    set3 = set1.union(set2) # 合并set1和set2 得到新集合set3
    print(set1,"\n",set3)  # set1集合不改变
    
    len_set1 = len(set1)
    len_set3 = len(set3)    # 得到集合的长度 即不重复的元素的个数
    print(len_set1, len_set3)
    
    for i in set1:  # 集合的遍历 由于没有索引 不能使用while
        print(i)    # 使用for直接取出集合中的元素即可
    

    
def set_exercises():
    
    # 定义一个空集合
    # 通过for循环遍历列表
    # 在for循环中将列表的元素添加至集合
    # 最终得到元素去重后的集合对象，并打印输出
    
    my_set = set()
    my_list = ["黑马程序员", "传智播客", "黑马程序员", "传智播客", "itheima", "itcast", "itcast", "best"]    
    for i in my_list:
        my_set.add(i)
    print(my_set)
    
# if __name__ == "__main__":
#     main()

set_exercises()
    