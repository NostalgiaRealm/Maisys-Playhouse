
/* ==== FUN_00439080 @ 00439080 ==== 
 * signature: undefined __thiscall FUN_00439080(void * this, undefined4 param_1)
 * body: 00439080-004390d1
 */

void __thiscall FUN_00439080(void *this,undefined4 param_1)

{
  int iVar1;
  void *this_00;
  
  FUN_0041f520(DAT_004da380,0,*(int *)((int)this + 0x48),*(undefined4 *)((int)this + 0x4c),0x259,
               param_1,0x14);
  if ((*(int *)((int)this + 0x2a) != 0) && (*(int *)((int)this + 4) != 0)) {
    iVar1 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar1 != 0) {
      this_00 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      FUN_004510f0(this_00,this);
    }
  }
  return;
}


