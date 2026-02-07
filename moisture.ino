#define SOIL_MOISTURE_SENSOR_PIN 34

void setup() {
  Serial.begin(115200);
  Serial.println("Cảm biến độ ẩm đất đã sẵn sàng!");

  analogReadResolution(12); // Đặt độ phân giải ADC là 12 bit
}

void loop() {
  int rawValue = analogRead(SOIL_MOISTURE_SENSOR_PIN);

  int minWetValue = 1000; // Giá trị ADC khi cảm biến ướt hoàn toàn
  int maxDryValue = 4095; // Giá trị ADC khi cảm biến khô hoàn toàn

  int moisturePercentage = map(rawValue, minWetValue, maxDryValue, 100, 0);

  if (moisturePercentage < 0) {
    moisturePercentage = 0;
  }
  if (moisturePercentage > 100) {
    moisturePercentage = 100;
  }

  Serial.print("Giá trị Raw ADC: ");
  Serial.print(rawValue);
  Serial.print("\tĐộ ẩm ước tính: ");
  Serial.print(moisturePercentage);
  Serial.println(" %");

  delay(3000);
}