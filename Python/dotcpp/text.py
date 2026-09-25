# sites = {'Google','Taobao', 'Runoob'}
# a = set('abracadabra')
# b = set('alacazam')
# print(a - b)   # {'r', 'b', 'd'} 差集，a有b没有

# t3 = (1,[2,3]) # t3元组中有两个元素
# t3[1].append(4) # 合法，内部列表可变
# print(t3) # (1, [2, 3, 4]) 元组中列表被修改了

# d = {'one': "1 - 菜鸟教程", 2: "2 - 菜鸟工具"}
# print(d['one'])                    # "1 - 菜鸟教程"
# p = dict([('Runoob', 1), ('Google',2), ('Taobao', 3)]) #序列构建字典
# print(p) # {'Runoob': 1, 'Google': 2, 'Taobao': 3}
# print(d.get("none_key"))            # None，安全取值

# original_list = [1, 2, 3]
# new_list = original_list.copy()
# original_list.append(4)
# print(original_list)
# print(new_list)
# original_list.sort(key=lambda x: -x) # 按负数排序，相当于降序
# original_list.pop() # 删除最后一个元素
# print(original_list) # [4, 3, 2, 1]

# import operator

# a = [1, 2]
# b = [2, 3]
# c = [2, 3]
# print("operator.eq(a,b): ", operator.eq(a,b)) # False
# print("operator.eq(c,b): ", operator.eq(c,b)) # True

# # 生成一个 3x3 的矩阵，矩阵元素为行索引和列索引的乘积
# matrix = [i for i in range(3)]
# matrix_1 = [ j for j in range(3)]
# print(matrix)  # 输出: [[0, 0, 0], [0, 1, 2], [0, 2, 4]]
# print(matrix_1)  # 输出: [0, 0, 0, 0, 1, 2, 0, 2, 4]

# c = input("请输入一个数字：")
# print(type(c))
# x = chr(97) # 97是a的ASCII码
# print(x) # 输出: a

text = "Python is a great programming language."
print(text.split(" ",maxsplit=3)) # 输出: ['Python', 'is', 'a', 'great', 'programming', 'language.']