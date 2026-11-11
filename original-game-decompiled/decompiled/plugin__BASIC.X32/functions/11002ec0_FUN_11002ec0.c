
/* ==== FUN_11002ec0 @ 11002ec0 ==== 
 * signature: undefined1 __cdecl FUN_11002ec0(undefined4 * param_1, int param_2)
 * body: 11002ec0-11002f0e
 */

undefined1 __cdecl FUN_11002ec0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  if (*(int *)(iVar1 + 0xc) == 0x514) {
    FUN_11002cc0(param_1,param_2,(short *)(iVar1 + 0x24));
    return 0;
  }
  if ((*(int *)(iVar1 + 0xc) == 0x4b0) && (*(int *)(param_2 + 0x10) != 0)) {
    FUN_11002da0(param_1,param_2,(short *)(iVar1 + 0x24));
    uVar2 = 0;
  }
  return uVar2;
}


