import random


#����SRD_1��������һ���ڵ�����
def SRD_1(x,y,abs_1,ord_1,num_of_grd_1,unit_1):
    abs_1.append(x)
    ord_1.append(y)
    for i in range(0,8):
        if i == 0:
            abs_1.append((x-unit_1) + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append((y-unit_1) + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 1:
                break
        elif i == 1:
            abs_1.append((x+unit_1) + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append((y-unit_1) + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 2:
                break
        elif i == 2:
            abs_1.append((x-unit_1) + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append((y+unit_1) + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 3:
                break
        elif i == 3:
            abs_1.append((x+unit_1) + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append((y+unit_1) + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 4:
                break
        elif i == 4:
            abs_1.append(x + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append((y-unit_1) + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 5:
                break
        elif i == 5:
            abs_1.append((x-unit_1) + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append(y + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 6:
                break
        elif i == 6:
            abs_1.append((x+unit_1) + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append(y + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 7:
                break
        elif i == 7:
            abs_1.append(x + (-1) ** random.randint(1,2) * 4)
            abs_1.append(x)
            ord_1.append((y+unit_1) + (-1) ** random.randint(1,2) * 4)
            ord_1.append(y)
            if num_of_grd_1 == 8:
                break
                
#����SRD_2������������ڵ�����
def SRD_2(x,y,x_o,y_o,abs_2,ord_2,num_of_grd_2,unit_2):
    abs_2.append(x_o)
    ord_2.append(y_o)
    abs_2.append(x)
    ord_2.append(y)
    for i in range(0,8):
        if i == 0:
            abs_2.append((x-unit_2) + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append((y-unit_2) + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 1:
                break
        elif i == 1:
            abs_2.append((x+unit_2) + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append((y-unit_2) + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 2:
                break
        elif i == 2:
            abs_2.append((x-unit_2) + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append((y+unit_2) + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 3:
                break
        elif i == 3:
            abs_2.append((x+unit_2) + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append((y+unit_2) + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 4:
                break
        elif i == 4:
            abs_2.append(x + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append((y-unit_2) + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 5:
                break
        elif i == 5:
            abs_2.append((x-unit_2) + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append(y + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 6:
                break
        elif i == 6:
            abs_2.append((x+unit_2) + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append(y + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 7:
                break
        elif i == 7:
            abs_2.append(x + (-1) ** random.randint(1,2) * 1)
            abs_2.append(x)
            ord_2.append((y+unit_2) + (-1) ** random.randint(1,2) * 1)
            ord_2.append(y)
            if num_of_grd_2 == 8:
                break
                
#����SRD_3��������������           
def SRD_3(x,y,x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,z):
    abs_3.append(x_o)
    ord_3.append(y_o)
    abs_3.append(abs_1[z])
    ord_3.append(ord_1[z])
    abs_3.append(x)
    ord_3.append(y)
    for i in range(0,8):
        if i == 0:
            abs_3.append((x-unit_3) + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append((y-unit_3) + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 1:
                break
        elif i == 1:
            abs_3.append((x+unit_3) + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append((y-unit_3) + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 2:
                break
        elif i == 2:
            abs_3.append((x-unit_3) + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append((y+unit_3) + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 3:
                break
        elif i == 3:
            abs_3.append((x+unit_3) + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append((y+unit_3) + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 4:
                break
        elif i == 4:
            abs_3.append(x + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append((y-unit_3) + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 5:
                break
        elif i == 5:
            abs_3.append((x-unit_3) + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append(y + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 6:
                break
        elif i == 6:
            abs_3.append((x+unit_3) + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append(y + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 7:
                break
        elif i == 7:
            abs_3.append(x + (-1) ** random.randint(1,2) * 1)
            abs_3.append(x)
            ord_3.append((y+unit_3) + (-1) ** random.randint(1,2) * 1)
            ord_3.append(y)
            if num_of_grd_3 == 8:
                break
                
    abs_3.append(abs_1[z])
    ord_3.append(ord_1[z])


#ȷ�����������ڶ����������±�ĺ���
def D_S(num_of_grd_2,lit_2):
    tmp = 2
    for i in range(0,8):
        for  j in range(0,num_of_grd_2):
            lit_2.append(tmp)
            tmp = tmp + 2
                
        tmp = tmp + 2


#�����������128�ĺ���
def Add(lit):
    j = 0
    for i in lit:
        lit[j] = lit[j] + 128
        j = j + 1
        
        
#����ȫ������ĺ���
def AO(abs_1,ord_1,abs_2,ord_2,abs_3,ord_3,ABS,ORD):
    #�����������֮��ĵ�λ����
    unit_1 = ABS/4
    unit_2 = unit_1/2
    unit_3 = unit_2/2
    
    while(1):
        #����һ���ڵ������
        while(1):
            num_of_grd_1 = int(input("������һ���ڵ����������ΧΪ1-8>:"))
            if num_of_grd_1 >= 1 and num_of_grd_1 <= 8:
                break
            else:
                print("����������\n")

        #��������ڵ������
        while(1):
            #�����ڵ�
            num_of_grd_2 = int(input("����������ڵ����������ΧΪ0-8>:"))
            if num_of_grd_2 >= 0 and num_of_grd_2 <= 8:
                break
            else:
                print("����������\n")
                        
        #���������ڵ������
        while(1):
            #�����ڵ�
            num_of_grd_3 = int(input("�����������ڵ����������ΧΪ0-8>:"))
            if num_of_grd_3 >= 0 and num_of_grd_3 <= 8:
                break
            else:
                print("����������\n")
            
        j = 0
        
        #������������
        x_o = ABS/2 + (-1) ** random.randint(1,2) * 4
        y_o = ORD/2 + (-1) ** random.randint(1,2) * 4
    

        if num_of_grd_1 > 0:
            #�������Ľڵ���Χ��һ������
            SRD_1(x_o,y_o,abs_1,ord_1,num_of_grd_1,unit_1)
            
            
            if num_of_grd_2 > 0:
                #����һ���ڵ���Χ�Ķ�������
                count_2 = 0
                for i in range(1,16,2):
                    SRD_2(abs_1[i],ord_1[i],x_o,y_o,abs_2,ord_2,num_of_grd_2,unit_2)
                    count_2 = count_2 + 1
                    if count_2 == num_of_grd_1:
                        break
                        
                        
                if num_of_grd_3 > 0:
                    #ȷ������������±�
                    lit_2 = []
                    D_S(num_of_grd_2,lit_2)#ȷ�����������ڶ����������±�ĺ���
                    
                    #��������ڵ���Χ����������
                    count_3 = 0
                    for i in lit_2:
                        if count_3 < num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,1)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 1 and count_3 == num_of_grd_2:
                                break
                            
                        elif count_3 < 2*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,3)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 2 and count_3 == 2*num_of_grd_2:
                                break
                            
                        elif count_3 < 3*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,5)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 3 and count_3 == 3*num_of_grd_2:
                                break
                            
                        elif count_3 < 4*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,7)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 4 and count_3 == 4*num_of_grd_2:
                                break
                                
                        elif count_3 < 5*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,9)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 5 and count_3 == 5*num_of_grd_2:
                                break
                                
                        elif count_3 < 6*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,11)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 6 and count_3 == 6*num_of_grd_2:
                                break
                                
                        elif count_3 < 7*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,13)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 7 and count_3 == 7*num_of_grd_2:
                                break
                                
                        elif count_3 < 8*num_of_grd_2:
                            SRD_3(abs_2[i],ord_2[i],x_o,y_o,abs_1,ord_1,abs_3,ord_3,num_of_grd_3,unit_3,15)
                            count_3 = count_3 + 1
                            if num_of_grd_1 == 8 and count_3 == 8*num_of_grd_2:
                                break
                    
                    
            abs_3.append(x_o)
            ord_3.append(y_o)
                
            for judge in abs_2:
                if judge <= 0:
                    j = j+1
                    break

            for judge in ord_2:
                if judge <= 0:
                    j=j+1
                    break

            for judge in abs_3:
                if judge <= 0:
                    j=j+1
                    break

            for judge in ord_3:
                if judge <=0:
                    j=j+1
                    break

        if j==0:
            break