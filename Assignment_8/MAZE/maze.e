note
	description: "Summary description for {MAZE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MAZE

inherit

	ARRAY2 [CHARACTER]
		redefine
			out
		end

create
	make

feature -- Map characters

	free_path: CHARACTER = '-'
			-- Character for empty fields.

	an_exit: CHARACTER = '#'
			-- Character for an exit field.

	a_wall: CHARACTER = '*'
			-- Character for a wall field.

	Visited_char: CHARACTER = 'x'
			-- Character for a field that has been visited by `find_path'.

	wasHere: ARRAY2[BOOLEAN]
	correctPath: ARRAY2[BOOLEAN]



feature -- Element change

	set_empty (r, c: INTEGER)
			-- Set field with row `r' and column `c' to empty.
		require
			r_valid: r >= 1 and r <= height
			c_valid: c >= 1 and c <= width
		do
			put (free_path, r, c)
		ensure
			field_set: item (r, c) = free_path
		end

	set_exit (r, c: INTEGER)
			-- Set field with row `r' and column `c' to exit.
		require
			r_valid: r >= 1 and r <= height
			c_valid: c >= 1 and c <= width
		do
			put (an_exit, r, c)
		ensure
			field_set: item (r, c) = an_exit
		end

	set_wall (r, c: INTEGER)
			-- Set field with row `r' and column `c' to wall.
		require
			r_valid: r >= 1 and r <= height
			c_valid: c >= 1 and c <= width
		do
			put (a_wall, r, c)
		ensure
			field_set: item (r, c) = a_wall
		end

	set_visited (r, c: INTEGER)
			-- Set field with row `r' and column `c' to visited.
		require
			r_valid: r >= 1 and r <= height
			c_valid: c >= 1 and c <= width
		do
			put (Visited_char, r, c)
		ensure
			field_set: item (r, c) = Visited_char
		end

feature -- Status report

	is_valid (c: CHARACTER): BOOLEAN
			-- Is `c' a valid map character?
		do
			Result := c = free_path or c = a_wall or c = an_exit
		end

feature
	inith
		do
			create wasHere.make_filled (false, 6, 6)
			create correctPath.make_filled (false, 6, 6)
		end

feature -- Path finding

	path: STRING
			-- Sequence of instructions to find the way out of the maze.

	find_path (r, c: INTEGER): BOOLEAN
	local
		endX, endY: INTEGER;
			-- Find the path starting at row `r' and column `c'.
		do
			if current.item (r, c) = an_exit then
				Result := True
			end
			if current.item (r, c) = a_wall or current.item (r, c) = Visited_char then
				Result := False
			end
			current.item (r, c) := Visited_char
			if c /= 1 then
				if find_path(r,c-1) then
					path.append ("> L > ")
					Result := True
				end
			end
			if c /= width - 1 then
				if find_path(r,c+1) then
					path.append ("> R > ")
					Result := True
				end
			end
			if r /= 1 then
				if find_path(r-1, c) then
					path.append ("> UP > ")
					Result := True
				end
			end
			if r /= height - 1 then
				if find_path(r+1,c) then
					path.append ("> DOWN > ")
					Result := True
				end
			end
			Result := False;
		end

feature -- Output

	out: STRING
			-- Maze map.
		local
			i, j: INTEGER
		do
			from
				i := 1
				j := 1
				Result := ""
			until
				i > height
			loop
				from
					j := 1
				until
					j > width
				loop
					Result.append_character (item (i, j))
					j := j + 1
				end
				i := i + 1
				Result := Result + "%N"
			end
		end

end

