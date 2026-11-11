
/* ==== FUN_12003b50 @ 12003b50 ==== 
 * signature: undefined __thiscall FUN_12003b50(void * this, short param_1, char param_2)
 * body: 12003b50-12003c57
 */

void __thiscall FUN_12003b50(void *this,short param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  short sVar3;
  
  *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + '\x01';
  if (param_1 == 0) {
    sVar3 = 0;
    if (0 < *(short *)((int)this + 0x10)) {
      do {
        piVar2 = (int *)(sVar3 * 0x3c + *(int *)((int)this + 0x12));
        cVar1 = (char)piVar2[9];
        if (cVar1 != param_2) {
          if (param_2 == '\0') {
            if ((cVar1 != '\0') ||
               ((*(short *)(*piVar2 + 0x66) != 0 && (*(char *)((int)piVar2 + 0x25) == '\0')))) {
              FUN_12004050((int)piVar2);
            }
            *(undefined1 *)(piVar2 + 9) = 0;
          }
          else {
            if ((cVar1 == '\0') &&
               ((*(short *)(*piVar2 + 0x66) == 0 || (*(char *)((int)piVar2 + 0x25) != '\0')))) {
              FUN_120040a0(piVar2);
            }
            *(undefined1 *)(piVar2 + 9) = 1;
          }
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)((int)this + 0x10));
      *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + -1;
      return;
    }
  }
  else if ((0 < param_1) && (param_1 <= *(short *)((int)this + 0x10))) {
    piVar2 = (int *)(param_1 * 0x3c + -0x3c + *(int *)((int)this + 0x12));
    cVar1 = *(char *)(param_1 * 0x3c + -0x18 + *(int *)((int)this + 0x12));
    if (cVar1 != param_2) {
      if (param_2 != '\0') {
        if ((cVar1 == '\0') &&
           ((*(short *)(*piVar2 + 0x66) == 0 || (*(char *)((int)piVar2 + 0x25) != '\0')))) {
          FUN_120040a0(piVar2);
        }
        *(undefined1 *)(piVar2 + 9) = 1;
        *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + -1;
        return;
      }
      if ((cVar1 != '\0') ||
         ((*(short *)(*piVar2 + 0x66) != 0 && (*(char *)((int)piVar2 + 0x25) == '\0')))) {
        FUN_12004050((int)piVar2);
      }
      *(undefined1 *)(piVar2 + 9) = 0;
    }
  }
  *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + -1;
  return;
}


