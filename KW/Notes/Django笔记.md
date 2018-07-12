## 教程：https://www.imooc.com/learn/790
### 项目目录介绍
* _init_.py
	* Python中声明模块的文件
	* 默认为空
* settings.py
	* 项目的总配置文件
	* 包含了数据库、Web应用、时间等各种配置
* urls.py
	* URL配置文件
	* Django项目中所有地址（页面）都需要我们自己去配置其URL
* wsgi.py
	* 中文名：Python服务器网关接口
	* Python应用和Web服务之间的接口
	* 基本不用修改
### 应用目录介绍
* migration
	* 数据移植模块
	* 内容自动生成
* admin.py
	* 该应用的后台管理系统配置
* apps.py
	* 该应用的一些配置
	* 在Django-1.9以后自动生成
* models.py
	* 数据模块
	* 数据库相关的内容
	* 使用ORM框架
* tests.py
	* 自动化测试模块
	* Django提供了自动化测试的功能
	* 在这里编写测试脚本（语句）
* views.py
	* 执行响应的代码所在模块
	* 代码逻辑处理的主要地点
	* 项目中大部分的代码均在这里编写
### 创建app
在pycharm下方的terminal终端中输入命令：

	python manage.py startapp cmdb

这样就创建了一个叫做cmdb的APP，django自动生成“cmdb”文件夹

添加应用名到settings.py中的INSTALLED_APPS里
### 创建页面
> views创建响应函数
> 
> urls添加path函数

* 编辑views文件
	* 每个响应对应一个函数，函数必须返回一个响应
	* 函数必须存在一个参数，一般约定为request
	* 每一个响应（函数）对应一个URL
* 编辑urls.py
	* 第一种办法
		* 导入对应app的views文件（如from cmdb import views）
		* 每个path函数放在urlpatterns列表中
		* path函数三个参数：URL，对应方法，名称（不一定需要）
	* 第二种办法
		* 在根urls.py中引入include
		* 在APP目录下创建urls.py文件，格式与根urls.py相同
		* 在根urls.py中path函数第二个参数改为include('cmdb.utls')
		>根urls.py针对APP配置的URL文件，是该APP所有URL的总路径
### Templates（模板）
* templates是：
	* HTML文件
	* 使用Django模板语言
	* 可以使用第三方模板（如jinja2）
		* 想要添加第三方模板引擎，在settings文件中的TEMPLATES中的BACKEND中添加
* 开发Templates
	* 在APP的根目录下创建名叫Templates的目录
	* 在该目录下创建HTML文件
	* 在views.py中返回render()
		* render三个参数
			* 第一个request
			* 第二个模板文件
			* 第三个后台传递到前端的数据
* DTL的初步使用
	* render()函数中支持一个dict（字典）类型参数
	* 该字典是后台传递到模板的参数，键为参数名
	* 在模板中使用{{参数名}}来直接使用
* 如果有多个APP，不同APP下Templates目录中的同名.html文件会造成冲突
	* 在APP的Templates目录下创建以APP名为名称的目录
	* 将html文件放入新创建的目录下
	* views里面return第二个参数加上'app名/'mo
>如果报错找不到模板，需要在setting.py的TEMPLATES中加上 'DIRS': [os.path.join(BASE_DIR, 'templates')]
>
>'DIRS': [os.path.join(BASE_DIR, 'blog/template')],
要填完整 绝对路径
### models
* models简介
	* 一个Model对应数据库的一张数据表
	* Django中Models以类的形式表现
	* 他包含了一些基本字段以及数据的一些行为
	* ORM框架
		* 对象关系映射
		* 实现了对象和数据库之间的映射
		* 隐藏了数据访问的细节，不需要编写SQL语句
* 编写Models
	* 在应用根目录下创建models.py，并引入models模块
	* 创建类，继承models.Model，该类即是一张数据表

			class 类名(models.Model):
	* 在类中创建字段
		* 字段即类里面的属性（变量）
		* attr = models.CharField(max_length=64)
		* 变量名 = models.字段类（参数）
		>字段类，网上资料：https://www.cnblogs.com/zh605929205/articles/7103825.html
* 生成数据表
	* 命令行进入manage.py同级目录，或在pycharm下方的terminal终端中输入命令：

			python manage.py makemigrations app名（可选，如不写则默认为将该项目下所有app进行数据迁移）
	再执行：

			python manage.py migrate
* 修改数据表
	* https://code.ziqiangxuetang.com/django/django-schema-migration.html
* 查看
	* Django会自动在app/migrations/目录下生成移植文件
	* 执行`python manage.py aqlmigrate 应用名 文件id`查看SQL语句
	* 默认sqlite3的数据库在项目根目录下db.sqlite3
* 查看并编辑db.sqlite3
	* 使用第三方软件：SQLite Expert Personal
