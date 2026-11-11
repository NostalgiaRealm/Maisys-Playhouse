
/* ==== FUN_004bc63e @ 004bc63e ==== 
 * signature: int __fastcall FUN_004bc63e(int param_1)
 * body: 004bc63e-004bc72f
 */

int __fastcall FUN_004bc63e(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  HBRUSH pHVar3;
  HCURSOR pHVar4;
  int iVar5;
  
  DVar2 = GetVersion();
  *(DWORD *)(param_1 + 0x70) = (DVar2 & 0xff) * 0x100 + (DVar2 >> 8 & 0xff);
  *(int *)(param_1 + 0x74) = -((int)DVar2 >> 0x1f);
  uVar1 = (uint)(3 < (byte)DVar2);
  *(uint *)(param_1 + 0x78) = uVar1;
  *(uint *)(param_1 + 0x7c) = 1 - uVar1;
  *(uint *)(param_1 + 0x80) = uVar1;
  if ((-((int)DVar2 >> 0x1f) == 0) || (uVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  *(uint *)(param_1 + 0x88) = 0;
  if (uVar1 != 0) {
    DVar2 = GetProcessVersion(0);
    *(uint *)(param_1 + 0x88) = (uint)(0x3ffff < DVar2);
  }
  FUN_004ad7fc(param_1);
  pHVar3 = CreateSolidBrush(0xc0c0c0);
  *(HBRUSH *)(param_1 + 0x20) = pHVar3;
  pHVar3 = CreateSolidBrush(0x808080);
  *(HBRUSH *)(param_1 + 0x24) = pHVar3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_004ad73f(param_1);
  pHVar4 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  *(HCURSOR *)(param_1 + 0x58) = pHVar4;
  pHVar4 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HCURSOR *)(param_1 + 0x5c) = pHVar4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar5 = 2 - (uint)(*(int *)(param_1 + 0x78) == 0);
  *(int *)(param_1 + 0x10) = iVar5;
  *(int *)(param_1 + 0x14) = iVar5;
  return param_1;
}


