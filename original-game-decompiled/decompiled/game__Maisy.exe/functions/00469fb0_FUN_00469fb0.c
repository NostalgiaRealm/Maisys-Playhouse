
/* ==== FUN_00469fb0 @ 00469fb0 ==== 
 * signature: undefined4 __fastcall FUN_00469fb0(int * param_1)
 * body: 00469fb0-00469fd1
 */

undefined4 __fastcall FUN_00469fb0(int *param_1)

{
  if ((DAT_004dbdc4 == '\0') && ((*(byte *)((int)param_1 + 0x81) & 0x80) != 0)) {
    (**(code **)(*param_1 + 500))();
  }
  return *(undefined4 *)((int)param_1 + 0x6e);
}


