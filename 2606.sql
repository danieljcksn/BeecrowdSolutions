select products.id, products.name from
products inner join categories
on products.id_categories  = categories.id and categories.name like 'super%';
