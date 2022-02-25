import random
from sy_function import *


#定义坐标轴横纵坐标ABS与ORD
ABS = 128
ORD = 128

#定义各级坐标之间的单位距离
unit_1 = ABS/4
unit_2 = unit_1/2
unit_3 = unit_2/2

#定义一级横纵坐标列表
abs_1 = []
ord_1 = []
    
#定义二级横纵坐标列表
abs_2 = []
ord_2 = []
    
#定义三级横纵坐标列表
abs_3 = []
ord_3 = []

#定义一级横纵坐标列表
abs_4 = []
ord_4 = []

#定义二级横纵坐标列表
abs_5 = []
ord_5 = []

#定义三级横纵坐标列表
abs_6 = []
ord_6 = []


#定义一级节点数量
# while(1):
    # num_of_grd_1 = int(input("请输入一级节点的数量，范围为1-8>:"))
    # if num_of_grd_1 >= 1 and num_of_grd_1 <= 8:
        # break
    # else:
        # print("请重新输入\n")

# #定义二级节点数量
# while(1):
    # #二级节点
    # num_of_grd_2 = int(input("请输入二级节点的数量，范围为0-8>:"))
    # if num_of_grd_2 >= 0 and num_of_grd_2 <= 8:
        # break
    # else:
        # print("请重新输入\n")
                
# #定义三级节点数量
# while(1):
    # #三级节点
    # num_of_grd_3 = int(input("请输入三级节点的数量，范围为0-8>:"))
    # if num_of_grd_3 >= 0 and num_of_grd_3 <= 8:
        # break
    # else:
        # print("请重新输入\n")

# while(1):
    
    # j = 0
    
    # #计算中心坐标
    # x_o = ABS/2 + (-1) ** random.randint(1,2) * 4
    # y_o = ORD/2 + (-1) ** random.randint(1,2) * 4
    
    # #定义一级横纵坐标列表
    # abs_1 = []
    # ord_1 = []
    
    # #定义二级横纵坐标列表
    # abs_2 = []
    # ord_2 = []
    
    # #定义三级横纵坐标列表
    # abs_3 = []
    # ord_3 = []
    
    
    # if num_of_grd_1 > 0:
        # #计算中心节点周围的一级坐标
        # SRD_1(x_o,y_o,abs_1,ord_1,num_of_grd_1,unit_1)
        
        
        # if num_of_grd_2 > 0:
            # #计算一级节点周围的二级坐标
            # count_2 = 0
            # for i in range(1,16,2):
                # SRD_2(abs_1[i],ord_1[i],x_o,y_o,abs_2,ord_2,num_of_grd_2,unit_2)
                # count_2 = count_2 + 1
                # if count_2 == num_of_grd_1:
                    # break
                    
                    
            # if num_of_grd_3 > 0:
                # #确定二级坐标的下标
                # lit_2 = []
                # D_S(num_of_grd_2,lit_2)#确定二级坐标在二级数组中下标的函数
                
                # #计算二级节点周围的三级坐标
                # count_3 = 0
                # for i in lit_2:
                    # if count_3 < num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,1)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 1 and count_3 == num_of_grd_2:
                            # break
                        
                    # elif count_3 < 2*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,3)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 2 and count_3 == 2*num_of_grd_2:
                            # break
                        
                    # elif count_3 < 3*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,5)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 3 and count_3 == 3*num_of_grd_2:
                            # break
                        
                    # elif count_3 < 4*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,7)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 4 and count_3 == 4*num_of_grd_2:
                            # break
                            
                    # elif count_3 < 5*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,9)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 5 and count_3 == 5*num_of_grd_2:
                            # break
                            
                    # elif count_3 < 6*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,11)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 6 and count_3 == 6*num_of_grd_2:
                            # break
                            
                    # elif count_3 < 7*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,13)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 7 and count_3 == 7*num_of_grd_2:
                            # break
                            
                    # elif count_3 < 8*num_of_grd_2:
                        # SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,15)
                        # count_3 = count_3 + 1
                        # if num_of_grd_1 == 8 and count_3 == 8*num_of_grd_2:
                            # break
                    
                    
        # abs_3.append(x_o)
        # ord_3.append(y_o)
            
        # for judge in abs_2:
            # if judge <= 0:
                # j = j+1
                # break

        # for judge in ord_2:
            # if judge <= 0:
                # j=j+1
                # break

        # for judge in abs_3:
            # if judge <= 0:
                # j=j+1
                # break

        # for judge in ord_3:
            # if judge <=0:
                # j=j+1
                # break

    # if j==0:
        # break

# AO(abs_1,ord_1,abs_2,ord_2,abs_3,ord_3,ABS,ORD)
AO(abs_4,ord_4,abs_5,ord_5,abs_6,ord_6,ABS,ORD)

# print(abs_1+abs_2+abs_3)
# print(ord_1+ord_2+ord_3)
# print("\0")



#测试
#给所有坐标增加128的函数
Add(abs_4)
Add(abs_5)
Add(abs_6)
# Add(ord_1)
# Add(ord_2)
# Add(ord_3)


print(abs_4+abs_5+abs_6)
print(ord_4+ord_5+ord_6)
