
/* ==== FUN_00469f80 @ 00469f80 ==== 
 * signature: undefined4 __fastcall FUN_00469f80(int * param_1)
 * body: 00469f80-00469fa1
 */

undefined4 __fastcall FUN_00469f80(int *param_1)

{
  if ((DAT_004dbdc4 == '\0') && ((*(byte *)((int)param_1 + 0x81) & 0x80) != 0)) {
    (**(code **)(*param_1 + 500))();
  }
  return *(undefined4 *)((int)param_1 + 0x4e);
}


