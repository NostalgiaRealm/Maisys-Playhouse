
/* ==== FUN_0044ab00 @ 0044ab00 ==== 
 * signature: undefined __thiscall FUN_0044ab00(void * this, int param_1)
 * body: 0044ab00-0044ab5e
 */

void __thiscall FUN_0044ab00(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 1;
  FUN_00430190((int)this);
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      if (bVar1) break;
      puVar2 = (undefined4 *)FUN_004301c0(this,iVar3);
      if (puVar2[1] == param_1) {
        if ((LPVOID)*puVar2 != (LPVOID)0x0) {
          FUN_0043ba20((LPVOID)*puVar2);
        }
        bVar1 = true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  if (bVar1) {
    FUN_00430090(this,iVar3 + -1);
  }
  return;
}


