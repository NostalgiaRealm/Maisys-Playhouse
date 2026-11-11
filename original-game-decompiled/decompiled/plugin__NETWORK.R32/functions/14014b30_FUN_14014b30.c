
/* ==== FUN_14014b30 @ 14014b30 ==== 
 * signature: undefined4 __cdecl FUN_14014b30(int * param_1, undefined4 param_2)
 * body: 14014b30-14014cea
 */

undefined4 __cdecl FUN_14014b30(int *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int local_64;
  undefined1 *puStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [12];
  undefined1 local_44 [64];
  undefined1 uStack_4;
  
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_64);
  DAT_14028e48 = (*pcVar2)(local_64,local_44,param_2,0x3f);
  uStack_4 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_5c);
  DAT_14028e48 = (*pcVar2)(iStack_5c,&iStack_54,local_44,&DAT_14026bf4,4);
  if (iStack_54 != 0) {
    uVar1 = DAT_14028e48 >> 8;
    *param_1 = 0;
    return CONCAT31((int3)uVar1,1);
  }
  puStack_60 = local_44;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,6,&local_64);
  DAT_14028e48 = (*pcVar2)(local_64,&puStack_60,local_44,0x20);
  if (puStack_60 != (undefined1 *)0x0) {
    puStack_60 = puStack_60 + 1;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,6,&local_64);
    DAT_14028e48 = (*pcVar2)(local_64,&iStack_58,puStack_60,0x20);
    if (iStack_58 != 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_64);
      DAT_14028e48 = (*pcVar2)(local_64,auStack_50,puStack_60,iStack_58 - (int)puStack_60);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&iStack_5c);
      DAT_14028e48 = (*pcVar2)(iStack_5c,param_1,auStack_50);
      if (*param_1 == 200) {
        return CONCAT31((int3)(DAT_14028e48 >> 8),1);
      }
    }
  }
  return DAT_14028e48 & 0xffffff00;
}


