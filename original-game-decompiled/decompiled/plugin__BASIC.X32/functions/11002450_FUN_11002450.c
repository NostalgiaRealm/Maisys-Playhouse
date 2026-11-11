
/* ==== FUN_11002450 @ 11002450 ==== 
 * signature: undefined __cdecl FUN_11002450(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11002450-11002486
 */

void __cdecl FUN_11002450(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_4;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_4,4);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = local_4;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


