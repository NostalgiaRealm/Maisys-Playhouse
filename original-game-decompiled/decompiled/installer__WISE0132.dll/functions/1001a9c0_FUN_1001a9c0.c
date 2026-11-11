
/* ==== FUN_1001a9c0 @ 1001a9c0 ==== 
 * signature: int __cdecl FUN_1001a9c0(int * param_1)
 * body: 1001a9c0-1001a9f4
 */

int __cdecl FUN_1001a9c0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001aa00(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = FUN_1001b250(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


