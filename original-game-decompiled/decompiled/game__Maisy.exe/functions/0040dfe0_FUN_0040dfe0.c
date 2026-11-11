
/* ==== FUN_0040dfe0 @ 0040dfe0 ==== 
 * signature: int __fastcall FUN_0040dfe0(int * param_1)
 * body: 0040dfe0-0040dff9
 */

int __fastcall FUN_0040dfe0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = (**(code **)(*param_1 + 0x124))();
  if (cVar1 != '\0') {
    iVar2 = param_1[0x1e];
  }
  return iVar2;
}


