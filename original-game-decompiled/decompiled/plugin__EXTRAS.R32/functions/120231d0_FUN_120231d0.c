
/* ==== FUN_120231d0 @ 120231d0 ==== 
 * signature: undefined __cdecl FUN_120231d0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 120231d0-12023288
 */

void __cdecl FUN_120231d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  int local_34;
  uint local_30;
  short asStack_2c [22];
  
  local_30 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_34);
  sVar3 = 1;
  DAT_12039a9c = (*pcVar1)(local_34,param_3,&local_30);
  if (local_30 != 0) {
    do {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_34);
      iVar2 = (int)sVar3;
      sVar3 = sVar3 + 1;
      DAT_12039a9c = (*pcVar1)(local_34,param_3,iVar2,asStack_2c);
      FUN_12023da0(param_1,asStack_2c,param_2);
    } while ((uint)(int)sVar3 <= local_30);
  }
  return;
}


