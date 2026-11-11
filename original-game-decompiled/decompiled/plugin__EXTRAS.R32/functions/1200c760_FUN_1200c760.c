
/* ==== FUN_1200c760 @ 1200c760 ==== 
 * signature: undefined4 __cdecl FUN_1200c760(int param_1)
 * body: 1200c760-1200c798
 */

undefined4 __cdecl FUN_1200c760(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6a);
  if (iVar1 != 0) {
    FUN_12003230(iVar1);
    FUN_12016030(iVar1);
  }
  if (*(int *)(param_1 + 0x1a) != 0) {
    FUN_12015ea0(*(int *)(param_1 + 0x1a));
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  return 0;
}


