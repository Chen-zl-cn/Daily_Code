import random
from sy_function import *


#�����������������ABS��ORD
ABS = 128
ORD = 128

#�����������֮��ĵ�λ����
unit_1 = ABS/4
unit_2 = unit_1/2
unit_3 = unit_2/2

#����һ�����������б�
abs_1 = []
ord_1 = []
    
#����������������б�
abs_2 = []
ord_2 = []
    
#�����������������б�
abs_3 = []
ord_3 = []

#����һ�����������б�
abs_4 = []
ord_4 = []

#����������������б�
abs_5 = []
ord_5 = []

#�����������������б�
abs_6 = []
ord_6 = []


#����һ���ڵ�����
# while(1):
    # num_of_grd_1 = int(input("������һ���ڵ����������ΧΪ1-8>:"))
    # if num_of_grd_1 >= 1 and num_of_grd_1 <= 8:
        # break
    # else:
        # print("����������\n")

# #��������ڵ�����
# while(1):
    # #�����ڵ�
    # num_of_grd_2 = int(input("����������ڵ����������ΧΪ0-8>:"))
    # if num_of_grd_2 >= 0 and num_of_grd_2 <= 8:
        # break
    # else:
        # print("����������\n")
                
# #���������ڵ�����
# while(1):
    # #�����ڵ�
    # num_of_grd_3 = int(input("�����������ڵ����������ΧΪ0-8>:"))
    # if num_of_grd_3 >= 0 and num_of_grd_3 <= 8:
        # break
    # else:
        # print("����������\n")

# while(1):
    
    # j = 0
    
    # #������������
    # x_o = ABS/2 + (-1) ** random.randint(1,2) * 4
    # y_o = ORD/2 + (-1) ** random.randint(1,2) * 4
    
    # #����һ�����������б�
    # abs_1 = []
    # ord_1 = []
    
    # #����������������б�
    # abs_2 = []
    # ord_2 = []
    
    # #�����������������б�
    # abs_3 = []
    # ord_3 = []
    
    
    # if num_of_grd_1 > 0:
        # #�������Ľڵ���Χ��һ������
        # SRD_1(x_o,y_o,abs_1,ord_1,num_of_grd_1,unit_1)
        
        
        # if num_of_grd_2 > 0:
            # #����һ���ڵ���Χ�Ķ�������
            # count_2 = 0
            # for i in range(1,16,2):
                # SRD_2(abs_1[i],ord_1[i],x_o,y_o,abs_2,ord_2,num_of_grd_2,unit_2)
                # count_2 = count_2 + 1
                # if count_2 == num_of_grd_1:
                    # break
                    
                    
            # if num_of_grd_3 > 0:
                # #ȷ������������±�
                # lit_2 = []
                # D_S(num_of_grd_2,lit_2)#ȷ�����������ڶ����������±�ĺ���
                
                # #��������ڵ���Χ����������
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



#����
#��������������128�ĺ���
Add(abs_4)
Add(abs_5)
Add(abs_6)
# Add(ord_1)
# Add(ord_2)
# Add(ord_3)


print(abs_4+abs_5+abs_6)
print(ord_4+ord_5+ord_6)
