
/* ==== FUN_11032650 @ 11032650 ==== 
 * signature: wint_t __cdecl FUN_11032650(wint_t param_1)
 * body: 11032650-110326c4
 */

wint_t __cdecl FUN_11032650(wint_t param_1)

{
  bool bVar1;
  
  if (DAT_11036c80 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    bVar1 = DAT_11039a14 == 0;
    if (bVar1) {
      DAT_11039a18 = DAT_11039a18 + 1;
    }
    else {
      __lock(0x13);
    }
    param_1 = FID_conflict__towupper(param_1);
    if (!bVar1) {
      FUN_1102b240(0x13);
      return param_1;
    }
    DAT_11039a18 = DAT_11039a18 + -1;
  }
  return param_1;
}


