
/* ==== FUN_004619b0 @ 004619b0 ==== 
 * signature: char __fastcall FUN_004619b0(int * param_1)
 * body: 004619b0-00461a3f
 */

char __fastcall FUN_004619b0(int *param_1)

{
  char cVar1;
  int iVar2;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int **)((int)param_1 + 0x52) == (int *)0x0) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x2c8))(0);
    return '\x01' - (iVar2 == 0);
  }
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0x52) + 0x230))(&local_c);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x398))(&local_14,0);
    if ((((int)local_14 - (int)local_10) + (int)local_8 == (int)local_c) &&
       (((int)local_12 - (int)local_e) + (int)local_6 == (int)local_a)) {
      return '\0';
    }
    return '\x01';
  }
  return '\x01';
}


