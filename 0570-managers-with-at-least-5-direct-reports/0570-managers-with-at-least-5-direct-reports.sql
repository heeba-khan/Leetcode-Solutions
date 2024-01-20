# Write your MySQL query statement below
# SELECT name FROM Employee WHERE managerId is null;
SELECT name
FROM
    Employee
    JOIN (
        SELECT managerId AS id, COUNT(1) AS cnt
        FROM Employee
        GROUP BY managerId
        HAVING cnt >= 5
    ) AS t
        USING (id);