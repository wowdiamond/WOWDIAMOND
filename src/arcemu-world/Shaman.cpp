/************************************************************
 *	撒满天赋
 *	===========================
 *	
 *		
 *			
 *		
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitShamanSpells()
{
	SpellEntry * sp = NULL;

	// [石爪图腾效果]
	if(sp = dbcSpell.LookupEntryForced(58583))
	{
		sp->EffectTriggerSpell[0] = 58586;
	}

	if(sp = dbcSpell.LookupEntryForced(58584))
	{
		sp->EffectTriggerSpell[0] = 58587;
	}

	if(sp = dbcSpell.LookupEntryForced(58585))
	{
		sp->EffectTriggerSpell[0] = 58588;
	}

	//[强化火焰新星图腾]
	if (sp = dbcSpell.LookupEntryForced(16086))
	{
		sp->EffectApplyAuraName[2] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[2] = 5648;
		sp->procChance = 50;
		sp->procFlags = PROC_ON_CRIT_ATTACK | PROC_ON_SPELL_CRIT_HIT | PROC_ON_SPELL_HIT;
		//sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_ON_TOTEM;
	}
	if (sp = dbcSpell.LookupEntryForced(16544))
	{
		sp->EffectApplyAuraName[2] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[2] = 5648;
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CRIT_ATTACK | PROC_ON_SPELL_CRIT_HIT | PROC_ON_SPELL_HIT;
		//sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_ON_TOTEM;
	}
	//精通元素 持续时间现为30秒 正常应该是15秒
	if (sp = dbcSpell.LookupEntryForced(16166))
	{
		sp->DurationIndex = dbcSpell.LookupEntryForced(64701)->DurationIndex;
	}
	
}
