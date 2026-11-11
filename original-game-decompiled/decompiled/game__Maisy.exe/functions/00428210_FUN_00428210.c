
/* ==== FUN_00428210 @ 00428210 ==== 
 * signature: undefined __fastcall FUN_00428210(int * param_1)
 * body: 00428210-00428250
 */

void __fastcall FUN_00428210(int *param_1)

{
  *(undefined4 *)((int)param_1 + 0xf2) = 0;
  *(undefined4 *)((int)param_1 + 0xee) = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xef;
  if ((short)param_1[0x30] == 0) {
    (**(code **)(*param_1 + 0x80))(0x7fffffff,(int)(short)param_1[9]);
    FUN_0040dfd0();
    *(undefined1 *)((int)param_1 + 0xf9) = 0;
  }
  return;
}


