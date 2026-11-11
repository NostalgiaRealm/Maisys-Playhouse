
/* ==== FUN_100148bf @ 100148bf ==== 
 * signature: undefined __stdcall FUN_100148bf(void)
 * body: 100148bf-10014930
 */

void FUN_100148bf(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_100240c4 != 0) {
    if ((DAT_10023fa0 != (int *)0x0) && (DAT_10023f18 == 0)) {
      iVar1 = *DAT_10023fa0;
      piVar2 = DAT_10023fa0;
      while ((-1 < iVar1 && (DAT_10024044 == 0))) {
        if (DAT_10023310 - DAT_10023fa8 == *piVar2) {
          DAT_10024044 = 1;
        }
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
      }
      if (*DAT_10023fa0 == -1) {
        DAT_10024044 = 1;
      }
    }
    while ((*(int *)(DAT_1002392c + 0x1c) == 0 && (DAT_10024044 != 0))) {
      FUN_10012db9();
    }
  }
  return;
}