* 页面呈现数据
	* 后台步骤
		* views.py中from . import models
		* article = models.Article.objects.get(pk=1) 
		* 变量 = models.类.objects.get(标识)

		> pk是主键的意思，可以用id
		
		* render(request, 'html文件', { '传递后html文件使用的对象' : 变量}
	* 前端步骤
		* 模板可直接使用对象以及对象的"."操作
		* {{ article.attr }}
### admin
* admin简介
	* admin是Django自带的一个功能强大的自动化数据管理界面
	* 被授权的用户可以直接在admin中管理数据库
	* Django提供了许多针对admin的定制功能
* 创建用户
	* 输入命令创建超级用户：
			
			python manage.py createsuperuser
	* 输入用户名
	* 输入邮箱
	* 输入密码
	* admin入口：

			localhost:8000/admin/
	* 切换中文界面：
		
			修改settings.py中
			LANGUAGE_CODE = 'zh_Hans'
* 配置应用
	* 在应用下admin.py中引入自身的models模块（或里面的模型类）

			from .models import UserInfo
			from .models import 类名（之前models.py中注册的类名）
	* 编辑admin.py：
	
			admin.site.register(models.Article)
			admin.site.register(models.之前的类名)
* 修改数据
	* 进入后点击数据进行编辑
* 修改数据默认显示名称
	* 在Article类下添加一个方法
	* 根据Python版本选择`__str__(self)`或`__unicode_(self)` 3.x选择第一个
### 博客开发
* 页面概要
	* 博客主页面
	* 博客文章内容页面
	* 博客撰写页面
#### 博客主页面
* 内容
	* 文章标题列表，超链接
	* 发表博客按钮（超链接）
* 编写思路
	* 取出数据库所有文章对象
	* 将文章对象们打包成列表，传递到前端
	* 前端页面吧文章以标题超链接的形式逐个列出
* 后端
	* 获取所有数据库文章对象

			articles = models.Article.object.all()
	* 通过`return render（）`传给前端
* 前端
	* 模板for循环（html）
	
		{% for xx in xxs %}
		HTML语句
		{% endfor %}
	* 超链接

			<a href="指向地址">内容</a>
#### 博客文章页面
* 内容
	* 标题
	* 文章内容
	* 修改文章按钮（超链接，连接博客撰写页面）
* URL传递参数
	* 参数写在响应函数中request的后面，可以有默认值（views文件中）
	* URL文件 path匹配改成

			path('ceshi/<int:article_id>', views.ceshi)
			article_id要和views文件中ceshi函数中的参数一致
#### Django中的超链接
* 超链接的目标地址
	* href后面是目标地址
	* template中可以用
			
			"{% url 'app_name:url_name' 参数 %}"
			"{% url 'url_name' 参数 %}"
			"{% url 'url_name' %}"
		* app_name (可变)在使用include来引用另一个url配置文件的时候，在根urls下，写在inlcude()的第二个参数位置`namespace='app_name'`

				path('cmdb/', include(('cmdb.urls', 'app_name'), namespace=None))
		* url_name （可变）应用下写在path的第三个参数的位置，`name = 'url_name'`

				path('index/', views.index, name='url_name')

		* 参数（可变）在有参数的url时使用

				如：path('ceshi/<int:article_id>', views.ceshi, name='ceshi') 时使用参数
	* 第二种方法，都不需要改，直接超链接就可以了
 
			href="/blog/article_page/{{ article.id }}"
#### 博客撰写页面
* 内容
	* 标题编辑栏
	* 文章内容编辑区域
	* 提交按钮
* 前端
	* `<form>`标签用于为用户输入创建HTML表单
		* acion="URL"  （提交表单时向何处发送表单数据）
		* method="post"  (规定发送form-date时的HTTP方法)
	* `<input>`标签用于收集用户信息
		* type="text"  (文本框)
		* type="submit"  (提交按钮)
		* value="值" (为 input 元素设定值)
	* `<label>`标签为 input 元素定义标注（标记）

			<form actione="URL" method="post">
				{% scrf_token %}  出现 禁止访问 csrf验证失败时添加
				<label>文本
					<input type="text" name="参数名">
				</label>
				<input type="submit" value="提交按钮">
			</form>
* 后端
	* 创建两个响应函数
		* 一个显示页面
		* 一个响应表单
			* 使用request.POST['参数名']获取表单数据。没有参数时报错
			* 使用request.POST.get('参数名'， '默认返回值')获取表单数据。没有参数时返回默认值
			* 使用models.数据表类.objects.create(类的对象=获取的表单数据)创建对象（添加数据库数据）
			* 返回主页

					def 响应函数(request)：
						变量1 = request.POST.get('参数名'， '默认返回值')
						models.数据表类.objects.create(类的对象=变量1)
						变量2 = models.数据表类.object.all()
						return render(request, 'html文件'，{ '传递后html文件使用的对象' : 变量2})

> 出现禁止访问 csrf验证失败  
> 在前端页面添加{% scrf_token %}

#### 修改文章超链接
* 和新文章类似，区别在于新文章不需要显示文章内容，而修改文章需要显示原文章的内容
* 思路：给文章编辑页面传一个文章ID（点击新文章进入的传0，否则传所点击的文章ID），如果文章ID为0，那么就新建文章，而文章ID不为0，那么就将文章的内容传进去（给input添加一个参数value，如果传了文章内容，value就为文章内容，否则没有value参数）
* 修改数据

		数据库对象.变量 = 新变量
		数据库对象.save()
### Templates过滤器
* 什么是过滤器
	* 写在模板中，属于Django的模板语言
	* 可以修改模板中的变量，从而显示不同的内容
* 使用方式
	* {{ 变量 | 过滤器 }}
	
> https://blog.csdn.net/foryouslgme/article/details/52057445

### Django Shell
* 什么是Django Shell
	* 它是一个Python的交互式命令行程序
	* 它自动引入了我们的项目环境
	* 我们可以使用它与我们的项目进行交互
* 使用方式
	
		命令行中
		python manage.py shell
		from blog.models import 数据表类
* 作用
	* 可以使用Django shell来进行一些调试工作
	* 测试未知的方法
	* 向数据库中插入/更新数据等一系列操作

> manage.py命令选项  
> https://blog.csdn.net/luanpeng825485697/article/details/79254716
		