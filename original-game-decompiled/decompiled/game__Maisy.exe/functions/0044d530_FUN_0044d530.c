
/* ==== FUN_0044d530 @ 0044d530 ==== 
 * signature: undefined __fastcall FUN_0044d530(void * param_1)
 * body: 0044d530-0044d55b
 */

void __fastcall FUN_0044d530(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = FUN_0044e340((int)param_1);
  if (0 < iVar1) {
    do {
      FUN_0044db20(param_1,iVar2,0,'\x01','\x01');
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return;
}


