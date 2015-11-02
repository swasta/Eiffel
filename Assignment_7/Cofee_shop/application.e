note
	description : "COFFEE_SHOP application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
	local
		shop : COFFEESHOP
	do
		create shop.make
		shop.print_menu

	end

end
