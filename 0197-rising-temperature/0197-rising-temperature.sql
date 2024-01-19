# Write your MySQL query statement below
# SELECT w1.id FROM Weather w1 JOIN Weather w2 ON w1.recordDate=DATE.ADD(w2.recordDate,INTERVAL 1 DAY) WHERE w1.temperature > w2.temperature; 


SELECT today.id
FROM Weather today
JOIN Weather yesterday ON today.recordDate = DATE_ADD(yesterday.recordDate, INTERVAL 1 DAY)
WHERE today.temperature > yesterday.temperature;