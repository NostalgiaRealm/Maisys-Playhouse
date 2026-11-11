
/* ==== FUN_00417e90 @ 00417e90 ==== 
 * signature: undefined4 * __thiscall FUN_00417e90(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, char param_5, undefined4 param_6)
 * body: 00417e90-00417f14
 */

undefined4 * __thiscall
FUN_00417e90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            char param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00417f15;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_00412c20(0x4a);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0042f970(puVar1,4,param_4,param_5,param_6,'\0');
  }
  *(undefined4 **)this = puVar1;
  *(undefined4 *)((int)this + 8) = param_2;
  *unaff_FS_OFFSET = local_10;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_6;
  return this;
}


