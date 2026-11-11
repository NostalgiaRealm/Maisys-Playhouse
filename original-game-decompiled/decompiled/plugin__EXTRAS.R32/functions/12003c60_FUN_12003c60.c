
/* ==== FUN_12003c60 @ 12003c60 ==== 
 * signature: undefined __thiscall FUN_12003c60(void * this, short param_1, char param_2)
 * body: 12003c60-12003d56
 */

void __thiscall FUN_12003c60(void *this,short param_1,char param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  
  sVar1 = param_1 + -1;
  if ((-1 < sVar1) && (sVar1 < *(short *)((int)this + 0x10))) {
    *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + '\x01';
    piVar3 = (int *)(sVar1 * 0x3c + *(int *)((int)this + 0x12));
    if (param_2 != *(char *)((int)piVar3 + 0x25)) {
      if (param_2 == '\0') {
        *(undefined1 *)((int)piVar3 + 0x25) = 0;
        *(short *)(*piVar3 + 0x66) = *(short *)(*piVar3 + 0x66) + -1;
        if (((char)piVar3[9] != '\0') ||
           ((*(short *)(*piVar3 + 0x66) != 0 && (*(char *)((int)piVar3 + 0x25) == '\0')))) {
          FUN_120040a0(piVar3);
        }
      }
      else {
        if (((char)piVar3[9] != '\0') ||
           ((*(short *)(*piVar3 + 0x66) != 0 && (*(char *)((int)piVar3 + 0x25) == '\0')))) {
          FUN_12004050((int)piVar3);
        }
        *(undefined1 *)((int)piVar3 + 0x25) = 1;
        *(short *)(*piVar3 + 0x66) = *(short *)(*piVar3 + 0x66) + 1;
      }
    }
    if (param_2 == '\0') {
      sVar1 = *(short *)((int)this + 0x66);
    }
    else {
      sVar1 = *(short *)((int)this + 0x66) + -1;
    }
    if (sVar1 == 0) {
      sVar1 = *(short *)((int)this + 0x10);
      piVar2 = *(int **)((int)this + 0x12);
      while (sVar1 = sVar1 + -1, -1 < sVar1) {
        if (piVar3 != piVar2) {
          if (param_2 == '\0') {
            if (((char)piVar2[9] == '\0') &&
               ((*(short *)(*piVar2 + 0x66) == 0 || (*(char *)((int)piVar2 + 0x25) != '\0')))) {
              FUN_12004050((int)piVar2);
            }
          }
          else {
            FUN_120040a0(piVar2);
          }
        }
        piVar2 = piVar2 + 0xf;
      }
    }
    *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + -1;
  }
  return;
}


