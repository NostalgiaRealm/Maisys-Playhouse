
/* ==== FUN_12003b00 @ 12003b00 ==== 
 * signature: undefined __thiscall FUN_12003b00(void * this, undefined1 param_1)
 * body: 12003b00-12003b47
 */

void __thiscall FUN_12003b00(void *this,undefined1 param_1)

{
  short sVar1;
  int *piVar2;
  
  sVar1 = *(short *)((int)this + 0x10);
  piVar2 = *(int **)((int)this + 0x12);
  *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + '\x01';
  while (sVar1 = sVar1 + -1, -1 < sVar1) {
    if (((char)piVar2[9] == '\0') &&
       ((*(short *)(*piVar2 + 0x66) == 0 || (*(char *)((int)piVar2 + 0x25) != '\0')))) {
      FUN_120040d0(piVar2);
    }
    piVar2 = piVar2 + 0xf;
  }
  *(char *)((int)this + 0x62) = *(char *)((int)this + 0x62) + -1;
  *(undefined1 *)((int)this + 0x72) = param_1;
  return;
}


