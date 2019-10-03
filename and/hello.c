void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //初始化串口并设置波特率为9600
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!"); //打印Hello World!并回车换行
  delay(1000); //延时等待1s
}



