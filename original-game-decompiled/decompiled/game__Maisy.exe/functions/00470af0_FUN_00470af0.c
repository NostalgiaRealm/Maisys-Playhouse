
/* ==== FUN_00470af0 @ 00470af0 ==== 
 * signature: int __stdcall FUN_00470af0(int param_1)
 * body: 00470af0-00470b5c
 */

int FUN_00470af0(int param_1)

{
  short sVar1;
  void *this;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_004e1c1c != (void *)0x0) {
    sVar3 = 1;
    DAT_004dc58c = 1;
    sVar1 = *(short *)((int)DAT_004e1c1c + 0xc);
    if (0 < sVar1) {
      do {
        this = (void *)FUN_004308b0(DAT_004e1c1c,sVar3);
        if (this != (void *)0x0) {
          iVar2 = FUN_00448610(this,param_1);
          iVar4 = iVar4 + iVar2;
          if (param_1 <= iVar4) break;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 <= sVar1);
    }
    DAT_004dc58c = 0;
  }
  return iVar4;
}


