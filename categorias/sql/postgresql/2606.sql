SELECT products.id, products.name
FROM products, categories
WHERE substring(categories.name, 1, 5) = 'super' and products.id_categories = categories.id;
