# Write your MySQL query statement below
SELECT DATE_FORMAT(trans_date,'%Y-%m') as month,country,
count(id) as trans_count,
SUM(CASE WHEN state='approved' then 1 else 0 end) as approved_count,
SUM(amount) as trans_total_amount ,
SUM(CASE WHEN state='approved' then amount else 0 end) as approved_total_amount 
FROM Transactions GROUP BY month,country;


