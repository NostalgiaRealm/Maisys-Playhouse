
/* ==== FUN_00422c70 @ 00422c70 ==== 
 * signature: undefined __fastcall FUN_00422c70(undefined4 * param_1)
 * body: 00422c70-00422d18
 */

void __fastcall FUN_00422c70(undefined4 *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00422d19;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004c6988;
  local_8 = 0;
  FUN_00430190((int)param_1);
  iVar3 = 1;
  if (0 < *(int *)((int)param_1 + 0x26)) {
    do {
      puVar2 = (undefined4 *)FUN_004301c0(param_1,iVar3);
      pvVar1 = (LPVOID)*puVar2;
      if (puVar2[1] == 1) {
        if (pvVar1 != (LPVOID)0x0) {
          FUN_0043ba20(pvVar1);
        }
        if ((undefined4 *)puVar2[3] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)puVar2[3])(1);
        }
      }
      else if (pvVar1 != (LPVOID)0x0) {
        FUN_0043ba20(pvVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)param_1 + 0x26));
  }
  FUN_004301f0((int)param_1);
  local_8 = 0xffffffff;
  FUN_00422d23();
  *unaff_FS_OFFSET = local_10;
  return;
}


