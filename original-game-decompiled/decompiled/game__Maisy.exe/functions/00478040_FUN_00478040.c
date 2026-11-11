
/* ==== FUN_00478040 @ 00478040 ==== 
 * signature: uint __cdecl FUN_00478040(uint param_1)
 * body: 00478040-00478074
 */

uint __cdecl FUN_00478040(uint param_1)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  this = (void *)puVar1[1];
  if ((this != (void *)0x0) && (*(short *)((int)this + 0x22) == 0x51)) {
    piVar2 = FUN_00467030(this,(char *)*puVar1);
    puVar1[2] = piVar2;
    return (uint)piVar2 & 0xffffff00;
  }
  puVar1[2] = 0;
  return param_1 & 0xffffff00;
}


