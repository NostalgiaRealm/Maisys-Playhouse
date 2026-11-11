
/* ==== FUN_1200fc20 @ 1200fc20 ==== 
 * signature: undefined __cdecl FUN_1200fc20(undefined4 param_1)
 * body: 1200fc20-1200fd51
 */

void __cdecl FUN_1200fc20(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int local_4c;
  uint local_48;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [38];
  undefined4 uStack_16;
  undefined4 uStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_4c);
  uVar2 = 1;
  DAT_12039a9c = (*pcVar1)(local_4c,param_1,&local_48);
  if (local_48 != 0) {
    do {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_4c);
      uVar3 = uVar2 + 1;
      DAT_12039a9c = (*pcVar1)(local_4c,param_1,uVar2,auStack_3c);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_44);
      DAT_12039a9c = (*pcVar1)(iStack_44,uStack_16);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_40);
      DAT_12039a9c = (*pcVar1)(iStack_40,uStack_4);
      uVar2 = uVar3;
    } while (uVar3 <= local_48);
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,1,&local_4c);
  DAT_12039a9c = (*pcVar1)(local_4c,param_1);
  return;
}


