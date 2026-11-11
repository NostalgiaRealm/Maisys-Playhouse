
/* ==== FUN_10009e60 @ 10009e60 ==== 
 * signature: undefined1 * __cdecl FUN_10009e60(undefined4 * param_1, undefined1 * param_2, int param_3, int param_4)
 * body: 10009e60-10009ed2
 */

undefined1 * __cdecl FUN_10009e60(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int local_28 [4];
  char local_18 [24];
  
  FUN_1000be90(*param_1,param_1[1],local_28,local_18);
  FUN_1000bdf0(param_2 + (uint)(local_28[0] == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)local_28
              );
  FUN_10009ee0(param_2,param_3,param_4,local_28,'\0');
  return param_2;
}


