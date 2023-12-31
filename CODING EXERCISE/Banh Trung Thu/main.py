# class BanhTrungThu:
    
#     def __init__(self, dest_temp, current_temp):
#         self.dest_temp = dest_temp
#         self.current_temp = current_temp

#     def steps(self):
#         return self.dest_temp - self.current_temp

def modify_temp_decision(dest_temp, current_temp):
    if dest_temp > current_temp:
        return 1
    if dest_temp < current_temp:
        return -1
    return 0

def make_modified_temp_dicision_list(input_P, input_t):
    list = []
    for couple in zip(input_P, input_t):
        list.append(modify_temp_decision(couple[0], couple[1]))
    return list

while True:
    input_N = int(input("Nhập N: "))
    input_P = list(map(int, input("Nhập P: ").split()))
    input_t = list(map(int, input("Nhập t: ").split()))
    if len(input_P) == input_N and len(input_t) == input_N:
        break
    print("Nhập sai rồi bro, nhập lại đi")

# list_of_couple = list(zip(input_P, input_t))
# step_for_each_couple = []
# for i in list_of_couple:
#     step_for_each_couple += BanhTrungThu(i[0], i[1]).steps()
#     list_of_couple[i].append(abs(step_for_each_couple))
# max_step = max(step_for_each_couple)


modify_temp_decision_list = []
steps_count = 0
while True:
    modify_temp_decision_list = make_modified_temp_dicision_list(input_P, input_t)
    