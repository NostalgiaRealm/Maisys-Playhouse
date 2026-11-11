
/* ==== FUN_1000c2aa @ 1000c2aa ==== 
 * signature: undefined __cdecl FUN_1000c2aa(HANDLE param_1, LPCSTR param_2, int param_3)
 * body: 1000c2aa-1000c2f7
 */

void __cdecl FUN_1000c2aa(HANDLE param_1,LPCSTR param_2,int param_3)

{
  CHAR CVar1;
  DWORD DVar2;
  
  DVar2 = lstrlenA(param_2);
  if (param_3 == 0) {
    CVar1 = FUN_10014819(param_2);
    if (CVar1 == '\n') {
      DVar2 = DVar2 - 1;
    }
  }
  if ((int)DVar2 < 1) {
    DVar2 = 1;
  }
  else {
    DVar2 = FileWrite(param_1,param_2,DVar2);
  }
  if (0 < (int)DVar2) {
    FileWrite(param_1,&DAT_1001f3a4,2);
  }
  return;
}


