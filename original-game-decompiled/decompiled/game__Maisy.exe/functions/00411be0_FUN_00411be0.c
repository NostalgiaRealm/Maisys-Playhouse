
/* ==== FUN_00411be0 @ 00411be0 ==== 
 * signature: undefined __fastcall FUN_00411be0(int * param_1)
 * body: 00411be0-00411c2a
 */

void __fastcall FUN_00411be0(int *param_1)

{
  char cVar1;
  
  if (param_1[0x30] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xe8))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0xca) == '\0') {
        DeleteObject((HLOCAL)param_1[0x30]);
      }
      else {
        FUN_0043f720((HLOCAL)param_1[0x30]);
      }
      param_1[0x30] = 0;
    }
  }
  thunk_FUN_0040d050(param_1);
  return;
}


