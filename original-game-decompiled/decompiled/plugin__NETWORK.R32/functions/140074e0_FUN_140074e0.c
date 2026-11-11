
/* ==== FUN_140074e0 @ 140074e0 ==== 
 * signature: undefined __cdecl FUN_140074e0(undefined4 param_1, int param_2)
 * body: 140074e0-1400768b
 */

void __cdecl FUN_140074e0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int local_54;
  uint local_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  *(undefined2 *)(param_2 + 0x7a) = 0;
  *(undefined4 *)(param_2 + 0x76) = 0;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  if (*(int *)(param_2 + 0x94) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x94),&local_50);
    uVar2 = 1;
    if (local_50 != 0) {
      do {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x94),uVar2,auStack_48);
        if (iStack_44 != 0) {
          FUN_14008dc0(iStack_44);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_4c);
          DAT_14028e48 = (*pcVar1)(iStack_4c,iStack_44);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 <= local_50);
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x94));
    *(undefined4 *)(param_2 + 0x94) = 0;
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    FUN_14008dc0(*(int *)(param_2 + 0x98));
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x98));
    *(undefined4 *)(param_2 + 0x98) = 0;
  }
  *(undefined1 *)(param_2 + 0x36) = 0;
  return;
}


