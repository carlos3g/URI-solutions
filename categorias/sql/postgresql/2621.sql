SELECT products.name FROM products
JOIN providers ON providers.id = products.id_providers
WHERE substring(providers.name, 1, 1) = 'P' AND products.amount > 10 AND products.amount < 20;
