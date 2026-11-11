
/* ==== FUN_004390e0 @ 004390e0 ==== 
 * signature: undefined __thiscall FUN_004390e0(void * this, undefined4 * param_1)
 * body: 004390e0-0043914e
 */

void __thiscall FUN_004390e0(void *this,undefined4 *param_1)

{
  int iVar1;
  HFONT *ppHVar2;
  undefined1 local_40 [32];
  HFONT local_20 [5];
  undefined2 local_c;
  undefined1 *local_a;
  
  local_c = 0x20;
  local_a = local_40;
  local_40[0] = 0;
  FUN_0041f520(DAT_004da380,0,*(int *)((int)this + 0x48),*(undefined4 *)((int)this + 0x4c),600,
               local_20,0x1a);
  if (local_20[0] == (HFONT)0x0) {
    local_20[0] = FUN_00434780(local_20);
    FUN_00439080(this,local_20);
  }
  ppHVar2 = local_20;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *ppHVar2;
    ppHVar2 = ppHVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


