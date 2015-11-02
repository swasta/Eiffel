note
	description: "Summary description for {CAKE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CAKE
inherit
	PRODUCT
	redefine
		description
	end
create
	make
feature
	description : STRING
	do
		Result := "Cake"
	end
end
