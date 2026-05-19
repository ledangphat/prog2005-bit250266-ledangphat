 Bài 1
so_nguyen=1234
so_thuc=3.1415926535
chuoi="hello mấy con gà"
print("BÀI 1")
print("số nguyên:",so_nguyen)
print("số thực:",so_thuc)
print("chuỗi:",chuoi)

 Bài 2
PI=3.14
r=5
chu_vi= 2 * PI * r
print("chu vi hình trò là:",chu_vi)

 Bài 3
# Nhập hai số nguyên từ người dùng
a = int(input("Nhập số nguyên thứ nhất: "))
b = int(input("Nhập số nguyên thứ hai: "))

# Thực hiện các phép toán
tong = a + b
hieu = a - b
tich = a * b

# Kiểm tra chia cho 0
if b != 0:
    thuong = a / b
else:
    thuong = "Không thể chia cho 0"

# In kết quả
print("Tổng:", tong)
print("Hiệu:", hieu)
print("Tích:", tich)
print("Thương:", thuong)

  Bài 4
# Hàm tính tổng hai số
def sum_two_numbers(a, b):
    return a + b

# Gọi hàm
result = sum_two_numbers(5, 7)

# In kết quả
print("Tổng là:", result)

  Bài 5
# Khai báo biến
name = "PhátDZ"
age = 19
average_score = 9.5

# Hiển thị kiểu dữ liệu
print("Kiểu dữ liệu của name:", type(name))
print("Kiểu dữ liệu của age:", type(age))
print("Kiểu dữ liệu của average_score:", type(average_score))

# Xử lý dữ liệu
age_next_year = age + 1
doubled_score = average_score * 2

# In thông tin
print("\n--- Thông tin cá nhân ---")
print("Tên:", name)
print("Tuổi:", age)
print("Điểm trung bình:", average_score)

print("\n--- Thông tin sau khi xử lý ---")
print("Tuổi năm sau:", age_next_year)
print("Điểm trung bình nhân đôi:", doubled_score)

# Hiển thị kiểu dữ liệu của các biến mới
print("\nKiểu dữ liệu của age_next_year:", type(age_next_year))
print("Kiểu dữ liệu của doubled_score:", type(doubled_score))
