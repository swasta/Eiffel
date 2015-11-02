note
	description: "Summary description for {PLAYER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER
create
	make

feature --access
	current_position: INTEGER
	die1_value: INTEGER
	die2_value: INTEGER
	random: DIE
	money: INTEGER
	n: INTEGER

feature
	next_move
	do

		die1_value:=random.next_number\\6 + 1
		die2_value:=random.next_number\\6 + 1
		if die1_value = die2_value AND current_position /= 1 then
			current_position:=current_position - 1
		else
			if die1_value + die2_value + current_position <= 40 then
				current_position:=die1_value + die2_value + current_position
			end
		end
		if current_position\\10 = 5 then
			if money < 30 then
				money := 0
			else
				money := money - 30
			end
		end
		if current_position\\10 = 0 then
			money := money + 70
		end
	end

feature

	make (number: INTEGER)
		do
			current_position := 1
			create random.make
			random.set_values (number, number + 3, number - 1)
			money := 50
			n := number
		end

end
