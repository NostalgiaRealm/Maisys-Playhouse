
/* ==== FUN_004ad73f @ 004ad73f ==== 
 * signature: undefined __fastcall FUN_004ad73f(int param_1)
 * body: 004ad73f-004ad7fb
 */

void __fastcall FUN_004ad73f(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HPEN pHVar3;
  
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(param_1 + 0x44) = DVar1;
  DVar1 = GetSysColor(0x10);
  *(DWORD *)(param_1 + 0x48) = DVar1;
  DVar1 = GetSysColor(0x14);
  *(DWORD *)(param_1 + 0x4c) = DVar1;
  DVar1 = GetSysColor(0x12);
  *(DWORD *)(param_1 + 0x50) = DVar1;
  DVar1 = GetSysColor(6);
  *(DWORD *)(param_1 + 0x54) = DVar1;
  AfxDeleteObject((void **)(param_1 + 0x2c));
  AfxDeleteObject((void **)(param_1 + 0x30));
  AfxDeleteObject((void **)(param_1 + 0x28));
  AfxDeleteObject((void **)(param_1 + 0x34));
  pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x44));
  *(void **)(param_1 + 0x2c) = pHVar2;
  pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x48));
  *(void **)(param_1 + 0x30) = pHVar2;
  pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x4c));
  *(HBRUSH *)(param_1 + 0x28) = pHVar2;
  pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x54));
  *(HBRUSH *)(param_1 + 0x34) = pHVar2;
  AfxDeleteObject((void **)(param_1 + 0x3c));
  AfxDeleteObject((void **)(param_1 + 0x38));
  AfxDeleteObject((void **)(param_1 + 0x40));
  pHVar3 = CreatePen(0,0,*(COLORREF *)(param_1 + 0x48));
  *(void **)(param_1 + 0x3c) = pHVar3;
  pHVar3 = CreatePen(0,0,*(COLORREF *)(param_1 + 0x4c));
  *(HPEN *)(param_1 + 0x38) = pHVar3;
  pHVar3 = CreatePen(0,0,*(COLORREF *)(param_1 + 0x50));
  *(HPEN *)(param_1 + 0x40) = pHVar3;
  return;
}


