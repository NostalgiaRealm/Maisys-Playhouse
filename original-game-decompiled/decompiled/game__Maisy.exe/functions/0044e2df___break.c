
/* ==== __break @ 0044e2df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e2df-0044e2df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


