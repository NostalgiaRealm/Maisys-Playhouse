
/* ==== FUN_00478260 @ 00478260 ==== 
 * signature: uint __cdecl FUN_00478260(int param_1)
 * body: 00478260-0047828f
 */

uint __cdecl FUN_00478260(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  piVar2 = FUN_0043e870((int *)0x0,(int *)puVar1[1] + 1,*(int *)puVar1[1]);
  if (piVar2 != (int *)0x0) {
    *puVar1 = piVar2;
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  return (uint)piVar2 & 0xffffff00;
}


