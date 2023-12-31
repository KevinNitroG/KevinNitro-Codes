"""
Tìm vị trí của Bob sao cho hợp ní với Alice
Viết bởi KevinNitro
"""

def tim_stt(ban: int, vi_tri: int) -> int:
    """
    Tìm stt từ bàn và vị trí
    Arguments:
        ban: an integer
        vi_tri: an integer
    Returns:
        Stt
    """
    if ban == 1:
        return vi_tri
    return (ban-1)*2+vi_tri

if __name__ == '__main__':
    k = int(input('Nhập số lượng đề k = '))
    n = int(input('Nhập số lượng học sinh n = '))
    p, q = map(int, input('Nhập bàn, vị trí của Alice "p q": ').split())
    u, v = 0, 0
    CHECK = 0

    de_Alice = tim_stt(p, q)%k
    so_ban_hoc = round(n/2)


    for u_temp in range(1, so_ban_hoc + 1):
        for v_temp in [1, 2]:
            if ((stt_Bob := tim_stt(u_temp, v_temp))%k) == de_Alice and stt_Bob <= n:
                if (u_temp, v_temp) == (p, q) and (u, v) != (0, 0):
                    break
                u, v = u_temp, v_temp
                CHECK = 1
                if (u, v) > (p, q):
                    break
        else:
            continue
        break

    if CHECK == 1:
        print(f'Vị trí của Bob là bàn {u = }, vị trí {v = }')
    else:
        print(-1)
