
/* ==== FUN_0043c6a0 @ 0043c6a0 ==== 
 * signature: undefined4 __cdecl FUN_0043c6a0(short param_1, char * param_2)
 * body: 0043c6a0-0043c706
 */

undefined4 __cdecl FUN_0043c6a0(short param_1,char *param_2)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  char local_104 [256];
  
  cVar1 = FUN_00447e00();
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    if (param_2 != (char *)0x0) {
      AfxMessageBox(param_2,0x10,0);
      uVar2 = FUN_00447e20();
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    FUN_0043c480(local_104,0x100,0x401,(int)param_1);
    AfxMessageBox(local_104,0x10,0);
    FUN_00447e20();
    uVar3 = extraout_var_00;
  }
  return CONCAT31(uVar3,1);
}


