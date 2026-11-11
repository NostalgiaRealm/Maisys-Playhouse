
/* ==== FUN_00417fb0 @ 00417fb0 ==== 
 * signature: undefined4 * __thiscall FUN_00417fb0(void * this, undefined4 param_1, int param_2, char param_3, undefined4 param_4, char param_5)
 * body: 00417fb0-0041804f
 */

undefined4 * __thiscall
FUN_00417fb0(void *this,undefined4 param_1,int param_2,char param_3,undefined4 param_4,char param_5)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041805d;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(this,param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004bed10;
  this_00 = FUN_00412c20(0x4a);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar1 = (undefined4 *)0x0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1 = FUN_0042f970(this_00,4,0,'\0',0,'\0');
  }
  *(undefined4 **)((int)this + 0x4a) = puVar1;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


