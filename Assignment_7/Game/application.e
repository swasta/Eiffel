note
	description : "Game application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature
	game: GAME

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			print("Enter number of players from 2 to 6: ")
			io.read_integer
			print("%N")
			create game.make(io.last_integer)
			game.run_game
		end

end
