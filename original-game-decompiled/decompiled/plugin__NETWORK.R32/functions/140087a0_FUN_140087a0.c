
/* ==== FUN_140087a0 @ 140087a0 ==== 
 * signature: undefined4 __cdecl FUN_140087a0(int param_1)
 * body: 140087a0-140088ae
 */

undefined4 __cdecl FUN_140087a0(int param_1)

{
  code *pcVar1;
  int local_100;
  uint local_fc;
  int iStack_f8;
  undefined1 auStack_f4 [4];
  undefined1 uStack_f0;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_100);
  DAT_14028e48 = (*pcVar1)(local_100,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),&local_fc);
  if (1 < local_fc) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_100);
    DAT_14028e48 = (*pcVar1)(local_100,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),2,
                             auStack_f4);
    FUN_14007e60((int)auStack_f4);
    uStack_f0 = 0;
    FUN_140074e0(param_1,(int)auStack_f4);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,&iStack_f8);
    DAT_14028e48 = (*pcVar1)(iStack_f8,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),2,
                             auStack_f4);
    return 0;
  }
  return 0x10000;
}


