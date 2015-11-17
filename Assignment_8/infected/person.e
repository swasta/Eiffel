note
	description: "Summary description for {PERSON}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PERSON
create
	make

feature -- Initialization
	make (a_name: STRING)
		-- Create a person named 'a name'
	require
		a_name_valid: a_name /= Void and then not a_name.is_empty
	do
		name := a_name
		create {V_ARRAYED_LIST[PERSON]} coworkers
	ensure
		name_set: name = a_name
		no_coworkers: coworkers.is_empty
	end

feature -- Access
	name: STRING -- Name
	coworkers: V_LIST[PERSON] -- List of coworkers.
	has_flu: BOOLEAN -- Does the person have flu?

feature -- Element change

	add_coworker(p: PERSON) -- Add 'p' to 'coworkers'
	require
		p_exists: p /= Void
		p_different: p /= Current
		not_has_p: not coworkers.has(p)
	do
		coworkers.extend_back (p)
	ensure
		coworker_set: coworkers.has (p)
	end

	set_flu
		-- set 'has_flu' to true
	do
		has_flu := True
	ensure
		has_flu: has_flu
	end

invariant
	name_valid: name /= Void and then not name.is_empty
	coworkers_exists: coworkers /= Void
	all_coworkers_exist: not coworkers.has (Void)
end
