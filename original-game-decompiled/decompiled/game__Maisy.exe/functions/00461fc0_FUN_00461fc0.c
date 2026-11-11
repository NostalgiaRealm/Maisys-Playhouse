
/* ==== FUN_00461fc0 @ 00461fc0 ==== 
 * signature: undefined __fastcall FUN_00461fc0(int * param_1)
 * body: 00461fc0-0046204b
 */

void __fastcall FUN_00461fc0(int *param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  
  if ((*(byte *)(param_1 + 0x27) & 0x20) != 0) {
    cVar3 = (**(code **)(*param_1 + 0x35c))();
    if ((cVar3 != '\0') && ((short)param_1[0x3b] == 1)) {
      if (*(HRGN *)((int)param_1 + 0xf6) != (HRGN)0x0) {
        OffsetRgn(*(HRGN *)((int)param_1 + 0xf6),-(int)*(short *)((int)param_1 + 0xee),
                  -(int)(short)param_1[0x3c]);
      }
      iVar2 = param_1[0x3c];
      sVar1 = *(short *)((int)param_1 + 0xee);
      *(undefined2 *)(param_1 + 0x3c) = 0;
      *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xdf;
      *(undefined2 *)((int)param_1 + 0xee) = 0;
      *(short *)((int)param_1 + 0xf2) = *(short *)((int)param_1 + 0xf2) - sVar1;
      *(short *)(param_1 + 0x3d) = (short)param_1[0x3d] - (short)iVar2;
    }
  }
  return;
}


