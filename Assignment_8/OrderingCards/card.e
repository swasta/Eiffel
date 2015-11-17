note
	description: "Summary description for {CARD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CARD
inherit
	COMPARABLE
redefine
	is_less
end

create
	make

feature{DECK} -- Initialization

	make(a_suite, a_face: INTEGER)
		-- Create a card with a specific suite and value
		require
			a_suite_valid: a_suite /= Void and a_suite > 0 and a_suite < 14
			a_face_valid: a_face /= Void and a_face > 0 and a_suite < 5
		do
			suite := a_suite
			face := a_face
		end

feature -- Access

	suite: INTEGER
		-- Suite

	face: INTEGER assign set_face
		-- Value

feature
	set_face(a_face: INTEGER)
		do
			face := a_face
		end

feature
	set_suite(a_suite: INTEGER)
		do
			suite := a_suite
		end

feature is_less alias "<" (other: like Current): BOOLEAN
	require else
		not_void: other /= Void
	do
		if suite = other.suite then
			Result := face < other.face
		else
			Result := suite < other.suite
		end
	end
end
