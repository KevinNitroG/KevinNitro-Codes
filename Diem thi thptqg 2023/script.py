import csv
import os

csv_file_name = "diem_thi_thpt_2023.csv"
fieldnames_of_csv = [ "sbd","Toán","Ngữ văn","Ngoại ngữ","Vật lý","Hoá học","Sinh học","Lịch sử","Địa lí","Giáo dục công dân","Mã ngoại ngữ" ]

def clear_screen():
    if os.name == 'nt':  # for Windows
        os.system('cls')
    else:  # for Linux and Mac
        os.system('clear')

def align_field_names(working_fieldnames):
    for i in range(1, len(working_fieldnames)):
        working_fieldnames[i] = working_fieldnames[i].ljust(20)
    return working_fieldnames

def read_csv():
    with open(csv_file_name, 'r', encoding='utf-8') as file:
        reader = csv.DictReader(file, fieldnames = modified_fieldnames_of_csv)
        data = list(reader)
        return data

def finder(number, data):
    print("\n")
    record = next((record for record in data if record['sbd'] == number), None)
    if record:
        for key, value in record.items():
            if key != 'sbd' and value != '':
                print(f"{key}: {value}")
    else:
        print(f"Không tìm thấy số báo danh: {number}")
    print("\n")
    _ = input("Enter để tra tiếp...")
    clear_screen()

if __name__ == '__main__':
    modified_fieldnames_of_csv = align_field_names(fieldnames_of_csv)
    data = read_csv()
    clear_screen()
    while True:
        number = input("Nhập số báo danh: ").rstrip().lstrip()
        if number == "" or number == "\n":
            break
        else:
            finder(number, data)