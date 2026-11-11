
/* ==== FUN_10009fe0 @ 10009fe0 ==== 
 * signature: char * __cdecl FUN_10009fe0(undefined4 * param_1, char * param_2, uint param_3)
 * body: 10009fe0-1000a045
 */

char * __cdecl FUN_10009fe0(undefined4 *param_1,char *param_2,uint param_3)

{
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_1000be90(*param_1,param_1[1],&local_28,local_18);
  FUN_1000bdf0(param_2 + (local_28 == 0x2d),local_24 + param_3,(int)&local_28);
  FUN_1000a050(param_2,param_3,&local_28,'\0');
  return param_2;
}


