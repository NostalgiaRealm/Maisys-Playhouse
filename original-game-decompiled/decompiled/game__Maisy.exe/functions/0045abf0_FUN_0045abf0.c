
/* ==== FUN_0045abf0 @ 0045abf0 ==== 
 * signature: undefined4 __thiscall FUN_0045abf0(void * this, undefined4 param_1, undefined2 param_2, undefined4 param_3, short param_4, undefined4 param_5, undefined1 param_6)
 * body: 0045abf0-0045ac60;0045ac69-0045aca8
 */

undefined4 __thiscall
FUN_0045abf0(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3,short param_4,
            undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045aca9;
  *unaff_FS_OFFSET = &local_10;
  if (*(int **)((int)this + 0x82) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x82) + 4))();
    *(undefined4 *)((int)this + 0x82) = 0;
  }
  this_00 = FUN_00412c20(0x1da);
  local_8 = 0;
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = &PTR_FUN_004c8c08;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x82) = this_00;
  FUN_00402220(this_00,param_2,(int)this,param_4,param_6,param_5,'\x01');
  uVar1 = *(undefined4 *)((int)this + 0x82);
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}


