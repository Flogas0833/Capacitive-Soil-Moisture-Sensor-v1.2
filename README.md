# Giới thiệu
Cảm biến độ ẩm đất điện dung v1.2 đo độ ẩm bằng cách đo sự thay đổi điện
dung của điện cực trong đất. Ưu điểm lớn nhất là không bị ăn mòn điện hóa như
các loại cảm biến điện trở thông thường.
- Điện áp hoạt động: 3.3V đến 5.5V DC.
- Điện áp đầu ra: 0 đến 3.0V DC (tương ứng với độ ẩm từ 100% đến 0%).
- Dòng tiêu thụ: ≈ 5mA.
- Tần số lấy mẫu tối đa: Phụ thuộc vào tốc độ bộ ADC của vi điều khiển (với
ESP32 có thể lên đến hàng trăm kHz, nhưng thực tế khuyến nghị 1-10Hz để
ổn định).
- Giao tiếp: Analog (1 kênh).

# Sơ đồ kết nối
| Chân cảm biến | Chân ESP32 | Chức năng |
| :--- | :--- | :--- |
| **VCC** | 3.3V | Cấp nguồn |
| **GND** | GND | Nối đất |
| **AOUT** | GPIO 34 (ADC1) | Tín hiệu tương tự |

