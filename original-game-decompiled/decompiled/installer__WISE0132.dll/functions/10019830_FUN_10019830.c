
/* ==== FUN_10019830 @ 10019830 ==== 
 * signature: int * __cdecl FUN_10019830(int param_1, int param_2)
 * body: 10019830-100198da
 */

int * __cdecl FUN_10019830(int param_1,int param_2)

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
      if (DAT_100221d4 < dwBytes) {
LAB_100198a4:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_10016e20(9);
        piVar3 = FUN_100175a0(dwBytes >> 4);
        FUN_10016ea0(9);
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
          goto LAB_100198a4;
        }
      }
      piVar3 = HeapAlloc(DAT_1002532c,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_10023414 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_10017f60(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}


