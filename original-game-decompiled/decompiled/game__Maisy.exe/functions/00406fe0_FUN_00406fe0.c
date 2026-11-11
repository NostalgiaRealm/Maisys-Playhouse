
/* ==== FUN_00406fe0 @ 00406fe0 ==== 
 * signature: int __cdecl FUN_00406fe0(int param_1, int param_2, void * param_3)
 * body: 00406fe0-00407028
 */

int __cdecl FUN_00406fe0(int param_1,int param_2,void *param_3)

{
  undefined1 local_3c [12];
  uint local_30;
  undefined1 local_20 [12];
  uint local_14;
  
  FUN_00430370(param_3,param_1 + 1,local_20);
  FUN_00430370(param_3,param_2 + 1,local_3c);
  if (local_30 < local_14) {
    return 1;
  }
  return -(uint)(local_14 < local_30);
}


