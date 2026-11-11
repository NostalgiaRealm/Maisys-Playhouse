
/* ==== __isindst_lk @ 00499910 ==== 
 * signature: undefined4 __cdecl __isindst_lk(int * param_1)
 * body: 00499910-00499b6a
 * note: Library Function - Single Match  __isindst_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __isindst_lk
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __isindst_lk(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (DAT_004dee74 == 0) {
    return 0;
  }
  uVar3 = param_1[5];
  if ((DAT_004def10 == uVar3) && (DAT_004def20 == uVar3)) goto LAB_00499aad;
  if (DAT_004e54a8 == 0) {
    FUN_00499b70(1,1,uVar3,4,1,0,0,2,0,0,0);
    uVar7 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar3 = param_1[5];
    uVar8 = 2;
    uVar6 = 0;
    uVar5 = 5;
    uVar4 = 10;
LAB_00499aa1:
    uVar1 = 0;
    iVar2 = 1;
  }
  else {
    if (DAT_004e5548 != 0) {
      uVar7 = (uint)DAT_004e554e;
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = (uint)DAT_004e554c;
      uVar5 = (uint)DAT_004e554e;
    }
    FUN_00499b70(1,(uint)(DAT_004e5548 == 0),uVar3,(uint)DAT_004e554a,uVar5,uVar6,uVar7,
                 (uint)DAT_004e5550,(uint)DAT_004e5552,(uint)DAT_004e5554,(uint)DAT_004e5556);
    if (DAT_004e54f4 == 0) {
      uVar7 = (uint)DAT_004e5502;
      uVar10 = (uint)DAT_004e5500;
      uVar9 = (uint)DAT_004e54fe;
      uVar8 = (uint)DAT_004e54fc;
      uVar6 = (uint)DAT_004e54f8;
      uVar5 = (uint)DAT_004e54fa;
      uVar3 = param_1[5];
      uVar4 = (uint)DAT_004e54f6;
      goto LAB_00499aa1;
    }
    uVar7 = (uint)DAT_004e5502;
    uVar10 = (uint)DAT_004e5500;
    uVar9 = (uint)DAT_004e54fe;
    uVar8 = (uint)DAT_004e54fc;
    uVar1 = (uint)DAT_004e54fa;
    uVar3 = param_1[5];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = (uint)DAT_004e54f6;
    iVar2 = 0;
  }
  FUN_00499b70(0,iVar2,uVar3,uVar4,uVar5,uVar6,uVar1,uVar8,uVar9,uVar10,uVar7);
LAB_00499aad:
  iVar2 = param_1[7];
  if (DAT_004def14 < DAT_004def24) {
    if ((iVar2 < DAT_004def14) || (DAT_004def24 < iVar2)) {
      return 0;
    }
    if ((DAT_004def14 < iVar2) && (iVar2 < DAT_004def24)) {
      return 1;
    }
  }
  else {
    if (iVar2 < DAT_004def24) {
      return 1;
    }
    if (DAT_004def14 < iVar2) {
      return 1;
    }
    if ((DAT_004def24 < iVar2) && (iVar2 < DAT_004def14)) {
      return 0;
    }
  }
  iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
  if (param_1[7] == DAT_004def14) {
    if (iVar2 < DAT_004def18) {
      return 0;
    }
  }
  else if (DAT_004def28 <= iVar2) {
    return 0;
  }
  return 1;
}


