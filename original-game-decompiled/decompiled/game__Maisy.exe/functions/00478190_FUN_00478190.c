
/* ==== FUN_00478190 @ 00478190 ==== 
 * signature: uint __cdecl FUN_00478190(int param_1)
 * body: 00478190-004781a7
 */

uint __cdecl FUN_00478190(int param_1)

{
  uint uVar1;
  
  uVar1 = LocalUnlock(*(HLOCAL *)(*(int *)(param_1 + 0x1a) + 8));
  return uVar1 & 0xffffff00;
}


