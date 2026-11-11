
/* ==== FUN_0045d6a0 @ 0045d6a0 ==== 
 * signature: undefined __stdcall FUN_0045d6a0(void)
 * body: 0045d6a0-0045d73b
 */

void FUN_0045d6a0(void)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_2c [24];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045d75b;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc8;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_2c);
  local_8 = 1;
  piVar1 = (int *)FUN_0043ed20();
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)0x0) goto LAB_0045d711;
    do {
      if (((((*(uint *)((int)piVar1 + 0x1e) & 2) != 0) && ((short)piVar1[0x18] == 0)) &&
          ((*(uint *)((int)piVar1 + 0x1e) & 0x40000000) == 0)) &&
         (*(short *)((int)piVar1 + 0x22) != 0x43)) {
        FUN_00469fb0(piVar1);
      }
LAB_0045d711:
      piVar1 = (int *)FUN_0043ed30();
    } while (piVar1 != (int *)0x0);
  }
  local_8 = 0xffffffff;
  FUN_0045d765();
  *unaff_FS_OFFSET = local_10;
  return;
}


