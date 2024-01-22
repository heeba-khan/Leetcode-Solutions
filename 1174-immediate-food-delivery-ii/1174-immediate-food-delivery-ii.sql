# Write your MySQL query statement below
SELECT ROUND(SUM(CASE WHEN order_date=customer_pref_delivery_date  then 1 else 0 end)*100/COUNT(distinct customer_id),2) as immediate_percentage FROM Delivery

WHERE(cuStomer_id,order_date) IN (
SELECT customer_id,MIN(order_date) as first_order_date
    FROM Delivery GROUP BY CUSTOMER_ID
);