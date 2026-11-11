
/* ==== __break @ 0044e2de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e2de-0044e2de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


