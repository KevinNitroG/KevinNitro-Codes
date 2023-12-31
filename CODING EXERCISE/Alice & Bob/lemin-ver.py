'''
Ờm quên tác dụng của cái 3 dấu nháy này mà ông nói r
'''

vitri = ["1","2"]
n = int(input("Nhập số học sinh: "))
while True:
    k = int(input("Nhập số lượng đề: "))
    p = int(input("Hàng Alice ngồi: "))
    if 2 <= k <= n and 1<= p <= (n+1)/2:
        break
    else:
        print("Số lượng đề hoặc hàng Alice ngồi không hợp lệ, vui lòng nhập lại")

while True:
    q = input("Nhập vị trí ngồi của Alice (1 hoặc 2): ")
    if q in vitri:
        break
    else:
        print("Vui lòng chỉ nhập 1 hoặc 2.")
C = q 
# vị trí v của Bob 
if k % 2 == 0:
    v = C
else:
    v = vitri[0] if q == vitri[1] else vitri[1]

stt_Alice = (p*2 -1) if q == 1 else (p*2)
deAB = k if stt_Alice % k == 0 else (stt_Alice % k) # đề của Alice và Bob là k nếu nó là ước số của stt, còn không thì nó là số dư.
lst = []
for i in range(0,p): #tìm các vị trí cùng đề với Alice
    vitriBob_maybe = i * k + deAB 
    if vitriBob_maybe >= n:
        break
    lst.append(vitriBob_maybe)

for e in lst:
    if e == stt_Alice:
        lst.remove(e)
if len(lst) == 0:
    print(-1)
else:
    lst2 = [x // 2 if x % 2 == 0 else (x +1)//2 for x in lst]
    lst3 = [abs(x-p) for x in lst2] #tìm khoảng cách giữa các hàng 

    o = min(lst3) # hàng của Bob là hàng gần Alice nhất nên tìm min
    if lst3.count(o) == 1:
        u = o
    else:
        u = p - o
    print(f'Hàng của Bob u = {u} và vị trí ngồi của Bob v = {v}')