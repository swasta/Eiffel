note
	description: "Summary description for {COFFEESHOP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEESHOP
create
	make
feature {NONE}
	products : LINKED_LIST[PRODUCT]
feature
	make
	local
		cappuccino : PRODUCT
		cake : PRODUCT
		espresso : PRODUCT
	do
		create products.make
		create{ESPRESSO} espresso.make (20.4, 10.0)
		create{CAPPUCCINO} cappuccino.make (15.6, 13.0)
		create{CAKE} cake.make (16.0, 11.0)

		products.extend (espresso)
		products.extend(cappuccino)
		products.extend(cake)
	end

feature
	print_menu
	do
		across
			products as product
		loop
			IO.put_string (product.item.description)
			IO.put_string (". Price : ")
			Io.put_real (product.item.price_public)
			Io.new_line
		end
	end

	profit : REAL
	local
		total : REAL
	do
		total := 0.0
		across
			products as product
		loop
			total := total + (product.item.price_public - product.item.price_real)
		end
		Result := total
	end
end
