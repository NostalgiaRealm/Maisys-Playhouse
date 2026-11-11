
/* ==== FUN_0047dad0 @ 0047dad0 ==== 
 * signature: undefined __thiscall FUN_0047dad0(void * this, undefined4 param_1)
 * body: 0047dad0-0047db57
 */

void __thiscall FUN_0047dad0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0047db58;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_004a5fed(0xc);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar2 = puVar1;
  }
  local_8 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004a3538();
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)this = puVar2;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar2;
    *puVar2 = *(undefined4 *)((int)this + 4);
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


