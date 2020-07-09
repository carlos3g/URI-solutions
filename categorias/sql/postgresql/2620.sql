SELECT customers.name, orders.id FROM customers
JOIN orders ON customers.id = orders.id_customers
WHERE 1 <= extract(month FROM orders.orders_date) AND extract(month FROM orders.orders_date) < 7;
