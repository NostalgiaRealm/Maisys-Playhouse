
/* ==== FUN_0043fc70 @ 0043fc70 ==== 
 * signature: undefined __thiscall FUN_0043fc70(void * this, int param_1)
 * body: 0043fc70-0043fd52
 */

void __thiscall FUN_0043fc70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x88);
  if ((iVar1 != 0) || (param_1 != 0)) {
    iVar2 = FUN_0043fd60((int)this);
    if (iVar2 != 0) {
      FUN_0043fd60((int)this);
      FUN_0048d4ec();
      FUN_0043fd60((int)this);
      FUN_0048d4b6();
    }
  }
  *(int *)((int)this + 0x88) = param_1;
  if ((param_1 != 0) || (iVar1 != 0)) {
    FUN_0048ceed();
    FUN_0043fd60((int)this);
    FUN_0048d4ec();
    FUN_0043fd60((int)this);
    FUN_0048d4b6();
  }
  return;
}


