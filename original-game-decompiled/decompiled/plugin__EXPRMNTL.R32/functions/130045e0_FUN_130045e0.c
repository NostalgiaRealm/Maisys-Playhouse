
/* ==== FUN_130045e0 @ 130045e0 ==== 
 * signature: undefined4 __cdecl FUN_130045e0(int param_1, int param_2)
 * body: 130045e0-13004614
 */

undefined4 __cdecl FUN_130045e0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))) {
    return 0;
  }
  return 0x10000;
}


