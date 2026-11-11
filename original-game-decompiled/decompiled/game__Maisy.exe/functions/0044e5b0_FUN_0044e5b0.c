
/* ==== FUN_0044e5b0 @ 0044e5b0 ==== 
 * signature: int __thiscall FUN_0044e5b0(void * this, int param_1)
 * body: 0044e5b0-0044e5fc
 */

int __thiscall FUN_0044e5b0(void *this,int param_1)

{
  int iVar1;
  int local_24 [7];
  int local_8;
  
  iVar1 = 1;
  local_8 = FUN_0044e340((int)this);
  if (0 < local_8) {
    do {
      FUN_00430370(*(void **)((int)this + 0x30),iVar1,local_24);
      if (param_1 == local_24[0]) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= local_8);
  }
  return 0;
}


