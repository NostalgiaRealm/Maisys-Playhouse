
/* ==== FUN_004339d0 @ 004339d0 ==== 
 * signature: undefined4 __cdecl FUN_004339d0(int * param_1, char param_2)
 * body: 004339d0-00433a4c;00433a5f-00433a72
 */

undefined4 __cdecl FUN_004339d0(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [12];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00433a4d;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = *param_1;
  if ((((iVar1 == 0) || ((*(byte *)(iVar1 + 0x21) & 0x20) == 0)) ||
      (piVar2 = *(int **)(iVar1 + 0x3a), piVar2 == (int *)0x0)) ||
     ((*(byte *)((int)piVar2 + 0x1e) & 4) == 0)) {
LAB_00433a5f:
    uVar4 = 0x10000;
  }
  else {
    (**(code **)(*piVar2 + 0x424))(0);
    if (param_2 != '\0') {
      pvVar3 = (void *)FUN_0040c620(piVar2);
      if (pvVar3 == (void *)0x0) goto LAB_00433a5f;
      FUN_0043bf50(local_1c);
      local_8 = 0;
      FUN_00407970(pvVar3);
      local_8 = 0xffffffff;
      FUN_00433a57();
    }
    uVar4 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}


