// Never Forget: Comments can "lie", but code not so much ;P
// ADD ITEM "Weave to Dust" TO STORE
// ---------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			// Number of same type of items in store
	STR_VAR
		flags 		= ~identified~	// Will be sold identified
		item_name 	= ~!_SW1HWD~	// The item which will be sold
END
// ADD ITEM "Layers of Compassion" TO STORE
// ----------------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			
	STR_VAR
		flags 		= ~identified~	
		item_name 	= ~!_PLATLC~
END
// ADD ITEM "Power Crave" TO STORE
// -------------------------------
LPF ADD_STORE_ITEM_EX
	INT_VAR
		stack 		= 1 			
	STR_VAR
		flags 		= ~identified~	
		item_name 	= ~!_SW1PC0~
END