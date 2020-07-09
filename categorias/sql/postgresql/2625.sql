SELECT substring(natural_person.cpf, 1, 3) || '.' ||
substring(natural_person.cpf, 4, 3) || '.' ||
substring(natural_person.cpf, 7, 3) || '-' ||
substring(natural_person.cpf, 10) as CPF
FROM natural_person
JOIN customers ON customers.id = natural_person.id_customers;
