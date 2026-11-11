
/* ==== FUN_0047d800 @ 0047d800 ==== 
 * signature: int __fastcall FUN_0047d800(int * param_1)
 * body: 0047d800-0047d81f
 */

int __fastcall FUN_0047d800(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x124))();
  if (cVar1 != '\0') {
    return param_1[0x2f];
  }
  iVar2 = FUN_0040dfe0(param_1);
  return iVar2;
}


