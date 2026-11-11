
/* ==== FUN_00481f80 @ 00481f80 ==== 
 * signature: undefined __fastcall FUN_00481f80(undefined4 * param_1)
 * body: 00481f80-00482005
 */

void __fastcall FUN_00481f80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  LPVOID local_5c [18];
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00482006;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004ca480;
  iVar3 = 1;
  local_8 = 0;
  iVar1 = *(int *)((int)param_1 + 0x26);
  local_14 = param_1;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00430370(local_14,iVar3,local_5c);
      if ((char)uVar2 != '\0') {
        FUN_0043ba20(local_5c[0]);
        local_5c[0] = (LPVOID)0x0;
        FUN_0042ff10(local_14,iVar3,local_5c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  local_8 = 0xffffffff;
  FUN_00482010();
  *unaff_FS_OFFSET = local_10;
  return;
}


