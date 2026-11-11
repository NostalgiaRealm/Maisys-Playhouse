
/* ==== FUN_004183d0 @ 004183d0 ==== 
 * signature: undefined __thiscall FUN_004183d0(void * this, int * param_1)
 * body: 004183d0-00418412
 */

void __thiscall FUN_004183d0(void *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00430190((int)this);
  *(undefined4 *)((int)this + 0x4e) = uVar1;
  uVar1 = FUN_00430190(*param_1);
  *(undefined4 *)((int)this + 0x52) = uVar1;
  FUN_00418420(this,0,*(int *)(*param_1 + 0x26),(undefined4 *)param_1[2]);
  FUN_004301f0(*param_1);
  FUN_004301f0((int)this);
  return;
}


