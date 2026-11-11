
/* ==== __except1 @ 00497440 ==== 
 * signature: float10 __cdecl __except1(uint param_1, int param_2, uint param_3, undefined4 param_4, uint param_5, undefined4 param_6, uint param_7)
 * body: 00497440-004974fa
 * note: Library Function - Single Match  __except1  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 1998 Release */

float10 __cdecl
__except1(uint param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,undefined4 param_6,
         uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int _Value;
  float10 fVar2;
  uint local_58 [14];
  uint local_20;
  
  bVar1 = __handle_exc(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_20 = local_20 & 0xfffffffe;
    __raise_exc(local_58,&param_7,param_1,param_2,&param_3,&param_5);
  }
  _Value = __errcode(param_1);
  if ((DAT_004dfc10 == 0) && (_Value != 0)) {
    fVar2 = __umatherr(_Value,param_2);
    return fVar2;
  }
  __set_errno(_Value);
  __ctrlfp();
  return (float10)(double)CONCAT44(param_6,param_5);
}


