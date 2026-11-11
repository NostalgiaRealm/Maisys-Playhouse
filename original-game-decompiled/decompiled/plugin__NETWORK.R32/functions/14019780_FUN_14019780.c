
/* ==== FUN_14019780 @ 14019780 ==== 
 * signature: undefined __cdecl FUN_14019780(int param_1, float * param_2, char * param_3)
 * body: 14019780-140197cb
 */

void __cdecl FUN_14019780(int param_1,float *param_2,char *param_3)

{
  _CRT_FLOAT local_c;
  _CRT_FLOAT local_8;
  float local_4;
  
  if (param_1 != 0) {
    FID_conflict___atodbl(&local_8,param_3);
    *param_2 = local_8.f;
    param_2[1] = local_4;
    return;
  }
  FID_conflict___atodbl(&local_c,param_3);
  *param_2 = local_c.f;
  return;
}


