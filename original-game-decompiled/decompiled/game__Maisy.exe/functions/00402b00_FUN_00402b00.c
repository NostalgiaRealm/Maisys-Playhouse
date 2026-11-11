
/* ==== FUN_00402b00 @ 00402b00 ==== 
 * signature: undefined __fastcall FUN_00402b00(int * param_1)
 * body: 00402b00-00402dba
 */

void __fastcall FUN_00402b00(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  HPALETTE pHVar5;
  undefined4 uVar6;
  
  if ((char)param_1[0x29] != '\0') {
    FUN_00408240(param_1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8a))(1);
    *(undefined4 *)((int)param_1 + 0x8a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x32) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x32))(1);
    *(undefined4 *)((int)param_1 + 0x32) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x4a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x4a))(1);
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x4e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x4e))(1);
    *(undefined4 *)((int)param_1 + 0x4e) = 0;
  }
  if (*(int *)((int)param_1 + 0x52) != 0) {
    FUN_00402dc0(*(int *)((int)param_1 + 0x52));
    if (*(undefined4 **)((int)param_1 + 0x52) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x52))(1);
    }
    *(undefined4 *)((int)param_1 + 0x52) = 0;
  }
  if (*(int *)((int)param_1 + 0x56) != 0) {
    FUN_00402dc0(*(int *)((int)param_1 + 0x56));
    if (*(undefined4 **)((int)param_1 + 0x56) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x56))(1);
    }
    *(undefined4 *)((int)param_1 + 0x56) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
    *(undefined4 *)((int)param_1 + 0x82) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x62) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x62))(1);
    *(undefined4 *)((int)param_1 + 0x62) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x5a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x5a))(1);
    *(undefined4 *)((int)param_1 + 0x5a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x66) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x66))(1);
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x6a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6a))(1);
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x6e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6e))(1);
    *(undefined4 *)((int)param_1 + 0x6e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x72) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x72))(1);
    *(undefined4 *)((int)param_1 + 0x72) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x76) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x76))(1);
    *(undefined4 *)((int)param_1 + 0x76) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x7a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7a))(1);
    *(undefined4 *)((int)param_1 + 0x7a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x7e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7e))(1);
    *(undefined4 *)((int)param_1 + 0x7e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x5e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x5e))(1);
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  if (*(int *)((int)param_1 + 0x86) != 0) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x86) + 8);
    while (iVar3 != 0) {
      puVar2 = (undefined4 *)FUN_0047da90(*(undefined4 **)((int)param_1 + 0x86));
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = *(int *)(*(int *)((int)param_1 + 0x86) + 8);
    }
    puVar2 = *(undefined4 **)((int)param_1 + 0x86);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0047dbb0(puVar2);
      FUN_004a602d(puVar2);
    }
    *(undefined4 *)((int)param_1 + 0x86) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
    *(undefined4 *)((int)param_1 + 0x8e) = 0;
  }
  if ((LPVOID)param_1[0xe] != (LPVOID)0x0) {
    FUN_00434950((LPVOID)param_1[0xe]);
    param_1[0xe] = 0;
  }
  if ((LPVOID)param_1[0xf] != (LPVOID)0x0) {
    FUN_00434950((LPVOID)param_1[0xf]);
    param_1[0xf] = 0;
  }
  if (((param_1[0x57] != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) &&
     (iVar3 = FUN_00458a00(*(int *)((int)param_1 + 0x2a)), iVar3 != 0)) {
    piVar1 = (int *)param_1[0x57];
    uVar6 = 0;
    uVar4 = FUN_00458a00(*(int *)((int)param_1 + 0x2a));
    (**(code **)(*piVar1 + 0x1c8))(uVar4,uVar6);
    param_1[0x57] = 0;
  }
  FUN_00414520((int)(param_1 + 0x4d));
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  pHVar5 = GetStockObject(0xf);
  FUN_0047bdb0(DAT_004da388,0xfffffffb,pHVar5);
  iVar3 = FUN_00439800();
  FUN_004397c0(iVar3);
  FUN_00412db0(param_1);
  return;
}


