
/* ==== FUN_10013bba @ 10013bba ==== 
 * signature: undefined __cdecl FUN_10013bba(LPCSTR param_1)
 * body: 10013bba-10013ca5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013bba(LPCSTR param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  HWND pHVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint local_c;
  int local_8;
  
  uVar5 = 1;
  DAT_10023dc0 = 1;
  if (DAT_100238b4 == (code *)0x0) {
    SetDlgItemTextA(DAT_10023fac,0xef5,param_1);
  }
  else {
    DAT_1002408e = DAT_1002402c;
    _DAT_1002409c = DAT_1001f030;
    _DAT_100240a0 = &DAT_10023314;
    FUN_10013ca6(&local_8,&local_c);
    if (DAT_10023f9c == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = *(int *)(DAT_1002392c + 0x14) - DAT_10023ecc;
      if (2000000 < uVar3) {
        uVar5 = 10;
      }
      iVar2 = (((uVar3 / uVar5) * 1000) / DAT_10023f9c) * uVar5;
    }
    pHVar4 = (HWND)(*DAT_100238b4)(1,DAT_10024180 & 0xf,&DAT_10024080,param_1,
                                   (uint)(local_8 * 1000) / local_c,iVar2);
    if (pHVar4 != (HWND)0x0) {
      bVar1 = FUN_1000be14(pHVar4);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
      }
    }
    DAT_10023fac = DAT_10023f40;
  }
  return;
}


