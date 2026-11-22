# Write your MySQL query statement below
with cte as(select distinct salary from Employee)
select max(case when rn=2 THEN salary ELSE null END) as SecondHighestSalary from(
    select salary,row_number() over(order by salary desc) as rn from cte
) a