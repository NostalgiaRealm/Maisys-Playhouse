
/* ==== FUN_12003670 @ 12003670 ==== 
 * signature: undefined __fastcall FUN_12003670(int param_1)
 * body: 12003670-120036ca
 */

void __fastcall FUN_12003670(int param_1)

{
  short sVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    FUN_12004cf0(*(void **)(param_1 + 4),*(int **)(param_1 + 8));
    sVar1 = *(short *)(param_1 + 0x10);
    piVar2 = *(int **)(param_1 + 0x12);
    while (sVar1 = sVar1 + -1, -1 < sVar1) {
      if (((char)piVar2[9] == '\0') &&
         ((*(short *)(*piVar2 + 0x66) == 0 || (*(char *)((int)piVar2 + 0x25) != '\0')))) {
        FUN_120040a0(piVar2);
      }
      piVar2 = piVar2 + 0xf;
    }
    FUN_12015fd0(*(int *)(param_1 + 0xc));
  }
  return;
}


