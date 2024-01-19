# Write your MySQL query statement below
# SELECT e.name,b.bonus FROM Employee AS e LEFT JOIN Bonus AS b ON e.empId=b.empId WHERE COALESCE(b.bonus, 1000) < 1000;

# SELECT E.name, B.bonus
# FROM Employee E
# JOIN Bonus B ON E.empId = B.empId
# WHERE B.bonus < 1000;

SELECT E.name, COALESCE(B.bonus, null) AS bonus
FROM Employee E
LEFT JOIN Bonus B ON E.empId = B.empId
WHERE COALESCE(B.bonus, 1000) < 1000 OR B.empId IS NULL;