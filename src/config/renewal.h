// Copyright (c) Hercules Dev Team, licensed under GNU GPL.
// See the LICENSE file
// Portions Copyright (c) Athena Dev Teams
#ifndef _CONFIG_RENEWAL_H_
#define _CONFIG_RENEWAL_H_

/**
 * Hercules configuration file (http://hercules.ws)
 * For detailed guidance on these check http://hercules.ws/wiki/SRC/config/
 **/

/**
 * @INFO: This file holds general-purpose renewal settings, for class-specific ones check /src/config/classes folder
 **/

<<<<<<< HEAD
//#define DISABLE_RENEWAL
=======
>>>>>>> atherea/master
#ifndef DISABLE_RENEWAL

/// game renewal server mode
/// (disable by commenting the line)
///
/// leave this line to enable renewal specific support such as renewal formulas
<<<<<<< HEAD
#define RENEWAL
=======
//#define RENEWAL
>>>>>>> atherea/master

/// renewal cast time
/// (disable by commenting the line)
///
/// leave this line to enable renewal casting time algorithms
/// cast time is decreased by DEX * 2 + INT while 20% of the cast time is not reduced by stats.
/// example:
///  on a skill whos cast time is 10s, only 8s may be reduced. the other 2s are part of a
///  "fixed cast time" which can only be reduced by specialist items and skills
<<<<<<< HEAD
#define RENEWAL_CAST
=======
//#define RENEWAL_CAST
>>>>>>> atherea/master

/// renewal drop rate algorithms
/// (disable by commenting the line)
///
/// leave this line to enable renewal item drop rate algorithms
/// while enabled a special modified based on the difference between the player and monster level is applied
/// based on the http://irowiki.org/wiki/Drop_System#Level_Factor table
<<<<<<< HEAD
#define RENEWAL_DROP
=======
//#define RENEWAL_DROP
>>>>>>> atherea/master

/// renewal exp rate algorithms
/// (disable by commenting the line)
///
/// leave this line to enable renewal item exp rate algorithms
/// while enabled a special modified based on the difference between the player and monster level is applied
<<<<<<< HEAD
#define RENEWAL_EXP
=======
//#define RENEWAL_EXP
>>>>>>> atherea/master

/// renewal level modifier on damage
/// (disable by commenting the line)
///
// leave this line to enable renewal base level modifier on skill damage (selected skills only)
<<<<<<< HEAD
#define RENEWAL_LVDMG
=======
//#define RENEWAL_LVDMG
>>>>>>> atherea/master

/// renewal enchant deadly poison algorithm
///
/// leave this line to enable the renewed EDP algorithm
/// under renewal mode:
///  - damage is NOT increased by 400%
///  - it does NOT affect grimtooth
///  - weapon and status ATK are increased
<<<<<<< HEAD
#define RENEWAL_EDP
=======
//#define RENEWAL_EDP
>>>>>>> atherea/master

/// renewal ASPD [malufett]
/// (disable by commenting the line)
///
/// leave this line to enable renewal ASPD
/// - shield penalty is applied
/// - AGI has a greater factor in ASPD increase
/// - there is a change in how skills/items give ASPD
/// - some skill/item ASPD bonuses won't stack
<<<<<<< HEAD
#define RENEWAL_ASPD
=======
//#define RENEWAL_ASPD
>>>>>>> atherea/master

#endif // DISABLE_RENEWAL

#endif // _CONFIG_RENEWAL_H_
