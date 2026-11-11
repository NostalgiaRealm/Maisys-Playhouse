
/* ==== __break @ 0044e59b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e59b-0044e59b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


