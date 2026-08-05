
![[Pasted image 20260804110019.png]]

一、基础查询
![[Pasted image 20260804110323.png]]
select 字段1，字段2，... from 表名                            从表中选择一部分字段进行返回
select * from 表名                                                     返回表中全部字段

select workaddress as 别名 from 表名                      起别名

select distinct 字段列表 from 表名                            去重操作

二、条件查询
![[Pasted image 20260804152206.png]]
判断值是否为NULL ，用is （not）

三、聚合函数
![[Pasted image 20260804155522.png]]
select count(idcard) from 表名                    统计表名中idcard的数量

四、分组查询
比如：员工按照性别分组
![[Pasted image 20260804160752.png]]
group by gender
分组之后再过滤 having
![[Pasted image 20260804162248.png]]

五、排序查询
![[Pasted image 20260805111314.png]]
select * from 表名 order by age (asc/desc)
