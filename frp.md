# FRP

下载地址：https://github.com/fatedier/frp/releases。

https://github.com/fatedier/frp/releases/download/v0.27.1/frp_0.27.1_darwin_amd64.tar.gz


## CentOS 搭建服务端

运行如下命令，根据架构不同，选择相应版本并进行下载

```
arch
```

查看结果，如果是“X86_64“即可选择”amd64”。

然后解压，编辑配置文件。

```
wget https://github.com/fatedier/frp/releases/download/v0.27.1/frp_0.27.1_linux_amd64.tar.gz
tar -zxvf frp_0.27.1_linux_amd64.tar.gz
mv frp_0.27.1_linux_amd64 /usr/local/frp
cd /usr/local/frp
vi frps.ini
```

frps.ini：

```
bind_port = 7000
dashboard_port = 7500
token = 12345678
dashboard_user = admin
dashboard_pwd = admin
vhost_http_port = 10080
vhost_https_port = 10443
```

之后我们就可以运行frps的服务端了

```
./frps -c frps.ini
```

打开管理界面

http://120.55.51.191:7500/

后台运行

nohup ./frps -c frps.ini &

输出如下内容即表示正常运行

nohup: ignoring input and appending output to 'nohup.out'
此时可先使用Ctrl+C关闭nohup，frps依然会在后台运行，使用jobs命令查看后台运行的程序

jobs

在结果中我们可以看到frps正在后台正常运行


## MacOS 客户端

```
wget https://github.com/fatedier/frp/releases/download/v0.27.1/frp_0.27.1_darwin_amd64.tar.gz
```

解压，进入目录。

快速搭建一个本地网站用来测试。

```
mkdir frp-test
cd frp-test
echo hello >> index.html
http-server
```

编辑 frpc.ini

···
[common]
server_addr = 120.55.51.191
server_port = 7000
token = 12345678

[web]
type = http
local_ip = 127.0.0.1
local_port = 8080
custom_domains = frps.yunser.net
···

```
cd /Applications/frp-0.27.1
./frpc -c frpc.ini
```

检查是否能访问成功。

```
$ curl frps.yunser.net
hello
```


## Windows 客户端

打开 https://github.com/fatedier/frp/releases

下载 frp_xxx_windows_amd64.zip

解压

编辑 frpc.ini

```
[common]
server_addr = 120.55.51.191
server_port = 7000
token = 12345678

[web1]
type = http
local_ip = 127.0.0.1
local_port = 8080
custom_domains = frps.yunser.net
```

使用命令提示符或Powershell进入该目录下
cd C:\frp
并执行
./frpc -c frpc.ini


假定你下载了“”，


将其解压在了C盘根目录下，并且将文件夹重命名为“frp”，可以删除其中的frps和frps.ini文件。
用文本编辑器打开frpc.ini，与服务端类似，内容如下。








