
/* ==== FUN_0043c620 @ 0043c620 ==== 
 * signature: bool __cdecl FUN_0043c620(short param_1, char * param_2)
 * body: 0043c620-0043c69b
 */

bool __cdecl FUN_0043c620(short param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char local_104 [256];
  
  cVar1 = FUN_00447e00();
  bVar3 = false;
  if (cVar1 != '\0') {
    if (param_2 != (char *)0x0) {
      iVar2 = AfxMessageBox(param_2,0x31,0);
      FUN_00447e20();
      return iVar2 == 1;
    }
    FUN_0043c480(local_104,0x100,0x401,(int)param_1);
    iVar2 = AfxMessageBox(local_104,0x31,0);
    bVar3 = iVar2 == 1;
    FUN_00447e20();
  }
  return bVar3;
}


