
/* ==== FUN_0045c740 @ 0045c740 ==== 
 * signature: undefined __fastcall FUN_0045c740(int param_1)
 * body: 0045c740-0045c7aa
 */

void __fastcall FUN_0045c740(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  int iVar3;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045c7ab;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x94);
  local_8 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    iVar3 = param_1;
    uVar2 = FUN_0045a3e0(*(int *)(param_1 + 0x4c));
    puVar1 = FUN_00431640(this,uVar2,iVar3);
  }
  *(undefined4 **)(param_1 + 0x36) = puVar1;
  *unaff_FS_OFFSET = local_10;
  return;
}


