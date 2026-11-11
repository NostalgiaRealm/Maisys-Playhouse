
/* ==== FUN_004336c0 @ 004336c0 ==== 
 * signature: undefined4 __cdecl FUN_004336c0(int param_1, int param_2)
 * body: 004336c0-0043371e
 */

undefined4 __cdecl FUN_004336c0(int param_1,int param_2)

{
  void *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  this = *(void **)(param_1 + 4);
  if (this != (void *)0x0) {
    iVar4 = -1;
    iVar1 = *(int *)((int)this + 0x26);
    piVar2 = (int *)FUN_00430190((int)this);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if (*piVar2 == param_2) {
          iVar4 = iVar3 + 1;
          break;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_004301f0((int)this);
    if (iVar4 != -1) {
      FUN_00430090(this,iVar4);
      return 0;
    }
  }
  return 0x10000;
}


