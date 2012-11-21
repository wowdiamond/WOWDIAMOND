/************************************************************
 *	盗赋天赋
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

void World::InitRogueSpells()
{
	SpellEntry * sp = NULL;
	//装死技能时间设置1分钟
	sp = dbcSpell.LookupEntryForced(45182);
	if(sp)
	{
		sp->Category = 60000;
		sp->CategoryRecoveryTime = 60000;
		sp->StartRecoveryTime = 60000;
	}

	//31221	敏锐大师	等级 1		在潜行状态和解除潜行状态后的6秒内进行的攻击所造成的伤害提高$s1%。	
	//31222	敏锐大师	等级 2		在潜行状态和解除潜行状态后的6秒内进行的攻击所造成的伤害提高$s1%。
	//31223	敏锐大师	等级 3		在潜行状态和解除潜行状态后的6秒内进行的攻击所造成的伤害提高$s1%。
	//31666	敏锐大师	effect = 6 auraname = 226
	sp = dbcSpell.LookupEntryForced(31221);
	if(sp)
	{
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectTriggerSpell[1] = 31666;
		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_PROC_TRIGGER_SPELL;
	}
	sp = dbcSpell.LookupEntryForced(31222);
	if(sp)
	{
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectTriggerSpell[1] = 31666;
		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_PROC_TRIGGER_SPELL;
	}
	sp = dbcSpell.LookupEntryForced(31223);
	if(sp)
	{
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectTriggerSpell[1] = 31666;
		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_PROC_TRIGGER_SPELL;
	}
	sp = dbcSpell.LookupEntryForced(31665);
	if(sp)
	{
		sp->DurationIndex = dbcSpell.LookupEntryForced(31666)->DurationIndex;
		sp->RankNumber = 4;
	}
	sp = dbcSpell.LookupEntryForced(31666);
	if(sp)
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_MOD_DAMAGE_PERCENT_DONE;
		sp->EffectMiscValue[0] = 127;
		sp->RankNumber = 4;
	}

	// [无情]天赋
	if(sp = dbcSpell.LookupEntryForced(14156))
		sp->procFlags = 87376;

	// [背叛者的瘋狂]
	if(sp = dbcSpell.LookupEntryForced(40477))
		//sp->ProcsPerMinute = 2.0f;

	//[灭绝]
	if(sp = dbcSpell.LookupEntryForced(58426))
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 58427;//灭绝
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->procChance = 100;
		dbcSpell.LookupEntryForced(58427)->DurationIndex = dbcSpell.LookupEntryForced(58428)->DurationIndex;
	}

	if(sp = dbcSpell.LookupEntryForced( 14177 )) //冷血
	{
		sp->EffectSpellClassMask[0][0] = 637665798;
		sp->EffectSpellClassMask[0][1] = 262415;
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;
	}
}