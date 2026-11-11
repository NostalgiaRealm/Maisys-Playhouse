
/* ==== FUN_00489f20 @ 00489f20 ==== 
 * signature: int __fastcall FUN_00489f20(int * param_1)
 * body: 00489f20-00489f8e
 */

int __fastcall FUN_00489f20(int *param_1)

{
  int iVar1;
  undefined4 *this;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00489f8f;
  *unaff_FS_OFFSET = &local_10;
  if (*param_1 == 0) {
    this = FUN_00412c20(0x4a);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (this != (undefined4 *)0x0) {
      puVar2 = FUN_0042f970(this,0x10,0,'\0',0,'\0');
    }
    *param_1 = (int)puVar2;
  }
  iVar1 = *param_1;
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}


