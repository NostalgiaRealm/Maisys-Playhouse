
/* ==== FUN_12003d60 @ 12003d60 ==== 
 * signature: undefined __fastcall FUN_12003d60(int param_1)
 * body: 12003d60-12003db1
 */

void __fastcall FUN_12003d60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x62) = *(char *)(param_1 + 0x62) + '\x01';
  iVar2 = (int)*(short *)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x12);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    if (*(char *)((int)piVar1 + 0x25) != '\0') {
      *(undefined1 *)((int)piVar1 + 0x25) = 0;
      *(short *)(*piVar1 + 0x66) = *(short *)(*piVar1 + 0x66) + -1;
      if (((char)piVar1[9] != '\0') ||
         ((*(short *)(*piVar1 + 0x66) != 0 && (*(char *)((int)piVar1 + 0x25) == '\0')))) {
        FUN_120040a0(piVar1);
      }
    }
    piVar1 = piVar1 + 0xf;
  }
  *(char *)(param_1 + 0x62) = *(char *)(param_1 + 0x62) + -1;
  *(undefined2 *)(param_1 + 0x66) = 0;
  return;
}


