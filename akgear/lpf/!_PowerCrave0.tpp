// Never Forget: Comments can "lie", but code not so much ;P
// ITEMTYPE MAINHAND SLOTS ONLY
// ----------------------------
LPF ADD_ITEMTYPE_IN_2DA
	INT_VAR
		inventorySlotType 	= 35
	STR_VAR
		soundGrab			= ~!_GAM_0A~
		soundDrop			= ~!_GAM_0B~
	RET
		L_newtype 			= typeNumber // L_newtype is used in setup-akgear.tp2
END
// OPTIONAL: REGISTER ITEMTYPE/-CATEGORY !_UHILT(Uncomfortable Hilt)
// -----------------------------------------------------------------
LPF ADD_ITEMCATEGORY_IN_IDS
INT_VAR
	typeNumber 		= L_newtype 
STR_VAR
	categoryName	= ~!_UHILT~
END
// EQ BLADE MINOR COLOR
// --------------------
LPF ADD_ITEM_EQEFFECT
	INT_VAR
		opcode 		= 7	// Set color
		target		= 1	// Self
		parameter1 	= 49// Dark Rust
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
		speed 					= 4 // Speed factor
		dicesize 				= 10// x sided dice to roll
		dicenumber 				= 1 // Number of dices to roll
		damage_type 			= 3 // Slashing
		flag_strength 			= 1 // Add strength bonus
		animation_overhand 		= 50// x% chance to play overhand swing animation when attacking
		animation_backhand 		= 50// x% chance to play backhand swing animation when attacking
	STR_VAR
		icon = ~!_ISWPC0~
END
// VALUES TO ITEM HEADER EFFECT
// ----------------------------
LPF ADD_ITEM_EFFECT
	INT_VAR
		opcode 			= 111	// Create Weapon
		header			= 1 	// Add effect to only x item abilities(0=every item ability)
		type 			= 1 	// Add effect to item ability with type x(1 = Melee)
		target 			= 1 	// Preset target(e.g. 1 = Self)
		duration 		= 6		// Effect will last x seconds (6 seconds = 1 round)
	STR_VAR
		resource = ~!_SW1PC1~	// Sets which item/weapon should be created
END