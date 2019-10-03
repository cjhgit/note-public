python --version
Python 2.7.10

pip --version
pip 19.0.3 from /Library/Python/2.7/site-packages/pip-19.0.3-py2.7.egg/pip (python 2.7)

pip install -r requirements.txt

pip install -r requirements
git clone https://github.com/wossl33/wossl.git


pip install cryptography --user cryptography
pip install pycrypto --user pycrypto

pip install pycrypto



管理 python 版本
如果你既需要使用 python2，也需要使用 python3，pyenv 将是一个很高效的 python 版本管理工具。
由于 pyenv 是脚本插件，所以只能在类 UNIX 系统上使用。所以，如果你想在 windows 上安装，那就点击左上角去隔壁 virtualenv 瞧瞧。

作者：YuanBLQ
链接：https://www.jianshu.com/p/526a9ff5a43d
来源：简书
简书著作权归作者所有，任何形式的转载都请联系作者获得授权并注明出处。




## Mac pyenv

brew install pyenv


打印：
```
==> Caveats
==> autoconf
Emacs Lisp files have been installed to:
  /usr/local/share/emacs/site-lisp/autoconf
==> openssl
A CA file has been bootstrapped using certificates from the SystemRoots
keychain. To add additional certificates (e.g. the certificates added in
the System keychain), place .pem files in
  /usr/local/etc/openssl/certs

and run
  /usr/local/opt/openssl/bin/c_rehash

openssl is keg-only, which means it was not symlinked into /usr/local,
because Apple has deprecated use of OpenSSL in favor of its own TLS and crypto libraries.

If you need to have openssl first in your PATH run:
  echo 'export PATH="/usr/local/opt/openssl/bin:$PATH"' >> ~/.bash_profile

For compilers to find openssl you may need to set:
  export LDFLAGS="-L/usr/local/opt/openssl/lib"
  export CPPFLAGS="-I/usr/local/opt/openssl/include"

For pkg-config to find openssl you may need to set:
  export PKG_CONFIG_PATH="/usr/local/opt/openssl/lib/pkgconfig"
```






```
$ pyenv versions
* system (set by /Users/yunser/.pyenv/version)

pyenv install 3.7.4

# 全局设置python版本为指定版本，设置全局的 Python 版本，通过将版本号写入 ~/.pyenv/version 文件的方式。
pyenv global 3.7.4
pyenv local 3.7.4
```





2.Mac系统下的环境变量：
a. /etc/profile 
b. /etc/paths 
c. ~/.bash_profile 
d. ~/.bash_login 
e. ~/.profile 
f. ~/.bashrc 

其中a和b是系统级别的，系统启动就会加载，其余是用户接别的。c,d,e按照从前往后的顺序读取，如果c文件存在，则后面的几个文件就会被忽略不读了，以此类推。~/.bashrc没有上述规则，它是bash shell打开的时候载入的。这里建议在c中添加环境变量，以下也是以在c中添加环境变量来演示的:

作者：二妹是只猫
链接：https://www.jianshu.com/p/463244ec27e3
来源：简书
简书著作权归作者所有，任何形式的转载都请联系作者获得授权并注明出处。


vi ~/.bash_profile
source ~/.bash_profile


## CentOS pyenv

```
git clone git://github.com/yyuu/pyenv.git ~/.pyenv
vi  ~/.bashrc

```

```
# pyenv
export PYENV_ROOT="$HOME/.pyenv"
export PATH="$PYENV_ROOT/bin:$PATH"
eval "$(pyenv init -)"
```

```
source  ~/.bashrc
```


pyenv install --list



## mac 替换系统 python








问题：

line 36, in <module>
    import _tkinter # If this fails your Python may not be configured for Tk
ModuleNotFoundError: No module named '_tkinter'

解决：使用 python3 而不是 python




























