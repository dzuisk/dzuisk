# 在Python中，元组（tuple）是一种不可变的序列数据类型。以下是关于元组的详细介绍：
# 定义与创建
# 元组使用圆括号 () 来定义，元素之间用逗号 , 分隔。例如：
my_tuple = (1, 2, 3)
print(my_tuple) 

# 也可以创建一个空元组：
empty_tuple = ()
print(empty_tuple) 

# 当元组中只有一个元素时，需要在元素后面加上逗号，以区别于数学运算中的括号：
single_element_tuple = (42,) 
print(single_element_tuple) 

# 还可以直接使用 tuple() 函数创建元组，该函数可以接受一个可迭代对象作为参数，如列表、字符串等：
from_list = tuple([5, 6, 7])
from_string = tuple("abc")
print(from_list) 
print(from_string) 

# 元素访问
# 元组中的元素可以通过索引来访问，索引从 0 开始。例如：
my_tuple = (10, 20, 30, 40)
print(my_tuple[0]) 
print(my_tuple[2]) 

# 也可以使用负索引，从元组的末尾开始计数，-1 表示最后一个元素，-2 表示倒数第二个元素，以此类推：
print(my_tuple[-1]) 
print(my_tuple[-2]) 

# 元组的不可变性
# 元组的一个重要特性是不可变，这意味着一旦元组被创建，就不能修改其元素。例如，以下操作会引发错误：
my_tuple = (1, 2, 3)
# 尝试修改元组元素，会报错
# my_tuple[0] = 10 

# 虽然元组本身不可变，但如果元组中包含可变对象（如列表），那么可变对象内部的元素是可以修改的：
mixed_tuple = (1, [2, 3], 4)
mixed_tuple[1][0] = 20
print(mixed_tuple) 

# 常用操作

# 连接（Concatenation）：可以使用 + 运算符连接两个或多个元组：

tuple1 = (1, 2)
tuple2 = (3, 4)
new_tuple = tuple1 + tuple2
print(new_tuple) 


# 重复（Repetition）：使用 * 运算符可以重复元组中的元素：

repeat_tuple = (5, 6) * 3
print(repeat_tuple) 


# 长度（Length）：使用内置函数 len() 可以获取元组的元素个数：

my_tuple = (1, 2, 3, 4, 5)
print(len(my_tuple)) 


# 成员检查（Membership Checking）：使用 in 关键字可以检查某个元素是否存在于元组中：

my_tuple = (10, 20, 30)
print(20 in my_tuple) 
print(40 in my_tuple) 

# 应用场景
# 元组常用于需要保护数据不被意外修改的场景，例如函数返回多个值时，返回值会被包装成一个元组。
# 另外，在一些需要固定顺序且数据不应该被更改的数据结构中，元组也非常有用，比如表示坐标点 (x, y)  。