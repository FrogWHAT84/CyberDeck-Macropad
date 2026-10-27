#  CyberDeck Macropad & HA Controller

A compact, highly customizable 7-key mechanical macropad featuring a rotary encoder and an OLED status display. Built on the ESP32-S3 microcontroller, it seamlessly switches between PC media/macro control and Home Assistant smart home integration.
<img width="1283" height="634" alt="image" src="https://github.com/user-attachments/assets/1ba2c948-abb4-4228-ba0b-6287f9292d19" />
<img width="947" height="597" alt="image" src="https://github.com/user-attachments/assets/2a0612ff-ec3a-4ea3-b446-dc3e0a88cda6" />
<img width="1268" height="650" alt="image" src="https://github.com/user-attachments/assets/f0e70b13-3f2e-4d7f-9daa-e4a49c58d3b3" />
<img width="1277" height="658" alt="image" src="https://github.com/user-attachments/assets/acf3a0d9-4965-409c-8c7d-a95ac3220edd" />
<img width="1219" height="660" alt="Screenshot_45" src="https://github.com/user-attachments/assets/ac71f5c1-707b-4f79-8238-74c54570f813" />
<img width="1196" height="657" alt="Screenshot_44" src="https://github.com/user-attachments/assets/e75206d8-0514-4684-8236-a18b29e29e5d" />

##  Features

* **Dual Mode Operation:**
  * **PC Mode (USB / BLE):** Functions as a custom HID keyboard sending non-conflicting `F13`–`F24` keys, media controls, and volume adjustments.
  * **Home Assistant Mode (Wi-Fi):** Triggers Home Assistant automations, toggles lights/switches, and receives real-time status/sensor updates via ESPHome / MQTT.
* **Hardware:**
  * **7 Mechanical Switches** with Kailh Hot-Swap sockets.
  * **Rotary Encoder (EC11)** with push-button for volume or brightness control.
  * **0.96" OLED Display (SSD1306/ST7789)** for active mode, PC stats, or room conditions.
  * **ESP32-S3 Microcontroller** (Native USB, Wi-Fi, BLE support).

## Hardware Requirements (BOM)

* Microcontroller: ESP32-S3 SuperMini (or similar MCU)
* Switches: 7x Cherry MX compatible switches + Kailh Hot-Swap Sockets
* Encoder: 1x EC11 Rotary Encoder
* Display: 0.96" I2C OLED Display
* Diodes: 7x 1N4148 (for key matrix / anti-ghosting)
* Custom PCB designed in KiCad

## Bill of Materials (BOM)

| Part | Qty | Unit | Total | Vendor |
| :--- | :---: | :---: | :---: | :--- |
| **ESP32-C6-DEV-KIT-N8-M** <br><sub>the main processing</sub> | 1 | $9.00 | $9.00 | Aliexpress |
| **modOLED096_I2C_GVSS** <br><sub>screen</sub> | 1 | $4.00 | $4.00 | Aliexpress |
| **WS2812B** <br><sub>RGB!</sub> | 1 | $4.60 | $4.60 | Aliexpress |
| **EC11** <br><sub>encoder</sub> | 1 | $1.50 | $1.50 | Aliexpress|
| **tp4056** <br><sub>charging</sub> | 1 | $3.00 | $3.00 | Aliexpress |
| **kalih socket** <br><sub>socket for switches</sub> | 1 | $1.50 | $1.50 | Aliexpress |
