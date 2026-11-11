
/* ==== FUN_11024d00 @ 11024d00 ==== 
 * signature: undefined4 __cdecl FUN_11024d00(undefined4 * param_1, undefined4 param_2, short param_3)
 * body: 11024d00-11024d66
 */

undefined4 __cdecl FUN_11024d00(undefined4 *param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  void *_Dst;
  void *_Src;
  
  uVar1 = FUN_110026d0(param_1,param_3 * 8);
  _Dst = (void *)FUN_11002840(param_1,uVar1);
  _Src = (void *)FUN_11002840(param_1,param_2);
  FID_conflict__memcpy(_Dst,_Src,(int)param_3 << 3);
  FUN_110028a0(param_1,uVar1);
  FUN_110028a0(param_1,param_2);
  return uVar1;
}


