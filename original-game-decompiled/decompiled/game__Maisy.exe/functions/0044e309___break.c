
/* ==== __break @ 0044e309 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e309-0044e309
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


