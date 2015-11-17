note
	description: "temp application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit

	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Simulate flu epidemic
		local
			joe, mary, tim, sarah, bill, cara, adam: PERSON
		do
			create joe.make ("Joe")
			create mary.make ("Mary")
			create tim.make ("Tim")
			create sarah.make ("Sarah")
			create bill.make ("Bill")
			create cara.make ("Cara")
			create adam.make ("Adam")
			joe.add_coworker (sarah)
			adam.add_coworker (joe)
			tim.add_coworker (sarah)
			sarah.add_coworker (cara)
			bill.add_coworker (tim)
			cara.add_coworker (mary)
			mary.add_coworker (bill)
			infect (bill)
		end

	infect (p: PERSON)
			-- Infect 'p' and his/her coworkers.
		require
			p_exists: p /= Void
		do
			p.set_flu
			across
				p.coworkers as c
			loop
				if not c.item.has_flu then
					infect (c.item)
				end
			end
		end

end
