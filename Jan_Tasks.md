# 一月 任务列表
## 01-22

### 设置代理
+ 涉及的软件和配置信息下载请登录ftp://greatzp.cn:21  (在windows资源管理器打开此地址)下载查看（用户名密码微信查收）
+ 以后文件的交流都采用ftp的方式
+ 关于网络代理及ftp服务的相关使用与介绍，可以百度了解一下

### 安装anaconda并配置
+ 直接下载最新版（官网下载会很慢，百度anaconda镜像，从清华源下载：https://mirrors.tuna.tsinghua.edu.cn/anaconda/archive/）
+ 下载对应版本后，windows环境可直接安装，到选择是否为conda配置环境变量时选“是”，其他默认下一步即可
+ 测试是否成功：打开控制台输入conda，如果没有命令则说明环境变量未生效，百度如何配置anaconda环境变量（再次测试需重启控制台）
+ conda命令可用后，更改其源为清华镜像：https://mirrors.tuna.tsinghua.edu.cn/help/anaconda/
    + 需要恢复默认源可使用：conda config --remove-key channels
    
### 创建python环境并设置为pycharm默认解析器
+ 创建python3.5环境
    + 关于conda如何使用请参考： http://python.jobbole.com/86236/ （或者其他百度教程）
    + 创建环境：conda create -n python35 python=3.5  (这里python35是我的环境名称，3.5是对应版本)，等待环境所需包安装完成即可
+ pycharm设置默认python解析器：
    + file》default settings》project interpreter》点击设置按钮》add local》找到解析器位置（默认位于c:\users\你的用户名\anaconda3\envs\python35\python.exe）选择完成配置
    + 以后新建的项目的默认解析器都会是这个（如果不太明白这一步操作原因，可百度关键词如“pycharm python多版本管理”）
    + 我们以后的交流代码都统一为使用该环境
    
### 安装VS2015
+ 如果已经安装则不用再安装
+ 以后安装很多python库都会涉及到c++库的一些引用，所以需要安装

### 开始使用github协作交流
+ https://github.com/ 注册一个账号 （一般情况下国内网访问不稳定，需要打开代理）
+ 下载github desktop并安装并登陆（暂时不用操作，测试一下登陆即可） https://desktop.github.com/
+ 下载安装git，之后项目托管等需要此依赖，https://git-scm.com/downloads， 下载后全部默认选项安装即可。
+ 测试git：打开控制台输入git，如果提示无此命令，则百度git环境变量设置（设置完成重启控制台测试）。
+ 上述完成后将github账号告诉我，将账号加入到已创建的项目中，以后协作编辑

### pycharm使用git连接github
+ 首先设置自己的github账号信息：settings》version control》github
    + 填入自己的账号密码，测试是否可登陆
    + 不要勾选使用ssh（ssh传输设置比较麻烦），点击apply，ok完成添加
+ 从github clone项目（我将你添加入项目后才有权限）：
    + VCS》check out from...》github》连接成功后在第一项项目选择是选择".../python_exercise",然后设置好关联的本地文件夹位置后点击clone
    + 打开刚刚clone的项目，关于项目的同步操作，使用右键选项中的git（具体使用百度一下）
    + 可能有些地方写的不够细致，有疑问请随时联系我，而且一定要多与我沟通方便我们实时掌握学习进度~~~
    + 之后更新基本都会以github的形式，我更新任务后会提醒你pull一下项目，便可查看任务与项目的更新
    
+ 想到哪写到哪，现在有点不清醒，以后待更新~

