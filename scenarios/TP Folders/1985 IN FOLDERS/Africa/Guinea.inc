##############################
# Country definition for GUI #
##############################

country =
{ tag                 = GUI
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 987
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  headofstate            = {  type = 9 id = 665001  } 
  headofgovernment       = {  type = 9 id = 665002  } 
  foreignminister        = {  type = 9 id = 665003  } 
  armamentminister       = {  type = 9 id = 665004  } 
  ministerofsecurity     = {  type = 9 id = 665005  } 
  ministerofintelligence = {  type = 9 id = 665006  } 
  chiefofstaff           = {  type = 9 id = 665007  } 
  chiefofarmy            = {  type = 9 id = 665008  } 
  chiefofnavy            = {  type = 9 id = 665009  } 
  chiefofair             = {  type = 9 id = 665010  } 
  
  ownedprovinces      = { 987 990 991 4465 4466 4467 4468 4469 4470 4471 4472
	}
  controlledprovinces = { 987 990 991 4465 4466 4467 4468 4469 4470 4471 4472
	}
  nationalprovinces   = { 987 990 991 983
4464 4465 4466 4467 4468 4469 4470 4471 4472
	}
  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 
   #Motorized
   1100 
   #Mountain
   1160 
   #Special Forces
   1250 
   #Mechanized
   1470
   #Irregular Infantry
   1360
   #Combat Engineers
   1830
   #Supply and Repair
   1990
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620
   #Armored Cars
   2860
   #Anti-Air
   2800
   #Armored Personnel Carriers
   2170
   #Field Artillery
   2290 
   #Self-Propelled Anti-Air
   2810
   #Man-Portable Air-Defense Systems
   3000
   #Self-Propelled Artillery
   2220
   #Self-Propelled Rocket Artillery
   2980 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110
   #Submarines
   3010
   #Transport Ships
   3900
   ###################
   #    Aircraft     #
   ###################
   #Multi-Role
   4500
   #Air Transports
   4250
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810
   #Heavy Industry
   5130
   #Material Science
   53050
   #Construction Eng.
   5800
   #Agriculture
   5700
   #Oil
   5190
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 #Defensive
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200
  }
  #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12203 id = 1 }
    location = 987 #966
    name     = "Republic of Guinea Armt"
    division =
    { id            = { type = 12203 id = 2 }
      name          = "1st Brigade"
      strength      = 100
      type          = d_06
      model         = 1
    }
    division =
    { id            = { type = 12203 id = 3 }
      name          = "2nd Brigade"
      strength      = 100
      type          = d_06
      model         = 1
    }
    division =
    { id            = { type = 12203 id = 4 }
      name          = "3rd Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
  }
}