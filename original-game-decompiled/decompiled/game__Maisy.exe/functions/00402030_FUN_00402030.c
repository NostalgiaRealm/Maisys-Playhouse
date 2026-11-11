
/* ==== FUN_00402030 @ 00402030 ==== 
 * signature: undefined __fastcall FUN_00402030(int param_1)
 * body: 00402030-00402197
 */

void __fastcall FUN_00402030(int param_1)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  undefined1 local_7c [22];
  undefined1 *local_66;
  uint *local_62;
  undefined4 local_5e;
  short local_4c [2];
  LPVOID local_48;
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x86) + 8);
  local_8 = param_1;
  while ((0 < iVar5 && (local_c < 100))) {
    local_c = local_c + 1;
    piVar3 = (int *)FUN_0047da90(*(undefined4 **)(local_8 + 0x86));
    cVar2 = (**(code **)(*piVar3 + 4))();
    if (cVar2 == '\0') {
      local_62 = (uint *)((int)piVar3 + 0x3a);
      *local_62 = *local_62 & 0x7fffffff;
      local_10 = *(int *)((int)piVar3 + 6);
      if (local_10 == 0) {
        local_14 = 0;
      }
      else {
        local_14 = *(undefined4 *)(local_10 + 0x3a);
      }
      local_66 = local_18;
      local_5e = 0x52;
      if ((*(short *)((int)piVar3 + 0x5e) == 3) && (piVar3[6] == 0)) {
        piVar3[0x18] = 0;
      }
      if (((*(short *)((int)piVar3 + 0x4e) == 7) || (*(short *)((int)piVar3 + 0x4e) == 8)) &&
         (*(int *)((int)piVar3 + 0x2a) == 0)) {
        piVar3[0x14] = 0;
      }
      FUN_004769e0((int)local_7c);
      psVar6 = (short *)((int)piVar3 + 0x5e);
      psVar7 = local_4c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar7 = psVar7 + 2;
      }
      *psVar7 = *psVar6;
      if (local_4c[0] == 0xd) {
        FUN_0043ba20(local_48);
      }
      if (local_4c[0] == 0x1fd) {
        (**(code **)(**(int **)((int)piVar3 + 6) + 600))(0x25,local_4c,0x2e);
      }
    }
    else {
      puVar1 = (uint *)(piVar3 + 10);
      *puVar1 = *puVar1 & 0x7fffffff;
      piVar3[0xc] = *(int *)((int)piVar3 + 6);
      pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x17,&local_1c);
      DAT_004e34cc = (*pcVar4)(local_1c,piVar3[6],puVar1);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
    }
    iVar5 = *(int *)(*(int *)(local_8 + 0x86) + 8);
  }
  return;
}


