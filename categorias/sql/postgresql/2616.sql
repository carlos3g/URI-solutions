SELECT customers.id, customers.name
FROM customers
WHERE not exists (SELECT locations.id_customers FROM locations WHERE locations.id_customers = customers.id);
