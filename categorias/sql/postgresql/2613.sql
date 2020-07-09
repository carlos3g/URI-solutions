SELECT movies.id, movies.name FROM movies JOIN prices ON movies.id_prices = prices.id AND prices.value < 2;
