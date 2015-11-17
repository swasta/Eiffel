note
	description: "Summary description for {MAZE_READER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MAZE_READER

feature -- Basic operations.
	read_maze (f: STRING)
			-- Read a maze from file with filename `f'.
		local
			file: PLAIN_TEXT_FILE
			n, m, i: INTEGER
		do
			has_error := False
			error_message := ""
			if f = Void or else f.is_empty then
				has_error := True
				error_message := "Invalid file name"
			else
				create file.make (f)
				if not file.exists then
					has_error := True
					error_message := "File " + f.out + " does not exist.%N"
				else
					file.open_read
					if not file.is_open_read then
						has_error := True
						error_message := "File " + f.out + " could not be opened.%N"
					else
						file.start
						file.read_integer
						n := file.last_integer
						file.read_integer
						m := file.last_integer
						if n <= 0 or m <= 0 then
							has_error := True
							error_message := "Maze dimensions not valid.%N"
						else
							from
								i := 0
								create last_maze.make (m, n)
							until
								file.off or has_error or i >= n*m
							loop
								file.read_character
								inspect file.last_character
								when {MAZE}.free_path then
									last_maze.set_empty ((i // n) + 1, (i \\ n) + 1)
								when {MAZE}.a_wall then
									last_maze.set_wall ((i // n) + 1, (i \\ n) + 1)
								when {MAZE}.an_exit then
									last_maze.set_exit ((i // n) + 1, (i \\ n) + 1)
								else
									if file.last_character.is_space then
										-- Ignore it
										i := i - 1
									else
										has_error := True
										error_message := "Wrong character " + file.last_character.out + "%N"
									end
								end
								i := i + 1
							end
							if i < n * m then
								has_error := True
								error_message := "Maze not filled%N"
							end
						end
					end
				end
			end
		end

feature -- Access
	has_error: BOOLEAN
			-- Has there been an error when reading?

	error_message: STRING
			-- Error message.

	last_maze: MAZE
			-- Maze that was read last.
end

