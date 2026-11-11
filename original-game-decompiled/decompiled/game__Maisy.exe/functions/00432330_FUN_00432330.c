
/* ==== FUN_00432330 @ 00432330 ==== 
 * signature: int __cdecl FUN_00432330(short param_1, short * param_2, short * param_3)
 * body: 00432330-00432361
 */

int __cdecl FUN_00432330(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_1 != 2) {
    return 0x10000;
  }
  iVar1 = FUN_00431f00(param_2,param_2 + 0x16,(short *)0x0,&DAT_004dacd4,param_3,'\x01','\x01');
  return iVar1;
}


