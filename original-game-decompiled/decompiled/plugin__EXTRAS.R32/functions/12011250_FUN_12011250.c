
/* ==== FUN_12011250 @ 12011250 ==== 
 * signature: undefined4 __cdecl FUN_12011250(int param_1, undefined4 param_2)
 * body: 12011250-12011313
 */

undefined4 __cdecl FUN_12011250(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4c;
  int iStack_48;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined1 local_3c [38];
  undefined4 uStack_16;
  undefined4 uStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_4c);
  DAT_12039a9c = (*pcVar1)(local_4c,*(undefined4 *)(param_1 + 0x2c),param_2,local_3c);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&iStack_48);
  DAT_12039a9c = (*pcVar1)(iStack_48,auStack_44,uStack_16);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&iStack_40);
  DAT_12039a9c = (*pcVar1)(iStack_40,auStack_44,uStack_4);
  return 0;
}


