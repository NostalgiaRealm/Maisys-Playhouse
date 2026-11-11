
/* ==== FUN_00470aa0 @ 00470aa0 ==== 
 * signature: undefined __stdcall FUN_00470aa0(void)
 * body: 00470aa0-00470aed
 */

void FUN_00470aa0(void)

{
  short sVar1;
  void *this;
  short sVar2;
  
  if (DAT_004e1c1c != (void *)0x0) {
    sVar2 = 1;
    DAT_004dc58c = 1;
    sVar1 = *(short *)((int)DAT_004e1c1c + 0xc);
    if (0 < sVar1) {
      do {
        this = (void *)FUN_004308b0(DAT_004e1c1c,sVar2);
        if (this != (void *)0x0) {
          FUN_00448710(this,100);
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 <= sVar1);
    }
    DAT_004dc58c = 0;
  }
  return;
}


