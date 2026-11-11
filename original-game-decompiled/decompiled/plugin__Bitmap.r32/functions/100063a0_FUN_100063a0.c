
/* ==== FUN_100063a0 @ 100063a0 ==== 
 * signature: undefined __cdecl FUN_100063a0(undefined4 * param_1, int * param_2, int * param_3, int * param_4, int * param_5, undefined4 * param_6, undefined4 param_7, int param_8)
 * body: 100063a0-10006436
 */

void __cdecl
FUN_100063a0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
            undefined4 *param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  
  *param_2 = (int)*(short *)(param_8 + 0x14) - (int)*(short *)(param_8 + 0x10);
  *param_3 = (int)*(short *)(param_8 + 0x16) - (int)*(short *)(param_8 + 0x12);
  *param_4 = (int)*(short *)(param_8 + 0x1a);
  *param_5 = (int)*(short *)(param_8 + 0x18);
  *param_1 = *(undefined4 *)(param_8 + 0x1c);
  if (*param_5 != 8) {
    *param_6 = 0;
    return;
  }
  iVar1 = GetDeviceCaps(*(HDC *)(param_8 + 0x20),0xc);
  if (iVar1 == 8) {
    FUN_100062f0(0x10016aa0);
    *param_6 = &DAT_10016aa0;
    return;
  }
  FUN_10006320(*(HDC *)(param_8 + 0x20),(RGBQUAD *)&DAT_10016aa0);
  *param_6 = &DAT_10016aa0;
  return;
}


