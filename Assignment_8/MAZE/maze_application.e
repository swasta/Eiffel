note
	description : "MAZE application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	MAZE_APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization
		make
		local
			file_name: STRING; maze: MAZE; maze_reader: MAZE_READER; row, column: INTEGER; flag: BOOLEAN;
		do
		io.put_string ("Please enter the name of a maze file: ")
		io.read_line
		file_name := io.last_string
		create maze_reader
		maze_reader.read_maze (file_name)
		maze := maze_reader.last_maze
		io.put_string (maze.out)
		io.put_string ("%N Please enter a starting field for finding a path.%N")
		io.put_string ("Row: ")
		io.read_integer
		row := io.last_integer
		io.put_string ("Column: ")
		io.read_integer
		column := io.last_integer
		flag := maze.find_path (row, column)
		io.put_boolean (flag)
		end

end
