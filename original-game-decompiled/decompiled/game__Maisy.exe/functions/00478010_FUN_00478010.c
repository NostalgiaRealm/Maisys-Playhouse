
/* ==== FUN_00478010 @ 00478010 ==== 
 * signature: char __cdecl FUN_00478010(int param_1)
 * body: 00478010-0047803a
 */

char __cdecl FUN_00478010(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042bba0(*(int *)(*(int *)(param_1 + 0x16) + 8),
                       (char *)**(undefined4 **)(param_1 + 0x1a),
                       (char *)(*(undefined4 **)(param_1 + 0x1a))[1]);
  return '\x01' - (iVar1 == 0);
}


