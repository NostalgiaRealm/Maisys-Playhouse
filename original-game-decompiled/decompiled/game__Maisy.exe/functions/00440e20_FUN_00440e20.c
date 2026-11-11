
/* ==== FUN_00440e20 @ 00440e20 ==== 
 * signature: undefined __fastcall FUN_00440e20(int * param_1)
 * body: 00440e20-00441152
 */

void __fastcall FUN_00440e20(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *this;
  undefined4 *unaff_FS_OFFSET;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 local_c8 [21];
  AFX_EXCEPTION_LINK local_74 [72];
  int local_2c;
  int *local_28;
  int *local_24;
  undefined2 local_1a;
  char cStack_17;
  undefined1 uStack_16;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044117a;
  *unaff_FS_OFFSET = &local_10;
  uStack_14 = SUB41(&stack0xffffff2c,0);
  uStack_13 = (undefined1)((uint)&stack0xffffff2c >> 8);
  uStack_12 = (undefined2)((uint)&stack0xffffff2c >> 0x10);
  local_24 = param_1;
  cVar3 = FUN_00440230(param_1,0x40);
  if ((cVar3 != '\0') || (iVar5 = FUN_0043fd70(local_24,'\x01'), iVar5 == 0)) goto LAB_00441143;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_74);
  local_8 = 1;
  iVar5 = *local_24;
  pcVar1 = *(code **)(iVar5 + 0x210);
  piVar6 = (int *)(*pcVar1)();
  (**(code **)(*piVar6 + 0x128))();
  iVar7 = FUN_0043fd60((int)local_24);
  if (iVar7 == 0) {
    FUN_0043f9a0(local_24);
  }
  FUN_004404e0(local_24);
  FUN_004401e0(local_24,0x80,'\x01');
  FUN_004401e0(local_24,0x40,'\x01');
  FUN_004401e0(local_24,0x1000,'\0');
  iVar7 = (*pcVar1)();
  if ((*(byte *)(iVar7 + 0x29) & 1) == 0) {
LAB_00440f19:
    cVar3 = '\0';
  }
  else {
    pcVar2 = *(code **)(iVar5 + 0x244);
    iVar7 = (*pcVar2)();
    if ((iVar7 != 0) &&
       ((iVar7 = (*pcVar2)(), *(int *)(iVar7 + 0x156) == 0x6e705453 ||
        (iVar7 = (*pcVar2)(), *(int *)(iVar7 + 0x156) == 0x616e7473)))) goto LAB_00440f19;
    cVar3 = '\x01';
  }
  FUN_004401e0(local_24,2,cVar3);
  iVar7 = (*pcVar1)();
  FUN_004401e0(local_24,0x800,(*(uint *)(iVar7 + 0x26) & 0x40000000) == 0);
  cVar3 = FUN_00440230(local_24,0x400);
  FUN_004418e0(local_24,cVar3);
  local_28 = (int *)(*pcVar1)();
  iVar7 = *local_28;
  uVar11 = 1;
  cVar3 = FUN_00440230(local_24,0x800);
  (**(code **)(iVar7 + 0x358))(cVar3,uVar11);
  uVar9 = 0;
  uVar11 = (*pcVar1)();
  FUN_004142c0(local_c8,0x324,0,uVar11,uVar9);
  puVar10 = local_c8;
  this = (void *)(*pcVar1)();
  FUN_0046b770(this,(int)puVar10);
  FUN_00441290(local_24);
  piVar6 = (int *)(*pcVar1)();
  cStack_17 = (**(code **)(*piVar6 + 0x46c))();
  piVar6 = (int *)(*pcVar1)();
  uStack_16 = (**(code **)(*piVar6 + 0x474))();
  piVar6 = (int *)(*pcVar1)();
  cVar3 = (**(code **)(*piVar6 + 0x49c))();
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(iVar5 + 0x244);
    iVar7 = (*pcVar2)();
    if ((iVar7 != 0) && (iVar7 = (*pcVar2)(), *(int *)(iVar7 + 0x156) != 0x6e705453)) {
      (*pcVar2)();
    }
  }
  FUN_00441810(local_24,cStack_17);
  FUN_00441860((int)local_24);
  iVar7 = (*pcVar1)();
  sVar4 = *(short *)(iVar7 + 0x15e);
  if (sVar4 < 0x65) {
    if (sVar4 < 1) {
      sVar4 = 0;
    }
  }
  else {
    sVar4 = 100;
  }
  local_2c = (int)sVar4;
  _floor((double)local_2c * 0.01 * 256.0 + 0.5);
  lVar8 = __ftol();
  local_1a = (undefined2)lVar8;
  piVar6 = (int *)(*pcVar1)();
  cVar3 = (**(code **)(*piVar6 + 0x494))();
  if (cVar3 != '\0') {
    local_1a = 0;
  }
  FUN_004415c0((int)local_24);
  FUN_004418a0((int)local_24);
  pcVar1 = *(code **)(iVar5 + 0x244);
  iVar5 = (*pcVar1)();
  if ((iVar5 == 0) ||
     ((iVar5 = (*pcVar1)(), *(int *)(iVar5 + 0x156) != 0x6e705453 &&
      (iVar5 = (*pcVar1)(), *(int *)(iVar5 + 0x156) != 0x616e7473)))) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  FUN_00440250(local_24,cVar3);
  FUN_00441690(local_24,0,0);
  FUN_00440010(local_24);
  piVar6 = (int *)FUN_0041ed90((int)local_24);
  (**(code **)(*piVar6 + 0x78))(0xc,local_24,1);
  local_8 = 0xffffffff;
  FUN_00441184();
LAB_00441143:
  *unaff_FS_OFFSET = local_10;
  return;
}


