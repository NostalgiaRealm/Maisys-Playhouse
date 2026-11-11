
/* ==== FUN_00477730 @ 00477730 ==== 
 * signature: uint __cdecl FUN_00477730(uint param_1)
 * body: 00477730-00477755
 */

uint __cdecl FUN_00477730(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = *(uint **)(param_1 + 0x1a);
  piVar2 = (int *)*puVar1;
  if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x1e) & 0x10) != 0)) {
    param_1 = (**(code **)(*piVar2 + 0x16c))();
    *puVar1 = param_1;
  }
  return param_1 & 0xffffff00;
}


