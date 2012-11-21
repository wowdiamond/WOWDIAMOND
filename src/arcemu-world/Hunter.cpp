/************************************************************
 *	猎人天赋
 *	===========================
 *	
 *		
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitHunterSpells()
{
	SpellEntry * sp = NULL;
	// [喂养宠物]
	if(sp = dbcSpell.LookupEntryForced(6991))
		sp->EffectImplicitTargetA[0] = EFF_TARGET_GAMEOBJECT_ITEM;

	if(sp = dbcSpell.LookupEntryForced(61847))
	{
		sp->Effect[2] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[2] = SPELL_AURA_MOD_DODGE_PERCENT;
	}

	// [强化雄鹰守护]
	if(sp = dbcSpell.LookupEntryForced(19552))
		sp->BGR_one_buff_on_target = 0;
	if(sp = dbcSpell.LookupEntryForced(19553))
		sp->BGR_one_buff_on_target = 0;
	if(sp = dbcSpell.LookupEntryForced(19554))
		sp->BGR_one_buff_on_target = 0;
	if(sp = dbcSpell.LookupEntryForced(19555))
		sp->BGR_one_buff_on_target = 0;
	if(sp = dbcSpell.LookupEntryForced(19556))
		sp->BGR_one_buff_on_target = 0;

	if(sp = dbcSpell.LookupEntryForced(53252))
	{
		sp->c_is_flags |=	SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_ON_PET;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_PET;
		sp->EffectTriggerSpell[0]	=	53398;
		sp->procChance = 50;
		sp->procFlags	=	PROC_ON_CRIT_ATTACK | PROC_ON_SPELL_CRIT_HIT | PROC_TARGET_SELF;
	}

	if(sp = dbcSpell.LookupEntryForced(53253))
	{
		sp->c_is_flags |=	SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_ON_PET;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_PET;
		sp->EffectTriggerSpell[0]	=	53398;
		sp->procChance = 100;
		sp->procFlags	=	PROC_ON_CRIT_ATTACK | PROC_ON_SPELL_CRIT_HIT | PROC_TARGET_SELF;
	}

	if(sp = dbcSpell.LookupEntryForced(53398))
	{
		sp->EffectImplicitTargetA[0] = EFF_TARGET_PET_MASTER;
	}

	if(sp = dbcSpell.LookupEntryForced(34456))
	{
		sp->EffectBasePoints[0] = 3;
	}

	if(sp = dbcSpell.LookupEntryForced(53257))
	{
		sp->EffectImplicitTargetA[0] = EFF_TARGET_PET;
	}

	if(sp = dbcSpell.LookupEntryForced(56314))
	{
		sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_PET_OWNER | SPELL_FLAG_IS_EXPIREING_WITH_PET;
		sp->Effect[0] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 57447;
		sp->Effect[1] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[1] = 57475;
	}

	if(sp = dbcSpell.LookupEntryForced(56315))
	{
		sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_PET_OWNER | SPELL_FLAG_IS_EXPIREING_WITH_PET;
		sp->Effect[0] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 57452;
		sp->Effect[1] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[1] = 57482;
	}

	if(sp = dbcSpell.LookupEntryForced(56316))
	{
		sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_PET_OWNER | SPELL_FLAG_IS_EXPIREING_WITH_PET;
		sp->Effect[0] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 57453;
		sp->Effect[1] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[1] = 57483;
	}

	if(sp = dbcSpell.LookupEntryForced(56317))
	{
		sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_PET_OWNER | SPELL_FLAG_IS_EXPIREING_WITH_PET;
		sp->Effect[0] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 57457;
		sp->Effect[1] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[1] = 57484;
	}

	if(sp = dbcSpell.LookupEntryForced(56318))
	{
		sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_PET_OWNER | SPELL_FLAG_IS_EXPIREING_WITH_PET;
		sp->Effect[0] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 57458;
		sp->Effect[1] = SPELL_EFFECT_TRIGGER_SPELL;
		sp->EffectTriggerSpell[1] = 57485;
	}

	if(sp = dbcSpell.LookupEntryForced(53220))
	{
		sp->NameHash+=1;
	}

	if(sp = dbcSpell.LookupEntryForced(34720))// [追獵回饋] 触发的技能

	if(sp = dbcSpell.LookupEntryForced(781))//逃脫
		sp->Effect[0] = SPELL_EFFECT_DUMMY;
}