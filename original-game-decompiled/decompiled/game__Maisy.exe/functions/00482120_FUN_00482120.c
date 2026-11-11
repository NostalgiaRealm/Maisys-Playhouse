
/* ==== FUN_00482120 @ 00482120 ==== 
 * signature: undefined4 __thiscall FUN_00482120(void * this, byte * param_1, int param_2, undefined4 * param_3, int * param_4)
 * body: 00482120-00482240
 */

undefined4 __thiscall
FUN_00482120(void *this,byte *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char **ppcVar7;
  bool bVar8;
  char *local_54 [17];
  char local_f;
  undefined4 *local_c;
  int *local_8;
  
  iVar6 = 0;
  local_f = '\0';
  iVar4 = *(int *)((int)this + 0x26);
  local_8 = this;
  puVar2 = (undefined4 *)FUN_00430190((int)this);
  local_c = puVar2;
  if (0 < iVar4) {
    do {
      uVar3 = FUN_00482070((int)param_1,(char *)*puVar2);
      if ((char)uVar3 != '\0') {
        local_f = '\x01';
        break;
      }
      puVar2 = (undefined4 *)((int)puVar2 + 0x46);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  if (local_f == '\0') {
    ppcVar7 = local_54;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar7 = (char *)0x0;
      ppcVar7 = ppcVar7 + 1;
    }
    *(undefined2 *)ppcVar7 = 0;
    local_54[0] = FUN_0043b970((char *)param_1);
    puVar2 = (undefined4 *)((int)local_54 + param_2 * 0x16 + 4);
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = *(undefined2 *)param_3;
    FUN_004301f0((int)local_8);
    (**(code **)(*local_8 + 0xe8))(local_54);
    iVar6 = *(int *)((int)local_8 + 0x26) + -1;
  }
  else {
    puVar2 = (undefined4 *)(param_2 * 0x16 + iVar6 * 0x46 + 4 + (int)local_c);
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = *(undefined2 *)param_3;
    FUN_004301f0((int)local_8);
  }
  pbVar5 = &DAT_004dcd3c;
  do {
    bVar1 = *param_1;
    bVar8 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0048221e:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00482223;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar8 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0048221e;
    param_1 = param_1 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00482223:
  if (iVar4 == 0) {
    *(int *)((int)local_8 + 0x4a) = iVar6;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar6;
  }
  return 0;
}


