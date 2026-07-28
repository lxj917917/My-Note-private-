一、DDL数据库操作
![[Pasted image 20260727195713.png]]

二、DDL表操作（创建&查询）
查询：
![[Pasted image 20260728151345.png]]
show tb_user;
只能展示表的大致结构

show create table tb_user;
可以展示建表时的详细信息

创建：
![[Pasted image 20260728151627.png]]
实际例子：
![[Pasted image 20260728153132.png]]

三、DDL数据类型及案例
数据类型主要分为三类：数值类型、字符串类型、日期时间类型
![[Pasted image 20260728154135.png]]
整型类型：
tinyint
smallint
mediumint
int
bigint

浮点数：
float   --------单精度
double -------双精度   -----score double(4,1)
decimal  依赖于M（精度）  和   D（标度）
例子：123.45
精度：整个的位数 5
标度：小数的位数 2

字符串类型：
![[Pasted image 20260728160130.png]]char（10）     定长字符串----------------->性能较高
varchar（10）  变长字符串---------------->性能较差    输入的字符串长度不确定时可以使用varchar，如果长度确定了就是用char

tinyblob
tinytext

blob
text

mediumblob
mediumtext

longblob
longtext

日期时间类型：
![[Pasted image 20260728161000.png]]date                日期zhi
time
year
datetime
timestamp