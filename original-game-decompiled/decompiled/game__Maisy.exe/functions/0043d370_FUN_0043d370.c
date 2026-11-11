
/* ==== FUN_0043d370 @ 0043d370 ==== 
 * signature: undefined __cdecl FUN_0043d370(int * param_1, undefined2 * param_2)
 * body: 0043d370-0043d3f5
 */

void __cdecl FUN_0043d370(int *param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 < -0x7ffe) {
    iVar1 = -0x7fff;
  }
  if (0x7ffe < iVar1) {
    iVar1 = 0x7fff;
  }
  *param_2 = (short)iVar1;
  iVar1 = *param_1;
  if (iVar1 < -0x7ffe) {
    iVar1 = -0x7fff;
  }
  if (0x7ffe < iVar1) {
    iVar1 = 0x7fff;
  }
  param_2[1] = (short)iVar1;
  iVar1 = param_1[3];
  if (iVar1 < -0x7ffe) {
    iVar1 = -0x7fff;
  }
  if (0x7ffe < iVar1) {
    iVar1 = 0x7fff;
  }
  param_2[2] = (short)iVar1;
  iVar1 = param_1[2];
  if (iVar1 < -0x7ffe) {
    iVar1 = -0x7fff;
  }
  if (0x7ffe < iVar1) {
    iVar1 = 0x7fff;
  }
  param_2[3] = (short)iVar1;
  return;
}


