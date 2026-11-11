
/* ==== FUN_004664f0 @ 004664f0 ==== 
 * signature: undefined __fastcall FUN_004664f0(void * param_1)
 * body: 004664f0-0046656b
 */

void __fastcall FUN_004664f0(void *param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046656c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412d60(param_1,0);
  this = FUN_00412c20(0x4a);
  local_8 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    puVar1 = FUN_004349b0(this,0x2a,0,'\0',0);
  }
  *(undefined4 **)((int)param_1 + 0x2e) = puVar1;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *unaff_FS_OFFSET = local_10;
  DAT_004e1c04 = 1;
  return;
}


