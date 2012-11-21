/************************************************************
 *	法师天赋
 *	===========================
 *	
 *		
 *
 *		
 *			
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitMageSpells()
{
	SpellEntry * sp = NULL;
	sp = dbcSpell.LookupEntryForced( 130 );//缓落术
	if( sp != NULL )
		sp->EffectApplyAuraName[0] = SPELL_AURA_SAFE_FALL;
	

	// [思维冷却]
	if(sp = dbcSpell.LookupEntryForced(57761))
	{
		sp->procCharges = 1;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->AuraInterruptFlags |= AURA_INTERRUPT_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(54646)) //专注魔法
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if(sp = dbcSpell.LookupEntryForced(44404)) //飞弹速射
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54486))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54488))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54489))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54490))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44546)) //思维冷却
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44548))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44549))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44543)) //寒冰指
	{
		sp->procChance = 7;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44545))
	{
		sp->procChance = 15;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(33395)) //冰冻术 水元素
	{
		sp->CategoryRecoveryTime = 24000;
	}

	if(sp = dbcSpell.LookupEntryForced(55080))
	{
		sp->MechanicsType = MECHANIC_FROZEN;
	}

	if(sp = dbcSpell.LookupEntryForced(12494))
	{
		sp->MechanicsType = MECHANIC_FROZEN;
	}

	if (sp = dbcSpell.LookupEntryForced(29077))
	{
		//sp->logsId = 29077;
	}

	if (sp = dbcSpell.LookupEntryForced(57531))//[秘法潛能]
	{
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;
	}
	if (sp = dbcSpell.LookupEntryForced(36032))//[奥术冲击]
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;

	if (sp = dbcSpell.LookupEntryForced(31687))//召唤水元素
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON;
		sp->Effect[1] = 0;
		sp->EffectApplyAuraName[0] = sp->EffectApplyAuraName[1] = 0;
		sp->EffectMiscValueB[0] = 0;
		sp->EffectMiscValue[0] = 510;
	}
}
