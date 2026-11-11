
/* ==== FUN_00450780 @ 00450780 ==== 
 * signature: int * __thiscall FUN_00450780(void * this, int * param_1, int * param_2)
 * body: 00450780-0045095a
 */

int * __thiscall FUN_00450780(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  char local_124 [252];
  undefined4 *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045095b;
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) & 0xfb;
  *unaff_FS_OFFSET = &local_10;
  local_14 = this;
  (**(code **)(*(int *)this + 0x1c))(1);
  local_24 = (int *)0x0;
  local_28 = (undefined4 *)FUN_004a5fed(0xe);
  local_1c = (undefined4 *)0x0;
  if (local_28 != (undefined4 *)0x0) {
    *local_28 = &PTR_FUN_004be070;
    local_1c = local_28;
  }
  local_8 = 0xffffffff;
  FUN_00430500(local_1c,0);
  local_20 = 0;
  (**(code **)(**(int **)((int)local_14 + 0x26) + 0xe8))(&local_24);
  *(byte *)((int)local_14 + 0x30) = *(byte *)((int)local_14 + 0x30) | 1;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0xec))(*(undefined4 *)((int)local_14 + 4));
  }
  else {
    piVar2 = (int *)(**(code **)(*param_2 + 0xec))(*(undefined4 *)((int)local_14 + 4));
  }
  *(byte *)((int)local_14 + 0x30) = *(byte *)((int)local_14 + 0x30) & 0xfe;
  local_24 = piVar2;
  if (param_1 == (int *)0x0) {
    (**(code **)(*piVar2 + 0x10c))(piVar2[3]);
    (**(code **)(*piVar2 + 0x70))(local_124);
    uVar3 = 0xffffffff;
    pcVar6 = (char *)&DAT_004dbc00;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = local_124;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    (**(code **)(*piVar2 + 0x74))(local_124);
  }
  else {
    if (*(int *)((int)param_1 + 0x2a) == 0) {
      param_1[2] = piVar2[2];
      (**(code **)(*param_1 + 0x10c))(piVar2[3]);
      (**(code **)(*piVar2 + 0x10c))(piVar2[3]);
    }
    else {
      piVar2[2] = param_1[2];
      (**(code **)(*piVar2 + 0x10c))(*(undefined4 *)((int)param_1 + 0x2a));
    }
    (**(code **)(*param_1 + 0x110))(*(undefined4 *)(*(int *)((int)local_14 + 0x26) + 0x26));
  }
  (**(code **)(*piVar2 + 0x110))(*(undefined4 *)(*(int *)((int)local_14 + 0x26) + 0x26));
  local_20 = *(undefined4 *)((int)piVar2 + 0x2a);
  local_18 = local_18 + 1;
  FUN_0042ff10(*(void **)((int)local_14 + 0x26),
               *(int *)((int)*(void **)((int)local_14 + 0x26) + 0x26),&local_24);
  if (param_1 != (int *)0x0) {
    FUN_004306b0(local_1c,param_1);
  }
  *unaff_FS_OFFSET = local_10;
  return piVar2;
}


