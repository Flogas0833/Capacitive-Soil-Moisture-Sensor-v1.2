# Giới thiệu
Cảm biến độ ẩm đất điện dung v1.2 đo độ ẩm bằng cách đo sự thay đổi điện
dung của điện cực trong đất. Ưu điểm lớn nhất là không bị ăn mòn điện hóa như
các loại cảm biến điện trở thông thường.

# Sơ đồ kết nối
| Chân cảm biến | Chân ESP32 | Chức năng |
| :--- | :--- | :--- |
| **VCC** | 3.3V | Cấp nguồn |
| **GND** | GND | Nối đất |
| **AOUT** | GPIO 34 (ADC1) | Tín hiệu tương tự |

