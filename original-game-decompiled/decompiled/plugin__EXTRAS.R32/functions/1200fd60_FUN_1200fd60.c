
/* ==== FUN_1200fd60 @ 1200fd60 ==== 
 * signature: undefined __cdecl FUN_1200fd60(undefined4 param_1, undefined4 param_2)
 * body: 1200fd60-1200fe26
 */

void __cdecl FUN_1200fd60(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int local_48;
  uint local_44;
  int iStack_40;
  undefined1 auStack_3c [60];
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_48);
  uVar2 = 1;
  DAT_12039a9c = (*pcVar1)(local_48,param_2,&local_44);
  if (local_44 != 0) {
    do {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_48);
      uVar3 = uVar2 + 1;
      DAT_12039a9c = (*pcVar1)(local_48,param_2,uVar2,auStack_3c);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,2,&iStack_40);
      DAT_12039a9c = (*pcVar1)(iStack_40,param_1,auStack_3c);
      uVar2 = uVar3;
    } while (uVar3 <= local_44);
  }
  return;
}


