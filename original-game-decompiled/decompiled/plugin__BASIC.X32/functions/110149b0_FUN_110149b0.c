
/* ==== FUN_110149b0 @ 110149b0 ==== 
 * signature: bool __cdecl FUN_110149b0(undefined4 param_1, undefined4 param_2, short * param_3, int * param_4)
 * body: 110149b0-110149f8
 */

bool __cdecl FUN_110149b0(undefined4 param_1,undefined4 param_2,short *param_3,int *param_4)

{
  int iVar1;
  
  if (*param_3 != 0x191) {
    return (char)param_4[3] == '\0';
  }
  if ((param_3[3] == 0x1d) && (iVar1 = *param_4, *param_4 = iVar1 + 1, param_4[1] == iVar1 + 1)) {
    *(int *)(param_3 + 6) = param_4[2];
    *(undefined1 *)(param_4 + 3) = 1;
    return (char)param_4[3] == '\0';
  }
  return (char)param_4[3] == '\0';
}


