
/* ==== FUN_00478220 @ 00478220 ==== 
 * signature: uint __cdecl FUN_00478220(uint param_1)
 * body: 00478220-00478253
 */

uint __cdecl FUN_00478220(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  piVar2 = (int *)*puVar1;
  if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x1e) & 1) != 0)) {
    param_1 = FUN_0043e610(piVar2,8,(int *)puVar1[1] + 1,(int *)puVar1[1],(int *)0x0);
    *(char *)(puVar1 + 2) = (char)param_1;
  }
  return param_1 & 0xffffff00;
}


