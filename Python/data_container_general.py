list1 = [1, 2, 3, 4, 5]
tuple1 = (1, 2, 3, 4, 5)
set1 = {1, 2, 3, 4, 5}
str1 = "12345"
dict1 = {"Key1": 1, "Key2": 2, "Key3": 3, "Key4":4, "Key5":5}

print(max(list1))   # 取最大值
print(max(tuple1))
print(max(set1))
print(max(dict1))
print(max(str1))

print(min(list1))   # 取最小值
print(min(tuple1))
print(min(set1))
print(min(dict1))
print(min(str1))

print(list(list1))
print(list(tuple1))
print(list(set1))
print(list(dict1))  # 字典->列表 取出的是键
print(list(str1))   # 字符串->列表 将字符串切片写入列表

print(tuple(list1))
print(tuple(tuple1))
print(tuple(set1))
print(tuple(dict1))
print(tuple(str1))

print(str(list1))   # 打印结果加双引号
print(str(tuple1))
print(str(set1))
print(str(dict1))
print(str(str1))

print(set(list1)) 
print(set(tuple1))
print(set(set1))
print(set(dict1))   # 字典->集合 拿出键作为集合元素
print(set(str1))    # 字符串->集合 将字符串切片写入集合

print(sorted(list1))    # 从小到大整理排序
print(sorted(tuple1))   # 转换为列表
print(sorted(set1))
print(sorted(dict1))
print(sorted(str1))