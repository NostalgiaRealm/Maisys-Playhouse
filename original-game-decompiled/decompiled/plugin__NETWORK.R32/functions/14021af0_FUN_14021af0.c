
/* ==== FUN_14021af0 @ 14021af0 ==== 
 * signature: wint_t __cdecl FUN_14021af0(wint_t param_1)
 * body: 14021af0-14021b64
 */

wint_t __cdecl FUN_14021af0(wint_t param_1)

{
  bool bVar1;
  
  if (DAT_140272c0 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    bVar1 = DAT_14029f80 == 0;
    if (bVar1) {
      DAT_14029f84 = DAT_14029f84 + 1;
    }
    else {
      __lock(0x13);
    }
    param_1 = FID_conflict__towupper(param_1);
    if (!bVar1) {
      FUN_1401a650(0x13);
      return param_1;
    }
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  return param_1;
}


