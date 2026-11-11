
/* ==== FUN_0045c7f0 @ 0045c7f0 ==== 
 * signature: int __fastcall FUN_0045c7f0(int param_1)
 * body: 0045c7f0-0045c91d
 */

int __fastcall FUN_0045c7f0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  int local_c;
  short local_8;
  short local_6;
  
  local_c = param_1;
  if (*(char *)((int)*(void **)(param_1 + 0x4c) + 0x89) == '\0') {
    FUN_0045a350(*(void **)(param_1 + 0x4c),&local_8,(undefined2 *)0x0,(undefined1 *)0x0);
  }
  else {
    FUN_0043c450(&local_18);
    FUN_0045a350(*(void **)(local_c + 0x4c),&local_8,(undefined2 *)0x0,(undefined1 *)0x0);
    iVar2 = DAT_004dcf78;
    iVar1 = DAT_004dc578;
    sVar4 = (short)(((int)local_14 - (int)local_18) / 2) - local_8 / 2;
    sVar3 = (short)(((int)local_12 - (int)local_16) / 2) - local_6 / 2;
    if ((DAT_004dc57c == '\0') || (DAT_004dc578 == 0)) {
      *(short *)(DAT_004dcf78 + 0x44) = sVar4;
      *(short *)(iVar2 + 0x46) = sVar3;
      *(short *)(iVar2 + 0x4a) = local_6 + sVar3;
      *(short *)(iVar2 + 0x48) = local_8 + sVar4;
    }
    else {
      *(short *)(DAT_004dc578 + 0x44) = sVar4;
      *(short *)(iVar1 + 0x46) = sVar3;
      *(short *)(iVar1 + 0x4a) = local_6 + sVar3;
      *(short *)(iVar1 + 0x48) = local_8 + sVar4;
    }
  }
  if ((DAT_004dc57c != '\0') && (DAT_004dc578 != 0)) {
    *(undefined4 *)(DAT_004dc578 + 0x40) = *(undefined4 *)(local_c + 0x36);
    return DAT_004dc578;
  }
  *(undefined4 *)(DAT_004dcf78 + 0x40) = *(undefined4 *)(local_c + 0x36);
  return DAT_004dcf78;
}


