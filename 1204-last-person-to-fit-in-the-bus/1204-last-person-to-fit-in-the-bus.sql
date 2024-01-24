# Write your MySQL query statement below

with cte as
(SELECT turn,person_name,
sum(weight) over(order by turn) total_wt
from queue)

select person_name from cte
where turn=(select max(turn) from cte where total_wt<=1000)