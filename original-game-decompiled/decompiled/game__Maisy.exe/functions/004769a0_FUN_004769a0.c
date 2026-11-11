
/* ==== FUN_004769a0 @ 004769a0 ==== 
 * signature: uint __cdecl FUN_004769a0(int param_1)
 * body: 004769a0-004769d0
 */

uint __cdecl FUN_004769a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  uVar2 = piVar1[1];
  if (((*(byte *)(*piVar1 + 0x1e) & 4) != 0) && ((*(byte *)(uVar2 + 0x1e) & 4) != 0)) {
    uVar2 = (**(code **)(*(int *)*piVar1 + 0x460))(uVar2,0,0);
    *(char *)(piVar1 + 4) = (char)uVar2;
  }
  return uVar2 & 0xffffff00;
}


