
/* ==== FUN_0046f100 @ 0046f100 ==== 
 * signature: undefined4 __fastcall FUN_0046f100(int param_1)
 * body: 0046f100-0046f170
 */

undefined4 __fastcall FUN_0046f100(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046f171;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_1 + 0x8e) == 0) {
    puVar2 = FUN_00412c20(0x4a);
    local_8 = 0;
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = FUN_0046e210(puVar2);
    }
    *(undefined4 **)(param_1 + 0x8e) = puVar3;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x8e);
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}


