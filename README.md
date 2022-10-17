# HordeQuake

## What is HordeQuake

HordeQuake is a mod of Quake 4 styled after popular games of the horde shooter genre, namely *Payday 2* and *Left 4 Dead 2*, taking inspiration from their game flow, weaponry, enemy variations, and objective based gameplay.


## What has been (will be) changed

### Monster Properties: [WIP]
Horde Quake adds properties to monsters to make them resemble the dynamic of the zombies of *Left 4 Dead 2* or the police units of *Payday 2*. 
The list of adjusted/new monsters are as follows:

 - Shield (Damage reduction/immunity from the front)
 - Pilot (Can attack from a different angle
 - Buff
 - Medic
 - Tank
 - (Replace one of these with a Sniper?)

### Armor Gating
Armor gating is a concept in Payday 2 utilized to avoid damage, as any amount of armor blocks all damage (5 armor will block a 100 damage shot). It also refers to the process of repeatedly gaining small amounts of armor to prevent health damage. 

This has been implemented in HordeQuake in three parts.

 1. Armor now fully blocks damage instead of a percentage of the damage, there is no longer minimum health damage on damage instances
 2. Having at least 1 armor will block any single damage instance entirely
 3. Killing an enemy will grant 5 armor on a 5 second global cooldown

### Weaponry
Weaponry has been augmented in HordeQuake. Arena shooters like Quake generally give the player a large selection of weapons, where each individual weapon has a specific niche, or has a limitation preventing its constant use. HordeQuake mimics the more modern 2-weapon loadout, but from its inspiration from *Payday 2* has the player choose from primaries and secondaries designed to complement and cover each others weaknesses.

Primaries: 

 - Pump Shotgun (High damage at close, moderate ammo efficiency, knockback)
 - SMG (Moderate damage, High ammo efficiency)
 - Hunting Rifle (High damage, moderate ammo efficiency, penetration, low ROF)

Secondaries: 

 - Desert Eagle (High damage, low ammo efficiency, penetration)
 - M9 (Low damage, high ammo efficiency)
 - GL40 (High damage, splash damage, abysmal ammo efficiency)


### Assault Waves
Horde shooters generally have lulls and highs in their combat, Horde Quake mimics the Assault Waves of *Payday 2* specifically. Essentially, how this works is there are three phases to any given assault: Build, Sustain and Fade.

Build: The build phase consists of slowly spawning in enemy forces, special enemies spawn less frequently. It will last roughly 30 seconds.
Sustain: This phase consists of a higher static spawn rate for enemy forces, and special enemies spawn more frequently. It lasts roughly 2.5 minutes.
Fade: This phase consists of no enemy spawns and is intended for players to resupply/solve objectives. It lasts roughly 20 seconds.

### Objectives
Horde shooters typically have objectives to force the players to switch focus from thinning the herd onto accomplishing something specific. HordeQuake has a few objectives that lock the player from progression until they are resolved.

 - Bypass the security door
 - Bring the lift down
 - Broadcast your location to evac
 - Destroy the weapon cache
 - Holdout for x time

## How To Test

Most of HordeQuake's functionality can be tested by loading up the test map, but with debug functionality, more specific things can be tested.

### Monster Properties:
Spawn the adjusted monsters with these commands: 

### Armor Gating:
Killing an enemy or taking damage with armor will demonstrate the armor gating system, spawn a monster and use the `give all` command to receive weaponry and armor to test this.

### Weaponry:
Spawn the adjusted weaponry (note, you are able to but not intended to have all the weaponry at the same time) with these commands:

### Assault Waves:
Begin the assault wave with this command: 

### Objectives:
The objectives are located on the test map. Load the test map with: 