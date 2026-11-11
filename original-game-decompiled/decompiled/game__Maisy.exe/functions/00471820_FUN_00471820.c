
/* ==== FUN_00471820 @ 00471820 ==== 
 * signature: undefined4 __cdecl FUN_00471820(int param_1, int param_2, char param_3)
 * body: 00471820-004718bb
 */

undefined4 __cdecl FUN_00471820(int param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [12];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004718bc;
  *unaff_FS_OFFSET = &local_10;
  puVar2 = (undefined4 *)FUN_0048b560(0,param_1);
  piVar1 = (int *)*puVar2;
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x1e) & 4) != 0)) {
    if (param_2 == 0) {
      (**(code **)(*piVar1 + 0x424))(0);
    }
    else {
      (**(code **)(*piVar1 + 0x428))(param_2);
    }
    if (param_3 != '\0') {
      pvVar3 = (void *)FUN_0040c620(piVar1);
      if (pvVar3 != (void *)0x0) {
        FUN_0043bf50(local_1c);
        local_8 = 0;
        FUN_00407970(pvVar3);
        local_8 = 0xffffffff;
        FUN_004718c6();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return 0;
}


