note
	description: "Summary description for {PRODUCT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PRODUCT

feature

	make (p_public: REAL p_real: REAL)
		require
			p_real < p_public
		do
			price_public := p_public
			price_real := p_real
		end

feature

	set_price_real (new_price_real: REAL)
		require
			new_price_real > 0
			new_price_real < price_public
		do
			price_real := new_price_real
		end

	set_price_public (new_price_public: REAL)
		require
			new_price_public > 0
			new_price_public > price_real
		do
			price_public := new_price_public
		end

feature

	price_public: REAL

	price_real: REAL

	description: STRING
		deferred
		end

end
