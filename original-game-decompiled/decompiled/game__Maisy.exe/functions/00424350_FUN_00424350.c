
/* ==== FUN_00424350 @ 00424350 ==== 
 * signature: undefined __fastcall FUN_00424350(int param_1)
 * body: 00424350-00424471
 */

void __fastcall FUN_00424350(int param_1)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00424472;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    local_14 = (undefined4 *)FUN_004a5fed(0xe);
    if (local_14 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      *local_14 = &PTR_FUN_004be070;
    }
    local_8 = 0xffffffff;
    FUN_00430500(local_14,0);
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3e)) {
      FUN_004306b0(local_14,iVar1);
    }
    sVar3 = *(short *)(local_14 + 3);
    DAT_004dbdc4 = 1;
    DAT_004dac64 = 1;
    if (0 < sVar3) {
      do {
        piVar2 = (int *)FUN_004308b0(local_14,sVar3);
        iVar1 = *piVar2;
        (**(code **)(iVar1 + 0x234))();
        if (1 < sVar3) {
          piVar2 = (int *)FUN_004308b0(local_14,sVar3 + -1);
          (**(code **)(*piVar2 + 0x20c))(0);
        }
        (**(code **)(iVar1 + 0x214))(0);
        (**(code **)(iVar1 + 0x1fc))(0);
        (**(code **)(iVar1 + 8))(1,0);
        sVar3 = sVar3 + -1;
      } while (sVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    DAT_004dbdc4 = 0;
    DAT_004dac64 = 0;
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


