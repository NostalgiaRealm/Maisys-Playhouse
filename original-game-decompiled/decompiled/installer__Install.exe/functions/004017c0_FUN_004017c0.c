
/* ==== FUN_004017c0 @ 004017c0 ==== 
 * signature: undefined4 __stdcall FUN_004017c0(void)
 * body: 004017c0-004018cb
 */

undefined4 FUN_004017c0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  uint local_8;
  
  iVar2 = DAT_00404384;
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  FUN_00401d89(DAT_0040439c & 7,&local_8,(int *)&local_c);
  FUN_00401d3d(0x10,&local_8,&local_c);
  uVar3 = local_8 & 0xffff;
  FUN_00401d89(0x10,&local_8,(int *)&local_c);
  FUN_00401d3d(0x10,&local_8,&local_c);
  if (uVar3 == (~local_8 & 0xffff)) {
    FUN_00401d89(0x10,&local_8,(int *)&local_c);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (DAT_004042bc != 0) goto LAB_004018c7;
      FUN_00401d3d(8,&local_8,&local_c);
      *(undefined1 *)(iVar2 + DAT_0040436c) = (undefined1)local_8;
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x8000) {
        DAT_00404384 = 0x8000;
        FUN_00401d9a();
        iVar2 = 0;
      }
      FUN_00401d89(8,&local_8,(int *)&local_c);
    }
    uVar1 = 0;
    DAT_00404384 = iVar2;
    DAT_0040439c = local_c;
    DAT_004043ac = local_8;
  }
  else {
LAB_004018c7:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


