
/* ==== FUN_11010f09 @ 11010f09 ==== 
 * signature: undefined __fastcall FUN_11010f09(uint * param_1, uint * param_2)
 * body: 11010f09-11010f26
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_11010f09(uint *param_1,uint *param_2)

{
  int iVar1;
  code *pcVar2;
  uint in_EAX;
  
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | in_EAX;
  *param_2 = *param_2 | in_EAX;
  iVar1 = *(int *)((int)param_1 * 2);
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | (uint)param_1;
  *param_1 = *param_1 | (uint)param_1;
  _DAT_08070609 = _DAT_08070609 | in_EAX + iVar1;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


