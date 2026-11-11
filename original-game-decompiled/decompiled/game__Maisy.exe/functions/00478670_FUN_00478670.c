
/* ==== FUN_00478670 @ 00478670 ==== 
 * signature: undefined4 * __thiscall FUN_00478670(void * this, undefined4 param_1)
 * body: 00478670-0047874b;00478754-00478794
 */

undefined4 * __thiscall FUN_00478670(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *unaff_FS_OFFSET;
  char local_218 [256];
  char local_118 [256];
  undefined4 *local_18;
  void *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00478795;
  *unaff_FS_OFFSET = &local_10;
  puVar6 = (undefined4 *)0x0;
  local_14 = this;
  cVar1 = (**(code **)(*(int *)this + 0x134))(local_118,param_1,1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_00478e40(local_14,(short)param_1,1,local_218);
    if ((char)uVar2 != '\0') {
      uVar3 = 0xffffffff;
      pcVar7 = local_218;
      do {
        pcVar9 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar7 = local_118;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar3;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_0043e140(local_118,local_118);
      puVar6 = FUN_00412c20(0x170);
      local_8 = 0;
      local_18 = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00481280(puVar6);
        *puVar6 = &PTR_FUN_004c8970;
      }
      local_8 = 0xffffffff;
      FUN_00486ab0(puVar6,*(int *)((int)local_14 + 4),local_118,(int)(short)param_1);
      FUN_00486ae0(puVar6,1);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return puVar6;
}


