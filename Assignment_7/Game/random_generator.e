note
	description: "Summary description for {RANDOM_GENERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIE

create
	make

feature

	a: INTEGER
	b: INTEGER
	seed: INTEGER

feature
	next_number: INTEGER
	do
		seed:=seed * a + b
		seed:=seed.abs
		result:=seed
	end

feature
	set_values (seed_:INTEGER a_:INTEGER b_:INTEGER)
	do
		seed:=seed_
		seed:=seed
		a:=a_
		b:=b_
	end

feature
	make
	do

	end

end
