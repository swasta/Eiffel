note
	description: "Summary description for {DECK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DECK
create
	make

feature -- Access
	list: ARRAYED_LIST[CARD]

feature -- Initialization
	make
		local
			suite: STRING; i,j: INTEGER; c: CARD; t: CARD;
		do
			create list.make (52)
			create c.make (1, 1)
			from i:=1
			until i > 4
			loop
				from j:=1
				until j > 13
				loop
					c.set_face (j)
					list.sequence_put (c.twin)
					j := j + 1
				end
				i := i + 1
				c.set_suite (i)
			end

end
end
