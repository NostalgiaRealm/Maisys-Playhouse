
/* ==== FUN_0040db20 @ 0040db20 ==== 
 * signature: int * __cdecl FUN_0040db20(int param_1, int param_2)
 * body: 0040db20-0040dbb7
 */

int * __cdecl FUN_0040db20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint dwBytes;
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
      if (DAT_004131f4 < dwBytes) {
LAB_0040db80:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        piVar3 = FUN_0040c450(dwBytes >> 4);
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
          goto LAB_0040db80;
        }
      }
      piVar3 = HeapAlloc(DAT_00413ce4,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_004134b4 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_0040c090(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}


