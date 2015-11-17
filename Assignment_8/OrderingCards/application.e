note
	description : "OrderingCards application root class"
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
		local
			d1: DECK; card_array: ARRAY[CARD];
		do
			create card_array.make_empty
			card_array.force (create {CARD}.make (1, 5), 1) -- "Clubs" 1
			card_array.force (create {CARD}.make (3, 3), 2) -- "Hearts" 3
			card_array.force (create {CARD}.make (2, 12), 3) -- "Diamonds" Queen
			card_array.force (create {CARD}.make (4, 1), 4) -- "Spades" Ace
			card_array.force (create {CARD}.make (4, 8), 5) -- "Spades" 8
			card_array.force (create {CARD}.make (1, 13), 6) -- "Clubs" King
			create merge.sort (card_array)
			across
				merge.sorted_array as ar
			loop
				io.put_string (ar.item.out + "%T") -- Ascending order
			end
		end

		merge: ORDERING [CARD]

end
