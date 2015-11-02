note
	description: "Summary description for {ESPRESSO}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ESPRESSO
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
		Result := "Espresso"
	end
end
