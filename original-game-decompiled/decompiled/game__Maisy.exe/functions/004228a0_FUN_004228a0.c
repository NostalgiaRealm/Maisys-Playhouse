
/* ==== FUN_004228a0 @ 004228a0 ==== 
 * signature: undefined __thiscall FUN_004228a0(void * this, undefined4 * param_1)
 * body: 004228a0-004228cf
 */

void __thiscall FUN_004228a0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 3;
  iVar1 = FUN_0046ca60((int)this);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)((int)this + 0xc);
  param_1[3] = *(undefined4 *)((int)this + 0x92);
  return;
}


