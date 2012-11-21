/************************************************************
 *	牧师天赋
 *	===========================
 *	
 *		
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitPriestSpells()
{
	SpellEntry * sp = NULL;
	if (sp = dbcSpell.LookupEntryForced(41635))
		sp->procFlags = PROC_ON_PHYSICAL_ATTACK_VICTIM|PROC_ON_MELEE_ATTACK_VICTIM|PROC_ON_RANGED_CRIT_ATTACK_VICTIM|PROC_ON_RANGED_ATTACK_VICTIM;
	
	// [强化神圣之灵]
	if (sp = dbcSpell.LookupEntryForced(33174))
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_ADD_PCT_MODIFIER;
		sp->EffectApplyAuraName[1] = SPELL_AURA_ADD_PCT_MODIFIER;
	}
	if (sp = dbcSpell.LookupEntryForced(33182))
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_ADD_PCT_MODIFIER;
		sp->EffectApplyAuraName[1] = SPELL_AURA_ADD_PCT_MODIFIER;
	}

	//// [全神贯注] 触发出来的技能
	//static uint32 spellids[3] = {47535,47536,47537};
	//for (uint8 i = 0;i<3;i++)
	//{
	//	if (sp = dbcSpell.LookupEntryForced(spellids[i]))
	//	{
	//		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
	//		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
	//		sp->Effect[2] = 0;
	//		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
	//		sp->EffectApplyAuraName[1] = SPELL_AURA_DUMMY;
	//		sp->EffectTriggerSpell[0] = 47755;
	//		sp->procFlags = PROC_ON_CAST_SPELL;
	//		sp->procChance = 100;
	//		sp->proc_interval = 1500;
	//	}
	//}
	if(sp = dbcSpell.LookupEntryForced(47755))
		//sp->logsId = 47755;

	if (sp = dbcSpell.LookupEntryForced(47509))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 47753;
	}

	if (sp = dbcSpell.LookupEntryForced(47511))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 47753;
	}

	if (sp = dbcSpell.LookupEntryForced(47515))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 47753;
	}

	if (sp = dbcSpell.LookupEntryForced(47516)) //恩赐
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(47517))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(47930))
	{
		sp->EffectApplyAuraName[1] = SPELL_AURA_MOD_HEALING_DONE_PERCENT;
		sp->EffectBasePoints[0] = -3;
		sp->EffectBasePoints[1] = 3;
		sp->EffectMiscValue[1] = 127;
	}

	if (sp = dbcSpell.LookupEntryForced(33150)) //圣光涌动
	{
		sp->procCharges = 0;
	}

	if (sp = dbcSpell.LookupEntryForced(33154))
	{
		sp->procCharges = 0;
	}

	if (sp = dbcSpell.LookupEntryForced(33151))
	{
		sp->procCharges = 0;
	}


	if (sp = dbcSpell.LookupEntryForced(34753)) //神圣专注
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if (sp = dbcSpell.LookupEntryForced(34859))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if (sp = dbcSpell.LookupEntryForced(34860))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if (sp = dbcSpell.LookupEntryForced(47788))
	{
		sp->Effect[2] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[2] = SPELL_AURA_DUMMY;
	}

	if (sp = dbcSpell.LookupEntryForced(724))
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON_OBJECT;
		sp->EffectMiscValue[0] = 181102;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_LOCATION_NEAR_CASTER;
	}

	if (sp = dbcSpell.LookupEntryForced(27870))
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON_OBJECT;
		sp->EffectMiscValue[0] = 181105;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_LOCATION_NEAR_CASTER;
	}

	if (sp = dbcSpell.LookupEntryForced(27871))
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON_OBJECT;
		sp->EffectMiscValue[0] = 181106;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_LOCATION_NEAR_CASTER;
	}

	if (sp = dbcSpell.LookupEntryForced(28275))
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON_OBJECT;
		sp->EffectMiscValue[0] = 181165;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_LOCATION_NEAR_CASTER;
	}

	if (sp = dbcSpell.LookupEntryForced(48086))
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON_OBJECT;
		sp->EffectMiscValue[0] = 181165;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_LOCATION_NEAR_CASTER;
	}

	if (sp = dbcSpell.LookupEntryForced(48087))
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON_OBJECT;
		sp->EffectMiscValue[0] = 181165;
		sp->EffectImplicitTargetA[0] = EFF_TARGET_LOCATION_NEAR_CASTER;
		sp->EffectBasePoints[0] = 0;
	}

	if(sp = dbcSpell.LookupEntryForced(15258))//暗影交織 触发的技能效果
		sp->EffectApplyAuraName[0] = SPELL_AURA_MOD_DAMAGE_PERCENT_DONE;

	if (sp = dbcSpell.LookupEntryForced(64044))//MS  [心靈恐慌]
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_MOD_FEAR;
		dbcSpell.LookupEntryForced(64058)->NameHash += 1;//触发的缴械效果
		//dbcSpell.LookupEntryForced(64058)->NotRmoveTrigger = true;
	}	

	if(sp = dbcSpell.LookupEntryForced(47948))//苦痛受難 触发的技能
		sp->Effect[0] = SPELL_EFFECT_DUMMY;

	if(sp = dbcSpell.LookupEntryForced(15407))
		sp->EffectBasePoints[0] = 14;

	if(sp = dbcSpell.LookupEntryForced(48156)) //精神鞭笞 9 rank
		sp->EffectBasePoints[0] = 150;
}
