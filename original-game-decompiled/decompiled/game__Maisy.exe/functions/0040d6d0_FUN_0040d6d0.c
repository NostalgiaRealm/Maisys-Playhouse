
/* ==== FUN_0040d6d0 @ 0040d6d0 ==== 
 * signature: char __fastcall FUN_0040d6d0(int * param_1)
 * body: 0040d6d0-0040d6fd
 */

char __fastcall FUN_0040d6d0(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x124))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(iVar1 + 0x15c))(0xf);
    if (cVar2 == '\0') {
      return '\x01' - (*(int *)((int)param_1 + 0x52) == 0);
    }
  }
  return '\x01';
}


