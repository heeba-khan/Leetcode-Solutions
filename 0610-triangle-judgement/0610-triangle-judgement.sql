# Write your MySQL query statement below
SELECT x,y,z, (CASE WHEN abs(x-y)<z AND x+y>z THEN 'Yes' ELSE 'No' END) AS triangle FROM Triangle;