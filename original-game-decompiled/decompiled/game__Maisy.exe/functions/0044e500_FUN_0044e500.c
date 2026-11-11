
/* ==== FUN_0044e500 @ 0044e500 ==== 
 * signature: int * __thiscall FUN_0044e500(void * this, int param_1)
 * body: 0044e500-0044e57f
 */

int * __thiscall FUN_0044e500(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *local_20 [7];
  
  if (DAT_004dbdc0 == '\0') {
    piVar3 = FUN_0044db20(this,param_1,0,'\x01','\x01');
    return piVar3;
  }
  iVar4 = 1;
  iVar1 = FUN_0044e340((int)this);
  if (0 < iVar1) {
    do {
      FUN_00430370(*(void **)((int)this + 0x30),iVar4,local_20);
      if (local_20[0] != (int *)0x0) {
        iVar2 = (**(code **)(*local_20[0] + 0x150))();
        if (iVar2 == param_1) {
          return local_20[0];
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar1);
  }
  return (int *)0x0;
}


