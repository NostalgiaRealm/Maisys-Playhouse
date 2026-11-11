
/* ==== FUN_140120a0 @ 140120a0 ==== 
 * signature: int __cdecl FUN_140120a0(undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * body: 140120a0-14012226
 */

int __cdecl FUN_140120a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  undefined1 auStack_14 [2];
  undefined4 uStack_12;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_28);
  DAT_14028e48 = (*pcVar1)(local_28,&local_1c,param_2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,&iStack_18,param_2,&DAT_14026824);
  if ((local_1c == 0) || (iStack_18 == 0)) {
    *param_3 = 0;
    iVar2 = 0;
  }
  else {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,0,&local_28);
    DAT_14028e48 = (*pcVar1)(local_28,param_1,0x2f,param_2,&iStack_24);
    if ((DAT_14028e48 != 0) || (iStack_24 == 0)) {
      return 0x10000;
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_28);
    iVar2 = (*pcVar1)(local_28,iStack_24,1,auStack_14);
    DAT_14028e48 = iVar2;
    if (iVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_28);
      DAT_14028e48 = (*pcVar1)(local_28,iStack_24);
      *param_3 = uStack_12;
      return 0;
    }
  }
  return iVar2;
}


