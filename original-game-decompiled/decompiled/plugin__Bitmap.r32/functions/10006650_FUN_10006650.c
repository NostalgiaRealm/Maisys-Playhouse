
/* ==== FUN_10006650 @ 10006650 ==== 
 * signature: undefined4 * __cdecl FUN_10006650(undefined4 * param_1)
 * body: 10006650-100066cc
 */

undefined4 * __cdecl FUN_10006650(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  uint uVar3;
  SIZE_T dwBytes;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = param_1[2];
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  uVar3 = (param_1[1] * (uint)(*(ushort *)((int)param_1 + 0xe) >> 3) + 3 & 0xfffffffc) * iVar1;
  if (uVar3 < (uint)param_1[5]) {
    uVar3 = param_1[5];
  }
  dwBytes = uVar3 + 0x28;
  if (*(ushort *)((int)param_1 + 0xe) == 8) {
    if (param_1[8] == 0) {
      dwBytes = uVar3 + 0x428;
    }
    else {
      dwBytes = dwBytes + param_1[8] * 4;
    }
  }
  hMem = GlobalAlloc(0x42,dwBytes);
  puVar2 = GlobalLock(hMem);
  FUN_100094f0(puVar2,param_1,dwBytes);
  return puVar2;
}


