
/* ==== FUN_00477160 @ 00477160 ==== 
 * signature: uint __cdecl FUN_00477160(int param_1)
 * body: 00477160-00477187
 */

uint __cdecl FUN_00477160(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  piVar2 = FUN_0043eae0(*(int *)(*(int *)(param_1 + 0x16) + 8),puVar1[0x26]);
  *puVar1 = piVar2;
  return (uint)piVar2 & 0xffffff00;
}


