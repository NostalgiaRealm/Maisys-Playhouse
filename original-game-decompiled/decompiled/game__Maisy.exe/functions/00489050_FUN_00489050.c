
/* ==== FUN_00489050 @ 00489050 ==== 
 * signature: undefined __cdecl FUN_00489050(int * param_1)
 * body: 00489050-00489129
 */

void __cdecl FUN_00489050(int *param_1)

{
  int iVar1;
  bool bVar2;
  SHORT SVar3;
  
  SVar3 = GetKeyState(0x10);
  if (-1 < SVar3) {
    SVar3 = GetKeyState(0x14);
    bVar2 = false;
    if (SVar3 < 1) goto LAB_00489070;
  }
  bVar2 = true;
LAB_00489070:
  iVar1 = *param_1;
  if (iVar1 == 0xc0) {
    *param_1 = (int)(char)((-!bVar2 & 0xe2U) + 0x7e);
    return;
  }
  if (iVar1 != 0xbd) {
    if (iVar1 != 0xbb) {
      if (bVar2) {
        switch(iVar1) {
        case 0x30:
          *param_1 = 0x29;
          return;
        case 0x31:
          *param_1 = 0x21;
          return;
        case 0x32:
          *param_1 = 0x40;
          return;
        case 0x33:
          *param_1 = 0x23;
          return;
        case 0x34:
          *param_1 = 0x24;
          return;
        case 0x35:
          *param_1 = 0x25;
          return;
        case 0x36:
          *param_1 = 0x5e;
          return;
        case 0x37:
          *param_1 = 0x26;
          return;
        case 0x38:
          *param_1 = 0x2a;
          return;
        case 0x39:
          *param_1 = 0x28;
        }
      }
      return;
    }
    *param_1 = (int)(char)((-!bVar2 & 0x12U) + 0x2b);
    return;
  }
  *param_1 = (int)(char)((-!bVar2 & 0xceU) + 0x5f);
  return;
}


