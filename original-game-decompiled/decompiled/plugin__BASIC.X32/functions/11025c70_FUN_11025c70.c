
/* ==== FUN_11025c70 @ 11025c70 ==== 
 * signature: undefined1 __cdecl FUN_11025c70(undefined4 * param_1, int param_2)
 * body: 11025c70-11025f48
 */

undefined1 __cdecl FUN_11025c70(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  bool bVar8;
  undefined4 local_46;
  char local_30;
  undefined1 uStack_2f;
  char cStack_2e;
  undefined1 uStack_2d;
  undefined2 uStack_2c;
  uint local_2a;
  
  local_46._0_3_ = CONCAT12(1,(short)local_46);
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  local_30 = (char)uVar3;
  uStack_2f = (undefined1)((uint)uVar3 >> 8);
  cStack_2e = (char)((uint)uVar3 >> 0x10);
  uStack_2d = (undefined1)((uint)uVar3 >> 0x18);
  FUN_1100fc40((int)param_1);
  if (iVar2 == 0x7d1) {
    iVar4 = *(int *)(param_2 + 0x10);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar4 = *(int *)(param_2 + 0x10);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if ((iVar2 == 0xdd) && (*(short *)(param_2 + 0x30) == 0x1c)) {
    *(undefined4 *)(param_2 + 0x32) = 0;
  }
  if (iVar2 == 0x7d1) {
    FUN_110142f0(param_1,*(int *)(param_2 + 0x62));
  }
  if (iVar2 == 0x7d2) {
    FUN_110048a0(param_1,0xe,0,param_2 + 0x66);
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0;
    *(undefined2 *)(param_2 + 0x66) = 0x69;
  }
  if ((*(int *)(param_2 + 0x10) != iVar2) ||
     (((*(int *)(param_2 + 0x14) != 0 &&
       (CONCAT13(uStack_2d,CONCAT12(cStack_2e,CONCAT11(uStack_2f,local_30))) !=
        *(int *)(param_2 + 0x14))) || (*(int *)(param_2 + 0x62) == 0)))) goto LAB_11025f3d;
  bVar5 = false;
  bVar8 = *(int *)(*(int *)(param_2 + 0x62) + 0x10) == 0;
  if (bVar8) {
    FUN_11013e60();
  }
  local_30 = '\0';
  uStack_2f = 0;
  local_46 = local_46 & 0xffff;
  sVar7 = FUN_11019ea0(param_1,*(int *)(param_2 + 0x62),iVar1,(undefined4 *)&local_30,
                       (undefined2 *)((int)&local_46 + 2));
  local_46 = CONCAT22(local_46._2_2_,sVar7);
  if (bVar8) {
    FUN_11013e70();
  }
  if ((short)local_46 == 0) {
    if (bVar8) {
      FUN_11013e60();
    }
    sVar7 = FUN_1101c7e0(param_1,*(int *)(param_2 + 0x62),(short *)&local_30,
                         (undefined2 *)((int)&local_46 + 2));
    local_46 = CONCAT22(local_46._2_2_,sVar7);
    if (bVar8) {
      FUN_11013e70();
    }
    if ((short)local_46 != 0) goto LAB_11025f17;
    if (CONCAT11(uStack_2f,local_30) == 0x1a) {
      bVar5 = true;
      cVar6 = cStack_2e;
    }
    else if (CONCAT11(uStack_2f,local_30) == 1) {
      bVar5 = true;
      cVar6 = '\x01' - (CONCAT22(uStack_2c,CONCAT11(uStack_2d,cStack_2e)) == 0);
    }
    else {
      cVar6 = local_30;
      if (CONCAT11(uStack_2f,local_30) == 0x15) {
        bVar5 = true;
        cVar6 = (local_2a & 0x7fffffff) != 0 ||
                CONCAT22(uStack_2c,CONCAT11(uStack_2d,cStack_2e)) != 0;
      }
    }
    if ((bVar5) && (cVar6 != '\0')) {
      FUN_11017d10(param_1,*(undefined4 *)(param_2 + 0x18),(short *)(param_2 + 0x20),
                   *(undefined4 *)(param_2 + 0x1c),*(uint *)(param_2 + 0xc),param_2 + 0x66,iVar1,
                   (short *)(param_2 + 0x30),'\0','\x01');
    }
  }
  else {
LAB_11025f17:
    FUN_1101d180(param_1,local_46,(short *)((int)&local_46 + 2));
  }
  FUN_11019e40(param_1,(short *)&local_30);
  local_46 = 0;
LAB_11025f3d:
  return local_46._2_1_;
}


