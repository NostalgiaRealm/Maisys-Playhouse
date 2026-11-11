
/* ==== FUN_12006600 @ 12006600 ==== 
 * signature: uint __cdecl FUN_12006600(int param_1, undefined4 param_2)
 * body: 12006600-120067f9
 */

uint __cdecl FUN_12006600(int param_1,undefined4 param_2)

{
  code *pcVar1;
  LPBYTE pBVar2;
  UINT UVar3;
  uint uVar4;
  int local_118;
  LPCSTR local_114;
  undefined *local_110;
  int iStack_10c;
  int iStack_108;
  undefined1 local_104 [4];
  CHAR aCStack_100 [256];
  
  uVar4 = 0x10000;
  local_114 = (LPCSTR)0x0;
  local_110 = (undefined *)0x0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_118);
  DAT_12039a9c = (*pcVar1)(local_118,local_104,param_2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,7,&iStack_10c);
  DAT_12039a9c = (*pcVar1)(iStack_10c,&local_110,param_2,0x2e);
  if (local_110 == (undefined *)0x0) {
    local_110 = &DAT_12037230;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_118);
  DAT_12039a9c = (*pcVar1)(local_118,aCStack_100,local_110);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x1d,&iStack_10c);
  DAT_12039a9c = (*pcVar1)(iStack_10c,&iStack_108,aCStack_100,&DAT_12037230);
  if (iStack_108 == 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xf,&local_118);
    DAT_12039a9c = (*pcVar1)(local_118,&local_114,param_2);
  }
  else {
    pBVar2 = FUN_12006100(aCStack_100);
    local_114 = (LPCSTR)FUN_12006320((LPCSTR)pBVar2,param_2);
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_118);
    DAT_12039a9c = (*pcVar1)(local_118,pBVar2);
  }
  if (local_114 != (LPCSTR)0x0) {
    UVar3 = WinExec(local_114,(-(uint)(*(int *)(param_1 + 0x26) == 1) & 3) + 7);
    uVar4 = -(uint)(UVar3 < 0x20) & 0x10000;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_118);
    DAT_12039a9c = (*pcVar1)(local_118,local_114);
  }
  return uVar4;
}


