// Never Forget: Comments can "lie", but code not so much ;P
// EQ BLADE MINOR COLOR
// --------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7	// Set color
		target		= 1	// Self
		parameter1 	= 97// Light Mint Blue
		parameter2 	= 21// Head/blade minor
		timing 		= 2	// Instant/While equipped
END
// EQ BLADE MAJOR COLOR
// --------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7	// Set color
		target		= 1	// Self
		parameter1 	= 47// Pure Dark Red
		parameter2 	= 16// Head/blade/staff major
		timing 		= 2	// Instant/While equipped
END
// EQ GRIP COLOR
// -------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7	// Set color
		target		= 1	// Self
		parameter1 	= 62// Dark Lavender
		parameter2 	= 20// Grip/staff minor
		timing 		= 2	// Instant/While equipped
END
// NEW ITEM HEADER (MACRO/LIB)
// ---------------------------
LPF SIMP_ADD_ITEM_HEADER END
// VALUES TO ITEM HEADER
// ---------------------
LPF ALTER_ITEM_HEADER
	INT_VAR
		header_type 			= 0 // Check if item header type is "None"
		match_icon 				= 1 // Use string value of variable "icon"
		header					= 1 // Alter only x item abilities(0=every item ability)
		location 				= 1 // Weapon
		new_header_type 		= 1 // None to Melee
		target					= 1 // Living actor
		range 					= 1 // Range in feet
		speed 					= 3 // Speed factor
		thac0_bonus 			= 1 // Bonus to hit
		dicesize 				= 10// x sided dice to roll
		dicenumber 				= 1 // Number of dices to roll
		damage_bonus 			= 1 // This is the damage which will be added to the rolled damage  
		damage_type 			= 3 // Slashing
		flag_strength 			= 1 // Add strength bonus
		charges					= 1 // Number of charges
		animation_overhand 		= 50// x% chance to play overhand swing animation when attacking
		animation_backhand 		= 50// x% chance to play backhand swing animation when attacking
	STR_VAR
		icon = ~!_ISWPC1~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 111	// Create Weapon
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		type 			= 1 	// Add effect to item ability with type x(1 = Melee)
		target 			= 1 	// Preset target(e.g. 1 = Self)
		duration 		= 12	// Effect will last x seconds (6 seconds = 1 round)
		parameter1 		= 2		// Creates x charges(to understand this value check value of "charges" in "PowerCrave2.tph")
	STR_VAR
		resource = ~!_SW1PC2~	// Sets which item/weapon should be created
END