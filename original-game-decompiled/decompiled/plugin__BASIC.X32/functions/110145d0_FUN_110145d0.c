
/* ==== FUN_110145d0 @ 110145d0 ==== 
 * signature: undefined FUN_110145d0(void)
 * body: 110145d0-11014618
 */

bool FUN_110145d0(undefined4 param_1,undefined4 param_2,short *param_3,int *param_4)

{
  int iVar1;
  
  if (*param_3 == 0x898) {
    iVar1 = *param_4;
    *param_4 = iVar1 + 1;
    if ((int)*(short *)param_4[1] == iVar1 + 1) {
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)((short *)param_4[1] + 3);
      *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_4[1] + 10);
      *(undefined1 *)(param_4 + 2) = 1;
      return (char)param_4[2] == '\0';
    }
  }
  return (char)param_4[2] == '\0';
}


