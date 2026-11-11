
/* ==== FUN_0043c550 @ 0043c550 ==== 
 * signature: bool __cdecl FUN_0043c550(short param_1)
 * body: 0043c550-0043c5a6
 */

bool __cdecl FUN_0043c550(short param_1)

{
  char cVar1;
  int iVar2;
  char local_104 [256];
  
  cVar1 = FUN_00447e00();
  if (cVar1 != '\0') {
    FUN_0043c480(local_104,0x100,0x401,(int)param_1);
    iVar2 = AfxMessageBox(local_104,0x14,0);
    return (short)iVar2 == 6;
  }
  return false;
}


