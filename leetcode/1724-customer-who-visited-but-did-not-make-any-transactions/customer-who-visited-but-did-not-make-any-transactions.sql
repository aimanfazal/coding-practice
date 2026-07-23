SELECT customer_id, COUNT(customer_id)
AS 'count_no_trans'
FROM Visits v LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.amount IS NULL
GROUP BY customer_id;