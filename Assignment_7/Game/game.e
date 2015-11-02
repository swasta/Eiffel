note
	description: "Summary description for {GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME
create
	make

feature
	number_of_players: INTEGER
	players: ARRAY[PLAYER]

feature
	run_game
	local
		win: BOOLEAN
		i: INTEGER
		max : INTEGER
	do
		from
			win:=false
		until
			win=true
		loop
			from
				i:=1
			until
				i=number_of_players OR win = true
			loop
				players[i].next_move
				print("player ")
				print(i)
				print("move%N" + "die_1: ")
				print(players[i].die1_value)
				print( ", die_2: ")
				print(players[i].die2_value)
				print("%N")
				print("position: ")
				print(players[i].current_position)
				print("%N")
				if players[i].current_position=40 then
					win:=true
				end
				i:=i+1
			end
		end
		max := 0
			across
				players as player
			loop
				if player.item.money > max then
					max := player.item.money
				end
			end
			across
				players as player
			loop
				if player.item.money = max then
					IO.put_string ("Player ")
					IO.put_integer (player.item.n)
					IO.put_string (" wins with money=")
					IO.put_integer(player.item.money)
					IO.put_new_line
				end
			end
	end

feature
	make (number_of_players_: INTEGER)
	require
		more_than_one: number_of_players_ > 1
		less_or_equal_than_six: number_of_players_ <= 6
	do
		create players.make_empty

		from
			number_of_players:=1
		until
			number_of_players=number_of_players_ + 1
		loop
			players.force (create {PLAYER}.make (number_of_players), number_of_players)
			number_of_players:=number_of_players + 1
		end
	end
end
