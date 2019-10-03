#include <SoftwareSerial.h> 

// Pin10为RX，接HC05的TXD
// Pin11为TX，接HC05的RXD
SoftwareSerial BT(10, 11); 
char val;

void setup() {
  Serial.begin(38400); 
  Serial.println("BT is ready!");
  // HC-05默认，38400
  BT.begin(38400);
}

void loop() {
  if (Serial.available()) {
    val = Serial.read();
    BT.print(val);
  }

  if (BT.available()) {
    val = BT.read();
    Serial.print(val);
  }
}



AT+ORGL    # 恢复出厂模式
AT+NAME=<Name>    # 设置蓝牙名称
AT+ROLE=0    # 设置蓝牙为从模式
AT+CMODE=1    # 设置蓝牙为任意设备连接模式
AT+PSWD=<Pwd>    # 设置蓝牙匹配密码


AT+NAME=ard
AT+ROLE=0
AT+CMODE=1

AT+PSWD="1234"

ard
00-19-06-35-77-69

macbook
F0-18-98-7D-DE-97


https://www.jianshu.com/p/4ebf1a01df51

想实现手机蓝牙遥控小车，手机APP是必不可少的，网上有很多蓝牙串口助手，推荐大家用这款手机蓝牙助手（蓝牙串口助手）

Home Assistant

## 智能车

https://blog.csdn.net/qq_16775293/article/details/77427060