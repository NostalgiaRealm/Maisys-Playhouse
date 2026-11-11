
/* ==== FUN_0047d9f0 @ 0047d9f0 ==== 
 * signature: undefined __thiscall FUN_0047d9f0(void * this, int param_1)
 * body: 0047d9f0-0047da72
 */

void __thiscall FUN_0047d9f0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0047da73;
  *unaff_FS_OFFSET = &local_10;
  piVar1 = (int *)FUN_004a5fed(0xc);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_1;
    piVar1[1] = 0;
    *piVar1 = 0;
    piVar2 = piVar1;
  }
  local_8 = 0xffffffff;
  if (piVar2 == (int *)0x0) {
    FUN_004a3538();
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (*(int *)this == 0) {
    *(int **)((int)this + 4) = piVar2;
  }
  else {
    *piVar2 = *(int *)this;
    *(int **)(*(int *)this + 4) = piVar2;
  }
  *unaff_FS_OFFSET = local_10;
  *(int **)this = piVar2;
  return;
}


