
/* ==== FUN_00405390 @ 00405390 ==== 
 * signature: undefined __fastcall FUN_00405390(int param_1)
 * body: 00405390-004053d7
 */

void __fastcall FUN_00405390(int param_1)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x66) + 0xc);
  if (((*(char *)(param_1 + 0xa4) != '\0') && (sVar1 != 0)) && (sVar3 = 1, 0 < sVar1)) {
    do {
      piVar2 = (int *)FUN_004308b0(*(void **)(param_1 + 0x66),sVar3);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x1d8))(param_1,1);
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 <= sVar1);
  }
  return;
}


