
/* ==== FUN_1200d510 @ 1200d510 ==== 
 * signature: undefined __cdecl FUN_1200d510(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1200d510-1200d55c
 */

void __cdecl FUN_1200d510(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0xc,&local_4);
  uVar2 = FUN_12027340(param_1);
  DAT_12039a9c = (*pcVar1)(local_4,param_2,uVar2,param_3);
  return;
}


