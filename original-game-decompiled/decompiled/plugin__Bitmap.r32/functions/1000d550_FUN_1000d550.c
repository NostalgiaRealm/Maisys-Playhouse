
/* ==== FUN_1000d550 @ 1000d550 ==== 
 * signature: int * __cdecl FUN_1000d550(int param_1, int param_2)
 * body: 1000d550-1000d5fa
 */

int * __cdecl FUN_1000d550(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  int *piVar3;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_10016384 < dwBytes) {
LAB_1000d5c4:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_1000a320(9);
        piVar3 = FUN_1000d960(dwBytes >> 4);
        FUN_1000a3a0(9);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_1000d5c4;
        }
      }
      piVar3 = HeapAlloc(DAT_100183e4,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_100172c8 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_1000ed90(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}


