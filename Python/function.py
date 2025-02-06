def multiple_return():
    return 1, "Hello", True     # 函数的多返回值
x, y, z = multiple_return()

print(x)
print(y)
print(z)


def user_info(name, age, gender):
    print("%s，%s岁，%s的，是学生" %(name, age, gender)) 
     
user_info("DZU", 18, "男")  # 位置参数
user_info(age = 17, gender = "男", name = "KOCH")   # 关键字参数
user_info("POLO", gender = "男", age = 17)  # 位置参数在关键字参数之前
# user_info(age = 18, name = "KURUC", "男") 报错


def user_info_2(name, age, gender = "男"):  # 缺省参数 / 默认参数 必须写在最后
    print("%s，%s岁，%s的，是学生" %(name, age, gender)) 

user_info_2("KURUC", 18)

def user_info_3(*args): # *args可接受无限多个参数 args为一般命名格式
    args_len = len(args)    # 参数传入元组args
    print(args)
    print(args_len)
    for i in range(args_len):
        print(args[i])
        
user_info_3(1, 2, 3, 4)

def user_info_4(**kwargs):  # **kwargs可接受“键 = 值” kwargs为一般命名格式
    print(kwargs)           # 参数传入kwargs组成字典
    kwargs_len = len(kwargs)
    print(kwargs_len)
    for i in kwargs:
        print(kwargs[i])    # 遍历字典
    
user_info_4(age = 17, gender = "男", name = "KOCH")


def test_function(compute): # 函数作为参数传入函数 f(f(x))
    result = compute(1, 2)
    print(result)
def compute(x, y):
    return x + y

test_function(compute)
test_function(lambda x, y: x * y)

sum = lambda x, y: x + y    # 临时函数 只能单行
print(sum(5, 3))  # 输出: 8

