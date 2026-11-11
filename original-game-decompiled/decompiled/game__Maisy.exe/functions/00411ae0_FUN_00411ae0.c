
/* ==== FUN_00411ae0 @ 00411ae0 ==== 
 * signature: bool __cdecl FUN_00411ae0(HMMIO param_1, int * param_2)
 * body: 00411ae0-00411b15
 */

bool __cdecl FUN_00411ae0(HMMIO param_1,int *param_2)

{
  MMRESULT MVar1;
  _MMIOINFO local_4c;
  
  MVar1 = mmioGetInfo(param_1,&local_4c,0);
  *param_2 = (int)(local_4c.pchNext + (local_4c.lBufOffset - (int)local_4c.pchBuffer));
  return MVar1 == 0;
}


