
/* ==== FUN_11015ac0 @ 11015ac0 ==== 
 * signature: undefined __cdecl FUN_11015ac0(char * param_1, char * param_2, size_t param_3)
 * body: 11015ac0-11015b54
 */

void __cdecl FUN_11015ac0(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  tm *_Tm;
  
  cVar1 = FUN_110062b0((uint *)(param_2 + 0xc),'\x01');
  if (cVar1 == '\0') {
    _Tm = *(tm **)(param_3 + 8);
  }
  else {
    _Tm = *(tm **)(param_3 + 4);
  }
  if (*(short *)(param_3 + 0x10) == 3) {
    switch(*(undefined2 *)(param_2 + 0x10)) {
    case 1:
      FUN_11015b70((undefined4 *)param_1,param_3,param_2,(short *)_Tm);
      return;
    case 2:
      FUN_110166c0((int)param_1,param_3,(int)param_2,(short *)_Tm);
      return;
    case 3:
      _strftime(param_1,param_3,param_2,_Tm);
      return;
    case 4:
      _strftime(param_1,param_3,param_2,_Tm);
      return;
    case 5:
      FUN_110166e0((undefined4 *)param_1,param_3,(int)param_2,(short *)_Tm);
    }
  }
  return;
}


