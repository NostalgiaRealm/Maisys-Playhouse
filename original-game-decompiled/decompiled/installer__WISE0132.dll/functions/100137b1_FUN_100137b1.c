
/* ==== FUN_100137b1 @ 100137b1 ==== 
 * signature: undefined4 __cdecl FUN_100137b1(LPCSTR param_1, undefined4 * param_2)
 * body: 100137b1-100138b0
 */

undefined4 __cdecl FUN_100137b1(LPCSTR param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  char *lpSubBlock;
  CHAR local_54 [64];
  LPVOID local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = FUN_100138b1(param_1);
  if (iVar2 == 0) {
    BVar3 = GetFileVersionInfoA(param_1,0,0x7800,DAT_10024170);
    if (BVar3 != 0) {
      lstrcpyA(local_54,&DAT_1001f314);
      BVar3 = VerQueryValueA(DAT_10024170,local_54,&local_14,&local_10);
      if (BVar3 != 0) {
        lstrcpyA(local_54,s__VarFileInfo_Translation_1001fd98);
        lpSubBlock = local_54;
        goto LAB_10013861;
      }
    }
  }
  else {
    BVar3 = GetFileVersionInfoA(param_1,0,0x7800,DAT_10024170);
    if ((BVar3 != 0) &&
       (BVar3 = VerQueryValueA(DAT_10024170,&DAT_1001f314,&local_14,&local_10), BVar3 != 0)) {
      lpSubBlock = s__VarFileInfo_Translation_1001fd98;
LAB_10013861:
      BVar3 = VerQueryValueA(DAT_10024170,lpSubBlock,&local_c,&local_10);
      if (BVar3 == 0) {
        local_c = &local_8;
      }
      *param_2 = *(undefined4 *)((int)local_14 + 8);
      param_2[1] = *(undefined4 *)((int)local_14 + 0xc);
      param_2[2] = *(undefined4 *)((int)local_14 + 0x20);
      param_2[3] = *(undefined4 *)((int)local_14 + 0x24);
      param_2[4] = *(undefined4 *)((int)local_14 + 0x28);
      uVar1 = *local_c;
      param_2[6] = iVar2;
      param_2[5] = uVar1;
      return 0;
    }
  }
  return 1;
}


