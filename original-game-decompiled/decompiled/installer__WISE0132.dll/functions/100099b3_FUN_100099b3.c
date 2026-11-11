
/* ==== FUN_100099b3 @ 100099b3 ==== 
 * signature: undefined4 __cdecl FUN_100099b3(int param_1)
 * body: 100099b3-100099e4
 */

undefined4 __cdecl FUN_100099b3(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < DAT_10023924) {
    piVar2 = &DAT_10023fe0;
    do {
      if (*piVar2 == param_1) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= DAT_10023924);
  }
  if (DAT_10023924 < iVar1) {
    return 0;
  }
  return (&DAT_100240e0)[iVar1];
}


