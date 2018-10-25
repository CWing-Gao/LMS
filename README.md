# LMS（Library management system）
# 图书管理系统
**Developer：Gao Xiangyu**  
A Library management system for homework.  
一个用C语言写成的小型图书管理系统，为程序设计作业而开发。

# 主体设计
功能介绍：
* 用户的分级访问，分为普通用户和管理员，各自权限等不同，普通用户只有信息的查询和浏览功能，管理员则可以对信息进行编辑。管理员有管理员密码，并可进行修改</br>
* 图书书目列表的打印：可以将图书书名以列表形式打印在屏幕上（每页10本书），用户可根据选择相应书名直接访问相应书籍信息。
* 图书信息检索：输入书籍的书名或者作者系统会将符合要求的所有书籍以列表形式打印在屏幕上供用户进行访问操作。
* 图书信息录入：管理员可以添加新的书籍信息到相应书籍分类里。
* 图书信息修改：管理员可以对书籍的某项信息进行修改。

# 详细设计：
* 用户权限分为两级：普通用户，只具有浏览书籍信息和查询书籍信能
力；输入密码后通过管理员验证，可以录入、编辑、删除书籍信息，通过原管理员密码可以修改管理员密码。
* 界面设计：每一界面为一个函数，一般只有Est键可以结束函数，函数结束后返回上一级函数的开始。
* 书籍储存：书籍分五类，每类对应一个双向链表，每一个双向链表储存在一个d盘根目录下的.txt文本中，编号0-4.txt；为方便遍历等操作，定义一个全局的具有5个元素链表地址数组，分别指向每个链表。
* 用户通信：本程序主要通过“getch（）” （无需回车会直接获取用户按键的键值，储存数据类型为char，对应有数字键值）函数来获取用于的指令，采用类似图形界面的操控方式，无需输入数字来选定相应选项。
* 越界处理：①选项的值利用求余数的方式避免用户多次按键使其超出范围，并到达循环选择选项的效果；②各数组、指针都有保障部越界的处理代码；③文件读取失败后也有相应初始化创建和结束程序的处理。
* 内存管理：由于程序设计许多链表操作动态内存回收十分繁杂，再者动态内存占用并不多，一亿本书籍也不会超过1M内存，故未进行内存回收操作。  
  
**[（具体详情，请阅读《图书管理系统.pdf》）](https://github.com/CWingGao/LMS/blob/master/%E5%9B%BE%E4%B9%A6%E7%AE%A1%E7%90%86%E7%B3%BB%E7%BB%9F.pdf)**
