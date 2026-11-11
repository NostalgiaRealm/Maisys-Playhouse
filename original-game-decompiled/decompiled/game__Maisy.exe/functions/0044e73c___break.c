
/* ==== __break @ 0044e73c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e73c-0044e73c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


