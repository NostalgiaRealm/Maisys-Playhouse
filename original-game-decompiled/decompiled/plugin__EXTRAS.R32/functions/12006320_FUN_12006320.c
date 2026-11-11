
/* ==== FUN_12006320 @ 12006320 ==== 
 * signature: int __cdecl FUN_12006320(LPCSTR param_1, undefined4 param_2)
 * body: 12006320-120065f8
 */

int __cdecl FUN_12006320(LPCSTR param_1,undefined4 param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  CHAR aCStack_1e [2];
  int local_1c;
  int local_18;
  LPSTR local_14;
  int iStack_10;
  int iStack_c;
  int local_8;
  int iStack_4;
  
  local_18 = 0;
  local_14 = (LPSTR)0x0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,&local_8,param_2);
  if (param_1 == (LPCSTR)0x0) {
    param_1 = &DAT_12037220;
  }
  DVar2 = ExpandEnvironmentStringsA(param_1,aCStack_1e,0);
  DVar2 = local_8 + 3 + DVar2;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,&local_18,DVar2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,&local_14,DVar2);
  if (local_18 != 0) {
    if (local_14 == (LPSTR)0x0) {
      if (local_18 != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_1c);
        DAT_12039a9c = (*pcVar1)(local_1c,local_18);
        local_18 = 0;
      }
    }
    else {
      iStack_c = 0;
      ExpandEnvironmentStringsA(param_1,local_14,DVar2);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xb,&local_1c);
      DAT_12039a9c = (*pcVar1)(local_1c,&iStack_c,local_14,&DAT_1203721c);
      if (iStack_c == 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_1c);
        DAT_12039a9c = (*pcVar1)(local_1c,local_18,local_14);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&iStack_10);
        DAT_12039a9c = (*pcVar1)(iStack_10,local_18,param_2);
      }
      else {
        iVar3 = iStack_c - (int)local_14;
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,1,&local_1c);
        DAT_12039a9c = (*pcVar1)(local_1c,local_18,local_14,iVar3);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&iStack_10);
        DAT_12039a9c = (*pcVar1)(iStack_10,local_18 + iVar3,param_2);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&iStack_4);
        DAT_12039a9c = (*pcVar1)(iStack_4,local_8 + local_18 + iVar3,iStack_c + 2);
      }
    }
  }
  if (local_14 != (LPSTR)0x0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,local_14);
  }
  return local_18;
}


