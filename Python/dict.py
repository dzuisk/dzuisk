def main():
    dict1 = {"Key":"Value"} # 定义字典 键值对
    dict2 = dict()  # 定义空字典
    dict3 = {}  # 定义空字典的多种格式
    print(dict1)    # 打印字典
    print(dict2, dict3)
    print(type(dict1), type(dict2), type(dict3))    # 变量类型
    
    dict1 = {"Key":"Value", "Key":"Value2", "Key":"Value3"}
    print(dict1)    # 字典键不可重复 如遇重复则取最后一个键值对
    
    Value1 = dict1["Key"]
    print(Value1)   # 通过[key]取得对应的Value
    
    dict_dict = {"Key": {"Key": "Value"}}
    # 字典的Key可以为字典外的任何数据
    # 而Value可以是任何数据 包括字典
    print(dict_dict)
    
    stu_score_dict = {
        "POLO": {"ENG": 80, "CHINESE": 80, "MATH": 90},
        "KOCH": {"ENG": 90, "CHINESE": 90, "MATH": 70},
        "DZU" : {"ENG": 90, "CHINESE": 85, "MATH": 75}
    }
    print(stu_score_dict["DZU"])
    print(stu_score_dict["KOCH"])
    print(stu_score_dict["POLO"])
    for i in stu_score_dict:
        print(i)    # 取到的是字典的Key
        print(f"\'{i}\': {stu_score_dict[i]}")
    print(stu_score_dict["DZU"]["ENG"]) # 取DZU的ENG 二重字典
    
    dict1 = {"Key1": "Value1", "Key2":"Value2", "Key":"Value"}
    dict1["Key3"] = "Value3"    # 新增元素
    print(dict1)
    dict1["Key"] = "VALUE"  # 字典Key不可重复 如Key已存在 则修改对应的Value
    print(dict1)
    
    A = dict1.pop("Key")    # 取出键为Key的值传入变量A
    print(A, dict1) # 取出后对应键值对从字典中删除    
    
    dict1.clear()   # 清空字典
    print(dict1)
    
    dict1 = {"Key1": "Value1", "Key2":"Value2", "Key3":"Value3"}
    dict1_keys = dict1.keys()   # 取出字典的键
    dict1_values = dict1.values()   # 取出字典的值
    print(dict1_keys, dict1_values)
    
    for Key in dict1.keys():
        print(f"{Key}:{dict1[Key]}")    # for遍历字典
        
    dict1_len = len(dict1)  # 获取字典的长度
    print(dict1_len)    # 等于键的个数
    
    
def dict_exercises():
    
    # 级别为1的员工 级别上升1级 工资增加1000元
    
    employee_dict = {
        "DZU":{"部门": "科技部", "工资": 3000, "级别": 1},
        "KOCH":{"部门": "科技部", "工资": 7000, "级别": 3},
        "POLO":{"部门": "市场部", "工资": 5000, "级别": 2},
        "ANON":{"部门": "市场部", "工资": 4000, "级别": 1},
        "TOMORI":{"部门": "市场部", "工资": 6000, "级别": 2}
    }
    for employee in employee_dict:
        if employee_dict[employee]["级别"] == 1:
            employee_dict[employee]["级别"] += 1
            employee_dict[employee]["工资"] += 1000
        print(employee,employee_dict[employee])
    
# if __name__ == "__main__":
#     main()

dict_exercises()
