
/* ==== FUN_00432370 @ 00432370 ==== 
 * signature: int __cdecl FUN_00432370(short param_1, short * param_2, short * param_3)
 * body: 00432370-004323a1
 */

int __cdecl FUN_00432370(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_1 != 2) {
    return 0x10000;
  }
  iVar1 = FUN_00431f00(param_2,param_2 + 0x16,(short *)0x0,&DAT_004dacd4,param_3,'\0','\x01');
  return iVar1;
}


