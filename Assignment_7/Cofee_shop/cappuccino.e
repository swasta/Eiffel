note
	description: "Summary description for {CAPPUCCINO}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CAPPUCCINO
inherit
	COFFEE
	redefine
		description
	end
create
	make
feature
	description : STRING
	do
		Result := "Cappuccino"
	end
end
