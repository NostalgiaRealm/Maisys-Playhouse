
/* ==== FUN_00488fa0 @ 00488fa0 ==== 
 * signature: undefined __cdecl FUN_00488fa0(int param_1, uint param_2, undefined2 * param_3)
 * body: 00488fa0-0048904e
 */

void __cdecl FUN_00488fa0(int param_1,uint param_2,undefined2 *param_3)

{
  SHORT SVar1;
  DWORD DVar2;
  
  *param_3 = 6;
  *(undefined1 *)(param_3 + 2) = (undefined1)param_1;
  *(char *)((int)param_3 + 5) = (char)param_2;
  DVar2 = timeGetTime();
  *(uint *)(param_3 + 3) = (DVar2 * 6) / 100;
  if ((param_2 & 0x4000) == 0) {
    param_3[5] = 1;
    if ((param_2 & 0x8000) == 0) {
      param_3[5] = 0;
    }
  }
  else if ((param_2 & 0x8000) == 0) {
    param_3[5] = 2;
  }
  else {
    param_3[5] = 1;
  }
  if (((param_2 & 0x100) != 0) && (param_1 == 0xd)) {
    *(undefined1 *)(param_3 + 2) = 3;
  }
  param_3[1] = 0;
  if ((param_2 & 0x2000) != 0) {
    param_3[1] = 0x100;
  }
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    *(byte *)((int)param_3 + 3) = *(byte *)((int)param_3 + 3) | 2;
  }
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    *(byte *)((int)param_3 + 3) = *(byte *)((int)param_3 + 3) | 0x10;
  }
  SVar1 = GetKeyState(0x12);
  if (SVar1 < 0) {
    *(byte *)((int)param_3 + 3) = *(byte *)((int)param_3 + 3) | 1;
  }
  return;
}


