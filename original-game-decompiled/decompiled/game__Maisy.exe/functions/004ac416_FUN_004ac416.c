
/* ==== FUN_004ac416 @ 004ac416 ==== 
 * signature: CObject * __cdecl FUN_004ac416(CRuntimeClass * param_1, CObject * param_2)
 * body: 004ac416-004ac433
 */

CObject * __cdecl FUN_004ac416(CRuntimeClass *param_1,CObject *param_2)

{
  int iVar1;
  
  if ((param_2 != (CObject *)0x0) && (iVar1 = CObject::IsKindOf(param_2,param_1), iVar1 != 0)) {
    return param_2;
  }
  return (CObject *)0x0;
}


