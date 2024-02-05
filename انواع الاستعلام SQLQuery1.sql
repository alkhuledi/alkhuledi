select * from sales.customers
where phone is  null;
select * from sales.customers
where phone is not null;
select * from sales.customers
where state in('ny','ca');
select * from production.products
where model_year  not in (2017,2019)

use [ BikeStores]
go
 



select * from sales.customers
where state  in ('ca','ny');

select * from production.products
where list_price between 300and 600;


select * from production.products
where list_price not between 300and 600;--ÇÈÍË Úä ÇáÇÕäÇİ Çááí ŞíãÊåÇ ÎÇÑÌ åĞÇ ÇáÑíäÌ

select * from production.products
where model_year not between 2016 and 2018;

select * from production.products
where model_year  between 2016 and 2018;

select city from sales.customers;--ÇÙåÇÑ ÌãíÚ ÇáãÏä  ÏÇÎá ÇáÌÏæá
select distinct city,state from sales.customers;--ÚÑÖ ÇáãÏíäÉ æÇáÈáÏ ÈÏæä ÊßÑÇÑ


select customer_id,first_name,last_name,city --ÇáÈÍË Úä Çí Ïí  æÇáÇÓã ÇáÇæá æÇáÇÓã ÇáÇÎíÑ æÇáãÏíäÉ  ááÇÓãÇÁ ÇáÊí ÊÈÏÇÁ ÈÍÑİ ÒÏ
from sales.customers
where first_name like 'z%';

select * from sales.customers  --ÇáÈÍË Úä ÇáÇÓã ÇáĞí íÍÊæí Úáí ÍÑİ er
where first_name like '%er%';


select * from sales.customers  --ÇáÈÍË Úä ÇáÇÓãÇÁ ÇáÊí ÊÊßæä ãä ËáÇËå ÍÑæİ
where first_name like '____';

select * from sales.customers --ÇáÈÍË Úä ÇáÇíãíá Çááí íÍÊæí Úáì åæÊãíá 
where email like '%@hotmail.com%';

select * from sales.customers 
where phone is not null;

select * from sales.customers --ÇáÇÓãÇÁ ÇáÊí ÊÈÏÇÁ ÈÍÑİ A
where first_name like 'a____';


select * from sales.customers -- ÇáÈÍË Úä ÇáÇÓãÇÁ ÇáÊí ÊÈÏÇÁ ÈÍÑİ a,e
where first_name like '[ae]%';

select * from sales.customers --ÇáÈÍË Úä ÇáÇÓãÇÁ ÊÈÏÇ ãä aÇáì c
where first_name like '[a-c]%';

select * from sales.customers -- ÇáÈÍË Úä ÇáÇÓãÇÁ ÇáÊí áÇÊÈÏÇ ÈÇÍÑİ ãä aÇáì c
where first_name not like '[a-c]%';

select * from production.products -- ÇáÈÍË Úä ãÈáÛ íÍÊæí Úáì ÑŞã íÈÏÇÁ ÈÜ 3 æßÓæÑ 
where list_price like '3__.%';

select * from sales.customers --ÇáÈÍË Úä ÇÓã íÈÏÇÁ ÈÇáÍÑİ aæÇáÍÑİ ÇáËÇáË íßæä e
where first_name like 'a__e%';

select
first_name ,
last_name   --ØÈÇÚÉ ÇáÇÓã ÊÑÊíÈ ÊäÇÒáí az
from  sales.customers
order by first_name  ;


select 
customer_id, phone,email,city
from sales.customers   -- ÊÑÊíÈ ÇáÈÍË za
order by customer_id desc;

select 
product_id, product_name,list_price
from production.products   ---ÊÑÊíÈ ÇáãäÊÌÇÊ  Úáì ÍÓÈ ÇÚáì ÓÚÑ
order by list_price desc;
 
 select 
	city,
	first_name,
	last_name	
	from sales.customers--İÑÒ ÇÓã ÇáãÏíäÉ  ÊäÇÒáí +İÑÒ ÇáÇÓã ÊÕÇÚÏí 
	order by 
	city asc ,
	first_name desc;


select 
category_id, product_id, product_name ,list_price
from production.products  --ÊÑÊíÈ ÍÓÈ ÇáİÆÉ -ÊÕÇÚÏí  æÓÚÑ ÇáãäÊÌ  ÊäÇÒáí
order by category_id, list_price desc;

use [ BikeStores]
go
select  first_name, last_name, email,order_id,order_status,order_date
from sales.orders o,sales.staffs s
where  o.staff_id =s.staff_id;

select 
product_name,
category_id,
list_price

SELECT
    product_name,
    category_name,        
    list_price
FROM

from production.products p
inner join production.categories c
on c.category_id=p.category_id
order by 
product_name desc;

