/*
    Blink
    等待一秒钟，点亮LED，再等待一秒钟，熄灭LED，如此循环
 */
 
 //在大多数Arduino控制板上13号引脚都连接了一个标有"L"的LED灯
int led = 1;  //给13号引脚连接的设备起一个别名"led"
 
void setup() {
  Serial.begin(9600); //初始化串口并设置波特率为9600
   pinMode(led, OUTPUT); //将"led"引脚设置为输出状态
}
 
void loop() {
   digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
   Serial.println("亮");
   delay(5000);  //等待1s

   digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
   Serial.println("暗");
   delay(5000);  //等待1s
}
